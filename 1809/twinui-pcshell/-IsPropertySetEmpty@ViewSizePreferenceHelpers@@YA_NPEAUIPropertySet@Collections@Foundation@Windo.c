/*
 * XREFs of ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18033035C
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18032F930 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ViewSizePreferenceHelpers::IsPropertySetEmpty(
        ViewSizePreferenceHelpers *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v3; // eax
  int v4; // eax
  bool v5; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v3 = (**(__int64 (__fastcall ***)(ViewSizePreferenceHelpers *, GUID *, __int64 *))this)(
         this,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v9);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      236LL,
      (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 56LL))(v9, &v8);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      238LL,
      (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = v8 == 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v5;
}
