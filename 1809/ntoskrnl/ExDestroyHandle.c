/*
 * XREFs of ExDestroyHandle @ 0x1405FC318
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1405FD2E0 (AlpcpFreeMessageFunction.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406AE740 (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406B869C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14008D7CC (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1405FC378 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1408CF6A8 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = ExSweepSingleHandle(a1, a3);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}
