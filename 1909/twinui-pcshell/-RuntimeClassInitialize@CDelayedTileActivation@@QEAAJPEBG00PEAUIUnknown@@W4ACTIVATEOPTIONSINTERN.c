/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803B015C
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803AEE8C (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803B0078 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005A3D0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?Attach@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z @ 0x1801272CC (-Attach@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AF96C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 */

// Hidden C++ exception states: #wind=1
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
  IUnknown *v12; // rsi
  IUnknown *v13; // rax
  HRESULT Window; // ebx
  struct Windows::Foundation::Collections::IPropertySet **v15; // r8
  __int64 *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  HWND phwnd[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  IUnknown *v23; // [rsp+60h] [rbp+20h] BYREF

  phwnd[1] = (HWND)-2LL;
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 56),
                           a2,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 137LL;
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
    v10 = 138LL;
    goto LABEL_3;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 104),
                           a4,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 139LL;
    goto LABEL_3;
  }
  phwnd[0] = 0LL;
  v12 = punk;
  v13 = punk;
  v23 = punk;
  v20 = 0LL;
  do
  {
    Window = IUnknown_GetWindow(v13, phwnd);
    if ( Window < 0 && IUnknown_GetSite(v23, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v23) >= 0 )
      Microsoft::WRL::ComPtr<IObjectArray>::Attach(&v20, (__int64)v23);
    v13 = v23;
  }
  while ( v23 && Window < 0 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  *(HWND *)(a1 + 136) = phwnd[0];
  *(_DWORD *)(a1 + 48) = a6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 128));
  ViewValueSetFromSite = ViewSizePreferenceHelpers::GetViewValueSetFromSite(v12, (struct IUnknown *)(a1 + 128), v15);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 154LL;
    goto LABEL_3;
  }
  v19 = 0LL;
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(&v19);
  if ( IUnknown_QueryService(
         v12,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         (void **)v16) >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    if ( v17 >= 0 )
    {
      LOBYTE(v23) = v17 == 0;
      BYTE1(v23) = 1;
      *(_WORD *)(a1 + 148) = (_WORD)v23;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v17);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, a1 + 144);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v18);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v19);
  return 0LL;
}
