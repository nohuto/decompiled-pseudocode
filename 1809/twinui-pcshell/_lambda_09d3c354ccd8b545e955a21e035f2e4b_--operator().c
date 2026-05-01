/*
 * XREFs of _lambda_09d3c354ccd8b545e955a21e035f2e4b_::operator() @ 0x18032F6E8
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18032FF1C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetGroupingPreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ViewGrouping@ViewManagement@UI@5@@Z @ 0x18010BBE4 (-SetGroupingPreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_09d3c354ccd8b545e955a21e035f2e4b_::operator()(__int64 a1)
{
  HRESULT v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+48h] [rbp+10h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         **(IUnknown ***)a1,
         &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
         &GUID_8eb65c84_1605_5214_a524_6d0d6c263c40,
         &ppvOut);
  if ( v2 >= 0 )
  {
    v7 = 0;
    v3 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, &v7);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v3 = ViewSizePreferenceHelpers::SetGroupingPreference(
             *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 8),
             v7);
      v2 = v3;
      if ( v3 >= 0 )
      {
        v2 = 0;
        goto LABEL_8;
      }
      v4 = 328LL;
    }
    else
    {
      v4 = 327LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v3);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v2;
}
