/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x140016BA7
 * Callers:
 *     __imp_load_CoTaskMemAlloc @ 0x140016B9B (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x140016C26 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoTaskMemFree @ 0x140016C38 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoUninitialize @ 0x140016E76 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoRegisterClassObject @ 0x140016F37 (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoResumeClassObjects @ 0x140016F5B (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoInitializeSecurity @ 0x140016F6D (__imp_load_CoInitializeSecurity.c)
 *     __imp_load_CoInitializeEx @ 0x140016FA3 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoRevokeClassObject @ 0x140016FB5 (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_PropVariantClear @ 0x140016FC7 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoImpersonateClient @ 0x140016FD9 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoRevertToSelf @ 0x140016FEB (__imp_load_CoRevertToSelf.c)
 *     __imp_load_StringFromGUID2 @ 0x140017033 (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x140017045 (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x14001709C (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoReleaseMarshalData @ 0x140017139 (__imp_load_CoReleaseMarshalData.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x14001714B (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x14001715D (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoMarshalInterface @ 0x14001716F (__imp_load_CoMarshalInterface.c)
 *     __imp_load_CoTaskMemRealloc @ 0x140017584 (__imp_load_CoTaskMemRealloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x140014940 (__delayLoadHelper2.c)
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
