/*
 * XREFs of ?TabletModeChanged@PeoplePaneViewManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1800879E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PeoplePaneViewManager::TabletModeChanged(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 96) = a2;
  return 0LL;
}
