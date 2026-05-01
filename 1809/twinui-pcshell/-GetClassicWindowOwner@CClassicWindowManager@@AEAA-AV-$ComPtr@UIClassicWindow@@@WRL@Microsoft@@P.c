/*
 * XREFs of ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004F5A8
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004F0E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x18004F2F0 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x18004FBC0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___ @ 0x1800506D4 (CClassicWindowManager--ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x18010410C (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004FCEC (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CClassicWindowManager::GetClassicWindowOwner(CClassicWindowManager *this, __int64 *a2, HWND a3)
{
  HWND i; // rcx
  HWND Window; // rax
  HWND v8; // rbx
  struct IClassicWindow *v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0LL;
  for ( i = a3; ; i = v8 )
  {
    Window = GetWindow(i, 4u);
    v8 = Window;
    if ( !Window || Window == a3 || *a2 )
      break;
    if ( IsWindowVisible(Window) )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      if ( (int)CClassicWindowManager::_FindClassicWindow(this, v8, &v10, &v11) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 128LL))(v10) )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, (__int64 *)&v10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
  }
  return a2;
}
