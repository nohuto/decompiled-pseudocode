/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18008B42B
 * Callers:
 *     __imp_load_GetWindow @ 0x18008B41F (__imp_load_GetWindow.c)
 *     __imp_load_GetWindowThreadProcessId @ 0x18008B535 (__imp_load_GetWindowThreadProcessId.c)
 *     __imp_load_IsWindowEnabled @ 0x18008B547 (__imp_load_IsWindowEnabled.c)
 *     __imp_load_PostMessageW @ 0x18008B560 (__imp_load_PostMessageW.c)
 *     __imp_load_AllowSetForegroundWindow @ 0x18008B572 (__imp_load_AllowSetForegroundWindow.c)
 *     __imp_load_GetForegroundWindow @ 0x18008B584 (__imp_load_GetForegroundWindow.c)
 *     __imp_load_RemovePropW @ 0x18008B596 (__imp_load_RemovePropW.c)
 *     __imp_load_SetForegroundWindow @ 0x18008B5A8 (__imp_load_SetForegroundWindow.c)
 *     __imp_load_RegisterWindowMessageW @ 0x18008B5BA (__imp_load_RegisterWindowMessageW.c)
 *     __imp_load_SetPropW @ 0x18008B5CC (__imp_load_SetPropW.c)
 *     __imp_load_GetPropW @ 0x18008B5DE (__imp_load_GetPropW.c)
 *     __imp_load_IsWindowVisible @ 0x18008B5F0 (__imp_load_IsWindowVisible.c)
 *     __imp_load_SetWindowLongPtrW @ 0x18008B602 (__imp_load_SetWindowLongPtrW.c)
 *     __imp_load_GetWindowLongPtrW @ 0x18008B614 (__imp_load_GetWindowLongPtrW.c)
 *     __imp_load_SendNotifyMessageW @ 0x18008B630 (__imp_load_SendNotifyMessageW.c)
 *     __imp_load_DestroyWindow @ 0x18008B654 (__imp_load_DestroyWindow.c)
 *     __imp_load_EnumWindows @ 0x18008B666 (__imp_load_EnumWindows.c)
 *     __imp_load_DispatchMessageW @ 0x18008B678 (__imp_load_DispatchMessageW.c)
 *     __imp_load_TranslateMessage @ 0x18008B68A (__imp_load_TranslateMessage.c)
 *     __imp_load_PostQuitMessage @ 0x18008B69C (__imp_load_PostQuitMessage.c)
 *     __imp_load_PeekMessageW @ 0x18008B6AE (__imp_load_PeekMessageW.c)
 *     __imp_load_DefWindowProcW @ 0x18008B750 (__imp_load_DefWindowProcW.c)
 *     __imp_load_ShowWindow @ 0x18008B762 (__imp_load_ShowWindow.c)
 *     __imp_load_SetWindowPos @ 0x18008B88A (__imp_load_SetWindowPos.c)
 *     __imp_load_GetWindowRect @ 0x18008B8AE (__imp_load_GetWindowRect.c)
 *     __imp_load_GetClientRect @ 0x18008B94B (__imp_load_GetClientRect.c)
 *     __imp_load_EnableWindow @ 0x18008B95D (__imp_load_EnableWindow.c)
 *     __imp_load_FindWindowW @ 0x18008B96F (__imp_load_FindWindowW.c)
 *     __imp_load_IsWindow @ 0x18008B981 (__imp_load_IsWindow.c)
 *     __imp_load_GetWindowLongW @ 0x18008B9FF (__imp_load_GetWindowLongW.c)
 *     __imp_load_GetClassNameW @ 0x18008BA11 (__imp_load_GetClassNameW.c)
 *     __imp_load_SetWindowTextW @ 0x18008BAE4 (__imp_load_SetWindowTextW.c)
 *     __imp_load_ClientToScreen @ 0x18008BB81 (__imp_load_ClientToScreen.c)
 *     __imp_load_GetAncestor @ 0x18008BBA5 (__imp_load_GetAncestor.c)
 *     __imp_load_SetWindowLongW @ 0x18008BBB7 (__imp_load_SetWindowLongW.c)
 *     __imp_load_SendMessageW @ 0x18008BBC9 (__imp_load_SendMessageW.c)
 *     __imp_load_GetCursorPos @ 0x18008BC66 (__imp_load_GetCursorPos.c)
 *     __imp_load_ScreenToClient @ 0x18008BC8A (__imp_load_ScreenToClient.c)
 *     __imp_load_PostThreadMessageW @ 0x18008BC9C (__imp_load_PostThreadMessageW.c)
 *     __imp_load_GetMessageW @ 0x18008BCAE (__imp_load_GetMessageW.c)
 *     __imp_load_GetDesktopWindow @ 0x18008BCC0 (__imp_load_GetDesktopWindow.c)
 *     __imp_load_GetWindowTextW @ 0x18008BCD2 (__imp_load_GetWindowTextW.c)
 *     __imp_load_SetTimer @ 0x18008BCE4 (__imp_load_SetTimer.c)
 *     __imp_load_EnumPropsExW @ 0x18008BDB7 (__imp_load_EnumPropsExW.c)
 *     __imp_load_SendMessageTimeoutW @ 0x18008BDFF (__imp_load_SendMessageTimeoutW.c)
 *     __imp_load_SendMessageCallbackW @ 0x18008BE23 (__imp_load_SendMessageCallbackW.c)
 *     __imp_load_GetMessageExtraInfo @ 0x18008BE6B (__imp_load_GetMessageExtraInfo.c)
 *     __imp_load_KillTimer @ 0x18008BE7D (__imp_load_KillTimer.c)
 *     __imp_load_WindowFromPoint @ 0x18008E200 (__imp_load_WindowFromPoint.c)
 *     __imp_load_SetMessageExtraInfo @ 0x18008E212 (__imp_load_SetMessageExtraInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180085E40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_window_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
