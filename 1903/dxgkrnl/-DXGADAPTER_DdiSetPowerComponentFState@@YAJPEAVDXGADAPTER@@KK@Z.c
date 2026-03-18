/*
 * XREFs of ?DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z @ 0x1C003E040
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C00399C4 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 */

__int64 __fastcall DXGADAPTER_DdiSetPowerComponentFState(struct DXGADAPTER *a1, __int64 a2, const GUID *a3)
{
  return DXGADAPTER::DdiSetPowerComponentFState(a1, a2, a3);
}
