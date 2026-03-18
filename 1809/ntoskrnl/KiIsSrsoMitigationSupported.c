/*
 * XREFs of KiIsSrsoMitigationSupported @ 0x1401B46E0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDD0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoMitigationSupported(__int64 a1, _QWORD *a2)
{
  return ((unsigned __int8)*a2 >> 2) & 1;
}
