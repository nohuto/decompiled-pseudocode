/*
 * XREFs of ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180248204
 * Callers:
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800B5404 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(__int64 a1, _QWORD *a2)
{
  (**(void (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, a1);
  return a1;
}
