/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180330760
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18032F148 (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180330688 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800E5FEC (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18032FF1C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 */

__int64 __fastcall CDelayedTileActivation::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        IUnknown *punk,
        int a6)
{
  int ViewValueSetFromSite; // ebx
  __int64 v10; // rdx
  IUnknown *v12; // rax
  HRESULT Window; // ebx
  struct Windows::Foundation::Collections::IPropertySet **v14; // r8
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  HWND phwnd; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *ppv; // [rsp+50h] [rbp+20h] BYREF

  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 56),
                           a2,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 98LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)ViewValueSetFromSite);
    return (unsigned int)ViewValueSetFromSite;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 80),
                           a3,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 99LL;
    goto LABEL_3;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 104),
                           a4,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 100LL;
    goto LABEL_3;
  }
  phwnd = 0LL;
  v12 = punk;
  v15 = 0LL;
  ppv = punk;
  do
  {
    Window = IUnknown_GetWindow(v12, &phwnd);
    if ( Window < 0 && IUnknown_GetSite((IUnknown *)ppv, &GUID_00000000_0000_0000_c000_000000000046, &ppv) >= 0 )
      Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v15, (__int64)ppv);
    v12 = (IUnknown *)ppv;
  }
  while ( ppv && Window < 0 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  *(_QWORD *)(a1 + 136) = phwnd;
  *(_DWORD *)(a1 + 48) = a6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 128));
  ViewValueSetFromSite = ViewSizePreferenceHelpers::GetViewValueSetFromSite(punk, (struct IUnknown *)(a1 + 128), v14);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 115LL;
    goto LABEL_3;
  }
  return 0LL;
}
