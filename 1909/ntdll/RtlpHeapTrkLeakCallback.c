/*
 * XREFs of RtlpHeapTrkLeakCallback @ 0x1800F8340
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800F7D10 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x1800F7E80 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkFindStack @ 0x1800F7FD4 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkReportResult @ 0x1800F8544 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F8638 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

__int64 __fastcall RtlpHeapTrkLeakCallback(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 Stack; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *Src; // [rsp+20h] [rbp-48h]
  __int64 *v13; // [rsp+28h] [rbp-40h]
  __int64 *v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h] BYREF
  const void *v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = (const void *)a3;
  v16 = 0x10000LL;
  v17 = 0LL;
  if ( !byte_180166A40 )
  {
    if ( byte_1801627E9 )
    {
      v15 = 1;
      byte_1801627E9 = 0;
      _InterlockedExchange(&dword_180166A44, 1);
      v14 = &v16;
      v13 = &v17;
      Src = 0LL;
      if ( (int)ZwMapViewOfSection() < 0 )
        return 0LL;
      if ( !TrkContext )
        return 0LL;
      *(_DWORD *)(TrkContext + 48) = NtCurrentTeb()->ClientId.UniqueProcess;
      if ( !RtlpHeapTrkDumpStacks() )
        return 0LL;
      a3 = (unsigned __int64)v18;
    }
    if ( TrkContext )
    {
      if ( !a2 )
      {
        RtlpHeapTrkDumpOutstandingAllocs();
        if ( *(_DWORD *)(TrkContext + 60) )
        {
          if ( !(unsigned __int8)RtlpHeapTrkSyncWithDiagnoser(v8, v7, v9, v10, Src, v13, v14, v15) )
            return 0LL;
          *(_DWORD *)(TrkContext + 60) = 0;
          dword_1801627EC = 0;
        }
        RtlpHeapTrkSyncWithDiagnoser(v8, v7, v9, v10, Src, v13, v14, v15);
        return 0LL;
      }
      Stack = RtlpHeapTrkFindStack((a3 >> 3) | 0xE000000000000000uLL);
      if ( (unsigned __int8)RtlpHeapTrkReportResult(0x20uLL, &v18, 8uLL) && Stack )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
          v18,
          a4,
          (const void *)(Stack + 24),
          *(unsigned __int16 *)(Stack + 16));
      }
    }
  }
  return 0LL;
}
