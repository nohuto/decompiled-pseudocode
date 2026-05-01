/*
 * XREFs of ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18005301C
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180051700 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x180052120 (-HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180149CD8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180053114 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x180053414 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x180147E74 (CClassicWindowManager--ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18014946C (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x18014951C (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180149750 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

__int64 __fastcall CClassicWindowManager::_ChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  CClassicWindowManager *v8; // rcx
  unsigned int v9; // edi
  int v10; // r15d
  __int128 *v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF
  struct IClassicWindow *v18; // [rsp+A8h] [rbp+48h] BYREF

  v15 = -2LL;
  v6 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v17 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v7 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, a3);
  v9 = v7;
  v10 = v7 & 0x80;
  if ( (v7 & 0x80) != 0 )
  {
    CClassicWindowManager::AddApplicationView(v8, a2);
  }
  else if ( (v7 & 0x100) != 0 )
  {
    CClassicWindowManager::RemoveApplicationView(v8, a2, 0LL);
  }
  if ( (v9 & 0x11) != 0 )
    CClassicWindowManager::RecomputeOwner(a1, a2);
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 120LL))(a2)
    && (v9 & 0xC) != 0
    && !v10 )
  {
    RaiseApplicationViewChangeNotification(a2, 16LL);
  }
  if ( (v9 & 0x800) != 0 )
  {
    if ( !v10 )
      RaiseApplicationViewChangeNotification(a2, 10LL);
    *(_QWORD *)&v14 = &v18;
    *((_QWORD *)&v14 + 1) = a1;
    v16 = v14;
    *(_QWORD *)&v13 = v6;
    *(_QWORD *)&v14 = &v13;
    *((_QWORD *)&v14 + 1) = &v16;
    v12 = &v14;
    goto LABEL_23;
  }
  if ( (v9 & 0x1000) != 0 )
  {
    if ( (v9 & 0x100) == 0 )
      RaiseApplicationViewChangeNotification(a2, 11LL);
    v18 = a2;
    *(_QWORD *)&v14 = &v18;
    *(_QWORD *)&v13 = a2;
    *(_QWORD *)&v16 = &v13;
    *((_QWORD *)&v16 + 1) = &v14;
    CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(a1, &v16);
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 128LL))(a2)
         && *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2) != v6 )
  {
    *(_QWORD *)&v16 = &v18;
    *((_QWORD *)&v16 + 1) = a1;
    v13 = v16;
    *(_QWORD *)&v14 = v6;
    *(_QWORD *)&v16 = &v14;
    *((_QWORD *)&v16 + 1) = &v13;
    v12 = &v16;
LABEL_23:
    v18 = a2;
    CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(a1, v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v9;
}
