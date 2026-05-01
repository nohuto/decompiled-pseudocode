/*
 * XREFs of ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180390464
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18038FAB0 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ViewSizePreferenceHelpers::IsPropertySetEmpty(
        __int64 (__fastcall ***this)(ViewSizePreferenceHelpers *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 (__fastcall *v3)(ViewSizePreferenceHelpers *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // eax
  bool v6; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v3 = **this;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v4 = v3((ViewSizePreferenceHelpers *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v10);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      236LL,
      (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 56LL))(v10, &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      238LL,
      (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v9 == 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
