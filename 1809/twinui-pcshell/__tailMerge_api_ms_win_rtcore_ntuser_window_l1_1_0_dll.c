/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180085C2D
 * Callers:
 *     __imp_load_GetWindow @ 0x180085C21 (__imp_load_GetWindow.c)
 *     __imp_load_IsWindowEnabled @ 0x180085CAC (__imp_load_IsWindowEnabled.c)
 *     __imp_load_PostMessageW @ 0x180085CC0 (__imp_load_PostMessageW.c)
 *     __imp_load_AllowSetForegroundWindow @ 0x180085CD2 (__imp_load_AllowSetForegroundWindow.c)
 *     __imp_load_GetWindowThreadProcessId @ 0x180085CE4 (__imp_load_GetWindowThreadProcessId.c)
 *     __imp_load_GetForegroundWindow @ 0x180085CF6 (__imp_load_GetForegroundWindow.c)
 *     __imp_load_RemovePropW @ 0x180085D08 (__imp_load_RemovePropW.c)
 *     __imp_load_SetForegroundWindow @ 0x180085D1A (__imp_load_SetForegroundWindow.c)
 *     __imp_load_RegisterWindowMessageW @ 0x180085D2C (__imp_load_RegisterWindowMessageW.c)
 *     __imp_load_SetPropW @ 0x180085D3E (__imp_load_SetPropW.c)
 *     __imp_load_GetPropW @ 0x180085D50 (__imp_load_GetPropW.c)
 *     __imp_load_IsWindowVisible @ 0x180085D62 (__imp_load_IsWindowVisible.c)
 *     __imp_load_SetWindowLongPtrW @ 0x180085D74 (__imp_load_SetWindowLongPtrW.c)
 *     __imp_load_GetWindowLongPtrW @ 0x180085D86 (__imp_load_GetWindowLongPtrW.c)
 *     __imp_load_SendNotifyMessageW @ 0x180085DA0 (__imp_load_SendNotifyMessageW.c)
 *     __imp_load_DestroyWindow @ 0x180085DC4 (__imp_load_DestroyWindow.c)
 *     __imp_load_EnumWindows @ 0x180085DD6 (__imp_load_EnumWindows.c)
 *     __imp_load_DispatchMessageW @ 0x180085DE8 (__imp_load_DispatchMessageW.c)
 *     __imp_load_TranslateMessage @ 0x180085DFA (__imp_load_TranslateMessage.c)
 *     __imp_load_PostQuitMessage @ 0x180085E0C (__imp_load_PostQuitMessage.c)
 *     __imp_load_PeekMessageW @ 0x180085E1E (__imp_load_PeekMessageW.c)
 *     __imp_load_DefWindowProcW @ 0x180085EC0 (__imp_load_DefWindowProcW.c)
 *     __imp_load_ShowWindow @ 0x180085ED2 (__imp_load_ShowWindow.c)
 *     __imp_load_SetWindowPos @ 0x180085FFA (__imp_load_SetWindowPos.c)
 *     __imp_load_GetWindowRect @ 0x18008601E (__imp_load_GetWindowRect.c)
 *     __imp_load_GetClientRect @ 0x1800860BB (__imp_load_GetClientRect.c)
 *     __imp_load_EnableWindow @ 0x1800860CD (__imp_load_EnableWindow.c)
 *     __imp_load_FindWindowW @ 0x1800860DF (__imp_load_FindWindowW.c)
 *     __imp_load_IsWindow @ 0x1800860F1 (__imp_load_IsWindow.c)
 *     __imp_load_GetWindowLongW @ 0x18008616F (__imp_load_GetWindowLongW.c)
 *     __imp_load_GetClassNameW @ 0x180086181 (__imp_load_GetClassNameW.c)
 *     __imp_load_SetWindowTextW @ 0x180086254 (__imp_load_SetWindowTextW.c)
 *     __imp_load_ClientToScreen @ 0x180086266 (__imp_load_ClientToScreen.c)
 *     __imp_load_GetAncestor @ 0x18008628A (__imp_load_GetAncestor.c)
 *     __imp_load_SetWindowLongW @ 0x18008629C (__imp_load_SetWindowLongW.c)
 *     __imp_load_ScreenToClient @ 0x1800862AE (__imp_load_ScreenToClient.c)
 *     __imp_load_SendMessageW @ 0x1800862C0 (__imp_load_SendMessageW.c)
 *     __imp_load_PostThreadMessageW @ 0x1800862D2 (__imp_load_PostThreadMessageW.c)
 *     __imp_load_GetMessageW @ 0x1800862E4 (__imp_load_GetMessageW.c)
 *     __imp_load_GetDesktopWindow @ 0x180086381 (__imp_load_GetDesktopWindow.c)
 *     __imp_load_GetWindowTextW @ 0x18008641E (__imp_load_GetWindowTextW.c)
 *     __imp_load_EnumPropsExW @ 0x1800864F1 (__imp_load_EnumPropsExW.c)
 *     __imp_load_SendMessageTimeoutW @ 0x180086539 (__imp_load_SendMessageTimeoutW.c)
 *     __imp_load_SendMessageCallbackW @ 0x18008655D (__imp_load_SendMessageCallbackW.c)
 *     __imp_load_GetCursorPos @ 0x1800865A5 (__imp_load_GetCursorPos.c)
 *     __imp_load_GetMessageExtraInfo @ 0x1800865B7 (__imp_load_GetMessageExtraInfo.c)
 *     __imp_load_SetTimer @ 0x1800865C9 (__imp_load_SetTimer.c)
 *     __imp_load_KillTimer @ 0x1800865DB (__imp_load_KillTimer.c)
 *     __imp_load_WindowFromPoint @ 0x1800887B0 (__imp_load_WindowFromPoint.c)
 *     __imp_load_SetMessageExtraInfo @ 0x1800887C2 (__imp_load_SetMessageExtraInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180080A00 (__delayLoadHelper2.c)
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
