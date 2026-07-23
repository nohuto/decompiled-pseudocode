/*
 * XREFs of KiIsSrsoMitigationSupported @ 0x1401B4840
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EF30 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoMitigationSupported(__int64 a1, _QWORD *a2)
{
  return ((unsigned __int8)*a2 >> 2) & 1;
}
