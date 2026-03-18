/*
 * XREFs of ExDestroyHandle @ 0x1405FB318
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     PspThreadDelete @ 0x1405FB0B0 (PspThreadDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1405FC2E0 (AlpcpFreeMessageFunction.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406AD4C0 (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406B741C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14008D88C (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1405FB378 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1408CE408 (ExpUpdateDebugInfo.c)
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
