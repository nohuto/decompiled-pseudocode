/*
 * XREFs of ?RecoverFromPresentationLayer@CloakType@CImmersiveApp@@QEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1801670EC
 * Callers:
 *     ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x180164830 (-HandleCrashRecovery@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::CloakType::RecoverFromPresentationLayer(
        LPCWSTR *this,
        struct IApplicationPresentationLayer *a2)
{
  int (__fastcall *v4)(struct IApplicationPresentationLayer *, __int64 *); // rbx
  unsigned int PropW; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct IApplicationPresentationLayer *))(*(_QWORD *)a2 + 104LL))(a2) )
  {
    *(_DWORD *)this = 0;
  }
  else
  {
    *(_DWORD *)this = 1;
    v6 = 0LL;
    v4 = *(int (__fastcall **)(struct IApplicationPresentationLayer *, __int64 *))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    if ( v4(a2, &v6) >= 0 && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v6 + 24LL))(v6, &hWnd) >= 0 )
    {
      PropW = (unsigned int)GetPropW(hWnd, this[1]);
      if ( PropW )
        *(_DWORD *)this = PropW;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
}
