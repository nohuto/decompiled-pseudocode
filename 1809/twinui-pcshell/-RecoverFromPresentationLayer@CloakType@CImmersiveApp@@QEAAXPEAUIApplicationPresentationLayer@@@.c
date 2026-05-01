/*
 * XREFs of ?RecoverFromPresentationLayer@CloakType@CImmersiveApp@@QEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18011EB08
 * Callers:
 *     ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x18011CB20 (-HandleCrashRecovery@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::CloakType::RecoverFromPresentationLayer(
        LPCWSTR *this,
        struct IApplicationPresentationLayer *a2)
{
  unsigned int PropW; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct IApplicationPresentationLayer *))(*(_QWORD *)a2 + 104LL))(a2) )
  {
    *(_DWORD *)this = 0;
  }
  else
  {
    *(_DWORD *)this = 1;
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    if ( (*(int (__fastcall **)(struct IApplicationPresentationLayer *, __int64 *))(*(_QWORD *)a2 + 136LL))(a2, &v5) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v5 + 24LL))(v5, &hWnd) >= 0 )
    {
      PropW = (unsigned int)GetPropW(hWnd, this[1]);
      if ( PropW )
        *(_DWORD *)this = PropW;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
