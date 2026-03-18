/*
 * XREFs of ExpTimeRefreshDpcRoutine @ 0x140170AF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1401BA574 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine7 @ 0x1401CEA70 (KiCustomAccessRoutine7.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall ExpTimeRefreshDpcRoutine(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD v8[58]; // [rsp+0h] [rbp-1D8h] BYREF

  v8[53] = v8;
  memset(&v8[40], 0, 0x60uLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    LODWORD(v8[7]) = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v8[51] = a3;
    v8[48] = __ROL8__(a2, a3);
    v8[43] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine7(a2);
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem(&ExpTimeRefreshWorkItem, DelayedWorkQueue);
}
