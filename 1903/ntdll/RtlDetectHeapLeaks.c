/*
 * XREFs of RtlDetectHeapLeaks @ 0x18006B5E0
 * Callers:
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1800F4494 @ 0x1800F4494 (sub_1800F4494.c)
 *     sub_1800F4860 @ 0x1800F4860 (sub_1800F4860.c)
 *     sub_1800F4B1C @ 0x1800F4B1C (sub_1800F4B1C.c)
 */

struct _PEB *RtlDetectHeapLeaks()
{
  struct _PEB *result; // rax
  struct _PEB *v1; // rbx
  struct _PEB *v2; // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) == 0 )
  {
    result = NtCurrentPeb();
    if ( (result->NtGlobalFlag & 0x2000000) == 0 && (qword_180163CE8 || (byte_180166558 & 3) != 0) )
    {
      dword_180166998 = 0;
      result = (struct _PEB *)RtlCreateHeap(3, 0LL, 0LL, 0LL, 0LL, 0LL);
      qword_180163B98 = (__int64)result;
      if ( result )
      {
        v1 = NtCurrentPeb();
        if ( v1->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Inspecting leaks at process shutdown ...\n");
        if ( (unsigned __int8)sub_1800F4494() )
        {
          qword_180166990 = (__int64)v1->ProcessHeaps[v1->NumberOfHeaps - 1];
          sub_1800F4860();
          sub_1800F4B1C();
          RtlDestroyHeap(qword_180163B98);
          qword_180163B98 = 0LL;
          v2 = NtCurrentPeb();
          if ( dword_180166998 )
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            result = (struct _PEB *)DbgPrint("%ld leaks detected.\n", dword_180166998);
            if ( (byte_180166558 & 2) != 0 )
              __debugbreak();
          }
          else
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            return (struct _PEB *)DbgPrint("No leaks detected.\n");
          }
        }
        else
        {
          return (struct _PEB *)RtlDestroyHeap(qword_180163B98);
        }
      }
    }
  }
  return result;
}
