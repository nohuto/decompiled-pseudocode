/*
 * XREFs of KiIsRfdsMitigationSupported @ 0x1401B45E4
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDF0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsRfdsMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 24) & 1LL;
}
