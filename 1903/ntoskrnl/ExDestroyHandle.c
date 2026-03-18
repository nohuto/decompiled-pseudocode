/*
 * XREFs of ExDestroyHandle @ 0x14060F860
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspThreadDelete @ 0x14060F400 (PspThreadDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1406107C0 (AlpcpFreeMessageFunction.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406C77CC (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406DA2BC (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x1400828D8 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x14060F8C0 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
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
