/*
 * XREFs of __tailMerge_hid_dll @ 0x1800654BC
 * Callers:
 *     __imp_load_HidD_GetHidGuid @ 0x1800654B0 (__imp_load_HidD_GetHidGuid.c)
 *     __imp_load_HidD_GetAttributes @ 0x18006555F (__imp_load_HidD_GetAttributes.c)
 *     __imp_load_HidD_GetPreparsedData @ 0x180065571 (__imp_load_HidD_GetPreparsedData.c)
 *     __imp_load_HidP_GetCaps @ 0x180065583 (__imp_load_HidP_GetCaps.c)
 *     __imp_load_HidD_FreePreparsedData @ 0x180065595 (__imp_load_HidD_FreePreparsedData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800445D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_hid_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_HID_DLL,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
