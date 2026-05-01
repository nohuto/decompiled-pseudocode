/*
 * XREFs of ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x18011013C
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180112000 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x18004E3B0 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18004ED10 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        bool *a5)
{
  int GlomForWindow; // ebx
  bool v10; // al
  CAppViewManager *v11; // rcx
  char IsMultiViewOperationAllowed; // al
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  char v16; // di
  int v17; // eax
  bool v19; // [rsp+20h] [rbp-58h] BYREF
  bool v20; // [rsp+21h] [rbp-57h] BYREF
  int v21; // [rsp+24h] [rbp-54h] BYREF
  struct IImmersiveApplicationInternal *v22; // [rsp+28h] [rbp-50h] BYREF
  struct IImmersiveApplicationInternal *v23; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  __int64 v27; // [rsp+60h] [rbp-18h]

  v25 = -2LL;
  v24 = 0;
  *a5 = 0;
  v23 = 0LL;
  v22 = 0LL;
  v19 = 0;
  v20 = 0;
  GlomForWindow = -2147024809;
  if ( a2 != a3 )
    GlomForWindow = 0;
  v10 = 0;
  if ( a2 != a3 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a2, &v23, &v19);
    v10 = 0;
    if ( GlomForWindow >= 0 )
    {
      if ( v19 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
        GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, &v22, &v20);
        v10 = 0;
        if ( GlomForWindow >= 0 )
        {
          IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v11, v22);
          v13 = GlomForWindow;
          if ( !IsMultiViewOperationAllowed )
            v13 = -2147024891;
          GlomForWindow = v13;
          v10 = 0;
          if ( v13 >= 0 && !v20 )
          {
            v14 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 616LL))(v23);
            v15 = 6;
            v21 = 6;
            if ( !a4
              || (v27 = 0LL,
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"FrameworkViewType",
                    0x12u,
                    0x11u),
                  v16 = 1,
                  v24 = 1,
                  v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *))(*(_QWORD *)a4 + 416LL))(
                          a4,
                          v27,
                          &v21),
                  v15 = v21,
                  v17 < 0) )
            {
              v16 = 0;
            }
            v10 = 0;
            if ( v16 && v15 != 6 )
              v10 = v15 != v14;
          }
        }
      }
      else
      {
        GlomForWindow = -2147024891;
      }
    }
  }
  *a5 = v10;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  return (unsigned int)GlomForWindow;
}
