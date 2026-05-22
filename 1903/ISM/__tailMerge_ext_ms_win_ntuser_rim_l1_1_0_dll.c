/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x18002D816
 * Callers:
 *     __imp_load_RIMGetDeviceProperties @ 0x18002D80A (__imp_load_RIMGetDeviceProperties.c)
 *     __imp_load_RIMFreeInputBuffer @ 0x18002D895 (__imp_load_RIMFreeInputBuffer.c)
 *     __imp_load_RIMUnregisterForInput @ 0x18002D8A7 (__imp_load_RIMUnregisterForInput.c)
 *     __imp_load_RIMRegisterForInput @ 0x18002D8B9 (__imp_load_RIMRegisterForInput.c)
 *     __imp_load_RIMReadInput @ 0x18002D8CB (__imp_load_RIMReadInput.c)
 *     __imp_load_RIMOnPnpNotification @ 0x18002D8DD (__imp_load_RIMOnPnpNotification.c)
 *     __imp_load_RIMOnTimerNotification @ 0x18002D8EF (__imp_load_RIMOnTimerNotification.c)
 *     __imp_load_RIMGetSourceProcessId @ 0x18002D901 (__imp_load_RIMGetSourceProcessId.c)
 *     __imp_load_RIMEnableMonitorMappingForDevice @ 0x18002D913 (__imp_load_RIMEnableMonitorMappingForDevice.c)
 *     __imp_load_RIMDeviceIoControl @ 0x18002D925 (__imp_load_RIMDeviceIoControl.c)
 *     __imp_load_RIMGetDevicePreparsedData @ 0x18002D937 (__imp_load_RIMGetDevicePreparsedData.c)
 *     __imp_load_InitializeInputDeviceInjection @ 0x18002DD49 (__imp_load_InitializeInputDeviceInjection.c)
 *     __imp_load_InjectPointerInput @ 0x18002DD5B (__imp_load_InjectPointerInput.c)
 *     __imp_load_RemoveInjectionDevice @ 0x18002DD6D (__imp_load_RemoveInjectionDevice.c)
 *     __imp_load_InjectDeviceInput @ 0x18002DE0A (__imp_load_InjectDeviceInput.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180008D60 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rim_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
