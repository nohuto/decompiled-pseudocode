/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180035638
 * Callers:
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18000477C (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180033CA0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18003554C (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x18004B700 (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180075DE0 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x180077EC0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?close_reset@?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180078754 (-close_reset@-$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1-UnsubscribeWilWn.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetNtDllModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = result;
  }
  return result;
}
