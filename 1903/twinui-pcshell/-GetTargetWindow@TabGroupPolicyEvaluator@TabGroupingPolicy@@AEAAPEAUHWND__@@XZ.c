/*
 * XREFs of ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180244794
 * Callers:
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x180243DE8 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 *     ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180244658 (-GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1802447D8 (-GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGrouping@ViewM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this)
{
  char *v1; // rbx
  HWND result; // rax
  __int64 v3; // rcx

  v1 = (char *)this + 64;
  result = (HWND)*((_QWORD *)this + 8);
  if ( !result )
  {
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 24LL))(v3, v1);
      return *(HWND *)v1;
    }
  }
  return result;
}
