/*
 * XREFs of ?SetArrangeState@ApplicationViewOperation@@UEAAJW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x180081C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetArrangeState(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 80) = a2;
  return 0LL;
}
