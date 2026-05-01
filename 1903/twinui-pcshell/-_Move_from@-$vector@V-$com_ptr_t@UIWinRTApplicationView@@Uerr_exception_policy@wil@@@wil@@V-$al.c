/*
 * XREFs of ?_Move_from@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX$$QEAV12@U?$integral_constant@_N$00@2@@Z @ 0x1800A99E4
 * Callers:
 *     ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1800A7E00 (-GetActiveApps@UwpAppStateManager@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800A8DA0 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Move_from(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  result = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return result;
}
