/*
 * XREFs of ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180068458
 * Callers:
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x180068340 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z.c)
 *     ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1800683C0 (-GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x1800684F8 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  int v6; // esi
  struct IClassicWindow *v7; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  struct IClassicWindow *v11; // [rsp+68h] [rbp+20h] BYREF

  v9[1] = -2LL;
  v11 = 0LL;
  *a3 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    CClassicWindowManager::_GetLastActiveClassicWindow(this, a2, &v11);
    v6 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD *, int *))(*(_QWORD *)v11 + 40LL))(v11, v9, &v10);
    if ( v6 < 0 )
      break;
    if ( v10 )
    {
      v7 = v11;
      v11 = 0LL;
      *a3 = v7;
      break;
    }
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 9) + 72LL))((char *)this + 72, v9[0]);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v6;
}
