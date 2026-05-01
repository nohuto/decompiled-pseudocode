/*
 * XREFs of ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x18006A530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18006A5C8 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicWindowForActivation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        HWND *a3)
{
  CClassicWindowManager *v5; // rbp
  int LastActiveClassicWindowWithValidation; // ebx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  struct IClassicWindow *v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v5 = (CClassicWindowManager *)((char *)this - 72);
  while ( 1 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                              v5,
                                              a2,
                                              &v9);
    if ( LastActiveClassicWindowWithValidation >= 0 )
      LastActiveClassicWindowWithValidation = (*(__int64 (__fastcall **)(struct IClassicWindow *, HWND *, int *))(*(_QWORD *)v9 + 40LL))(
                                                v9,
                                                a3,
                                                &v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    if ( LastActiveClassicWindowWithValidation < 0 )
      break;
    if ( v8 )
      return (unsigned int)LastActiveClassicWindowWithValidation;
  }
  *a3 = 0LL;
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
