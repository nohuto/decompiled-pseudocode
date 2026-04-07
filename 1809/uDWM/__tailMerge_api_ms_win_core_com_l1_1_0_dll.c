/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18004C30A
 * Callers:
 *     __imp_load_CoCreateInstance @ 0x18004C2FE (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoInitializeEx @ 0x18004C4C3 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18004C4D5 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoCreateGuid @ 0x18004C4E7 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoTaskMemAlloc @ 0x18004D3CB (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoGetApartmentType @ 0x18004D3EC (__imp_load_CoGetApartmentType.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18004AD60 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
