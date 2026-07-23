/*
 * XREFs of RtlDetectHeapLeaks @ 0x180084DF0
 * Callers:
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpInitializeLeakDetection @ 0x1800F7174 (RtlpInitializeLeakDetection.c)
 *     RtlpReadProcessHeaps @ 0x1800F7540 (RtlpReadProcessHeaps.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F77FC (RtlpScanProcessVirtualMemory.c)
 */

void RtlDetectHeapLeaks(void)
{
  struct _PEB *v0; // rbx
  struct _PEB *v1; // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x2000000) == 0
    && (qword_180163C48 || (RtlpShutdownProcessFlags & 3) != 0) )
  {
    RtlpLeaksCount = 0;
    RtlpLeakHeap = RtlCreateHeap(3u, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( RtlpLeakHeap )
    {
      v0 = NtCurrentPeb();
      if ( v0->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Inspecting leaks at process shutdown ...\n");
      if ( (unsigned __int8)RtlpInitializeLeakDetection() )
      {
        RtlpLeakHeapAddress = (__int64)v0->ProcessHeaps[v0->NumberOfHeaps - 1];
        RtlpReadProcessHeaps();
        RtlpScanProcessVirtualMemory();
        RtlDestroyHeap(RtlpLeakHeap);
        RtlpLeakHeap = 0LL;
        v1 = NtCurrentPeb();
        if ( RtlpLeaksCount )
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
          if ( (RtlpShutdownProcessFlags & 2) != 0 )
            __debugbreak();
        }
        else
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("No leaks detected.\n");
        }
      }
      else
      {
        RtlDestroyHeap(RtlpLeakHeap);
      }
    }
  }
}
