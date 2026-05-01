/*
 * XREFs of ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x18008FB60
 * Callers:
 *     ?OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801E2A58 (-OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?GetTileForWinRtView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIWinRTApplicationView@@@Z @ 0x1801FF6AC (-GetTileForWinRtView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIUnifiedTile@UnifiedTile@Shell@Wind.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<IApplicationView,IWinRTApplicationView * &>(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
