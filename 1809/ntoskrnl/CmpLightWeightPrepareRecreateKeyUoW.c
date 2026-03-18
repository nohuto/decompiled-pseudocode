/*
 * XREFs of CmpLightWeightPrepareRecreateKeyUoW @ 0x1405818C4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140694A3C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405FAC04 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return (unsigned __int8)HvpMarkCellDirty(
                            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL));
}
