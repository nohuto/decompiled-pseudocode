/*
 * XREFs of LdrpQueueWork @ 0x1800718CC
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpSignalModuleMapped @ 0x1800274C8 (LdrpSignalModuleMapped.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     TpPostWork @ 0x1800148A0 (TpPostWork.c)
 */

void __fastcall LdrpQueueWork(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 40) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (_QWORD *)qword_1801652D8;
    v3 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801652D8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801652D8;
    *v3 = &LdrpWorkQueue;
    *v2 = v3;
    qword_1801652D8 = a1 + 64;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
