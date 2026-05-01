/*
 * XREFs of ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180104898
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004F0E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18004FEC0 (-HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180104A80 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x18004F2F0 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180050CF0 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___ @ 0x180102B74 (CClassicWindowManager--ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18010405C (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x18010410C (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180104320 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

__int64 __fastcall CClassicWindowManager::_ChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  CClassicWindowManager *v7; // rcx
  unsigned int v8; // edi
  __int128 *v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF
  struct IClassicWindow *v17; // [rsp+98h] [rbp+48h] BYREF

  v6 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v16 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  v8 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, a3);
  if ( (v8 & 0x80) != 0 )
  {
    CClassicWindowManager::AddApplicationView(v7, a2);
  }
  else if ( (v8 & 0x100) != 0 )
  {
    CClassicWindowManager::RemoveApplicationView((__int64)v7, (__int64)a2, 0);
  }
  if ( (v8 & 0x11) != 0 )
    CClassicWindowManager::RecomputeOwner(a1, a2);
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 120LL))(a2)
    && (v8 & 0xC) != 0
    && (v8 & 0x80) == 0 )
  {
    RaiseApplicationViewChangeNotification((__int64)a2, 16);
  }
  if ( (v8 & 0x800) != 0 )
  {
    if ( (v8 & 0x80) == 0 )
      RaiseApplicationViewChangeNotification((__int64)a2, 10);
    *((_QWORD *)&v14 + 1) = a1;
    *(_QWORD *)&v14 = &v17;
    v9 = &v14;
    v10 = v14;
    *(_QWORD *)&v14 = &v13;
    *((_QWORD *)&v14 + 1) = &v15;
    v15 = v10;
    *(_QWORD *)&v13 = v6;
    goto LABEL_22;
  }
  if ( (v8 & 0x1000) != 0 )
  {
    if ( (v8 & 0x100) == 0 )
      RaiseApplicationViewChangeNotification((__int64)a2, 11);
    v17 = a2;
    *(_QWORD *)&v14 = &v17;
    *(_QWORD *)&v13 = a2;
    *(_QWORD *)&v15 = &v13;
    *((_QWORD *)&v15 + 1) = &v14;
    CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___((__int64)a1, (__int64)&v15);
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 128LL))(a2)
         && *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2) != v6 )
  {
    *((_QWORD *)&v15 + 1) = a1;
    *(_QWORD *)&v15 = &v17;
    v9 = &v15;
    v11 = v15;
    *(_QWORD *)&v15 = &v14;
    *((_QWORD *)&v15 + 1) = &v13;
    v13 = v11;
    *(_QWORD *)&v14 = v6;
LABEL_22:
    v17 = a2;
    CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___((__int64)a1, (__int64)v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v8;
}
