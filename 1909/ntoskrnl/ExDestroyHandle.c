/*
 * XREFs of ExDestroyHandle @ 0x140611370
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspThreadDelete @ 0x140610F10 (PspThreadDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1406122D0 (AlpcpFreeMessageFunction.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406C60AC (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406DABBC (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x140082CD8 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1406113D0 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x14090B40C (ExpUpdateDebugInfo.c)
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
