/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006534C
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x180065340 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x1800653CB (__imp_load_PropVariantClear.c)
 *     __imp_load_CoCreateInstance @ 0x1800653DD (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoGetMalloc @ 0x1800653EF (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x180065401 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateGuid @ 0x1800655A7 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoDisconnectObject @ 0x1800655B9 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoInitializeEx @ 0x1800655CB (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x1800655DD (__imp_load_CoUninitialize.c)
 *     __imp_load_CoTaskMemRealloc @ 0x1800655EF (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_StringFromGUID2 @ 0x1800657DD (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x1800657EF (__imp_load_CLSIDFromString.c)
 *     __imp_load_PropVariantCopy @ 0x1800659C3 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x1800659D5 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x180065A0B (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoGetPSClsid @ 0x180065AA8 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x180065ABA (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_IIDFromString @ 0x180065BE7 (__imp_load_IIDFromString.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x180065C2F (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoGetApartmentType @ 0x18006696C (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoDisableCallCancellation @ 0x18006697E (__imp_load_CoDisableCallCancellation.c)
 *     __imp_load_CoCancelCall @ 0x180066990 (__imp_load_CoCancelCall.c)
 *     __imp_load_CoEnableCallCancellation @ 0x1800669D8 (__imp_load_CoEnableCallCancellation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800445D0 (__delayLoadHelper2.c)
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
