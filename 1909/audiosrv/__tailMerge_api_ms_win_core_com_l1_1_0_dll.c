/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006633C
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x180066330 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x1800663BB (__imp_load_PropVariantClear.c)
 *     __imp_load_CoCreateInstance @ 0x1800663CD (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoGetMalloc @ 0x1800663DF (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x1800663F1 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateGuid @ 0x180066597 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoDisconnectObject @ 0x1800665A9 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoInitializeEx @ 0x1800665BB (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x1800665CD (__imp_load_CoUninitialize.c)
 *     __imp_load_CoTaskMemRealloc @ 0x1800665DF (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_StringFromGUID2 @ 0x1800667CD (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x1800667DF (__imp_load_CLSIDFromString.c)
 *     __imp_load_PropVariantCopy @ 0x1800669B3 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x1800669C5 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x1800669FB (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoGetPSClsid @ 0x180066A98 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x180066AAA (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_IIDFromString @ 0x180066BD7 (__imp_load_IIDFromString.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x180066C1F (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoGetApartmentType @ 0x18006795C (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoDisableCallCancellation @ 0x18006796E (__imp_load_CoDisableCallCancellation.c)
 *     __imp_load_CoCancelCall @ 0x180067980 (__imp_load_CoCancelCall.c)
 *     __imp_load_CoEnableCallCancellation @ 0x1800679C8 (__imp_load_CoEnableCallCancellation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180048A90 (__delayLoadHelper2.c)
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
