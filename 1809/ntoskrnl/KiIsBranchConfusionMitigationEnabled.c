/*
 * XREFs of KiIsBranchConfusionMitigationEnabled @ 0x1401B45D4
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F83B0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationEnabled(_QWORD *a1)
{
  return (*a1 & 0x300000008000LL) == 0x8000;
}
