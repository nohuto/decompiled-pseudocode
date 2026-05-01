/*
 * XREFs of ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x180136F10
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180139648 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180010784 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180011458 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        bool *a5)
{
  int GlomForWindow; // edi
  bool v10; // al
  CAppViewManager *v11; // rcx
  char IsMultiViewOperationAllowed; // al
  int v13; // ecx
  int v14; // r12d
  int v15; // ecx
  __int64 (__fastcall *v16)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *); // rbx
  char v17; // si
  int v18; // eax
  bool v20; // [rsp+20h] [rbp-50h] BYREF
  bool v21; // [rsp+21h] [rbp-4Fh] BYREF
  int v22; // [rsp+24h] [rbp-4Ch] BYREF
  struct IImmersiveApplicationInternal *v23; // [rsp+28h] [rbp-48h] BYREF
  struct IImmersiveApplicationInternal *v24; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]

  v26 = -2LL;
  v25 = 0;
  *a5 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v20 = 0;
  v21 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
LABEL_3:
    v10 = 0;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a2, &v24, &v20);
  v10 = 0;
  if ( GlomForWindow < 0 )
    goto LABEL_18;
  if ( !v20 )
  {
    GlomForWindow = -2147024891;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, &v23, &v21);
  v10 = 0;
  if ( GlomForWindow >= 0 )
  {
    IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v11, v23);
    v13 = GlomForWindow;
    if ( !IsMultiViewOperationAllowed )
      v13 = -2147024891;
    GlomForWindow = v13;
    v10 = 0;
    if ( v13 >= 0 && !v21 )
    {
      v14 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v24 + 616LL))(v24);
      v15 = 6;
      v22 = 6;
      if ( !a4
        || (v16 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *))(*(_QWORD *)a4 + 416LL),
            v28 = 0LL,
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"FrameworkViewType",
              0x12u,
              0x11u),
            v17 = 1,
            v25 = 1,
            v18 = v16(a4, v28, &v22),
            v15 = v22,
            v18 < 0) )
      {
        v17 = 0;
      }
      v10 = 0;
      if ( v17 && v15 != 6 )
        v10 = v15 != v14;
    }
  }
LABEL_18:
  *a5 = v10;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  return (unsigned int)GlomForWindow;
}
