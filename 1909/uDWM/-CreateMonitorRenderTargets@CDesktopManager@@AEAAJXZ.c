/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002A878
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002A6CC (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BDC8 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18002AA24 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18002BFA8 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002C3EC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18002C4A4 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18002CA8C (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007FD7C (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x180091188 (-HandleScreenRotation@CWindowList@@QEAAXHH@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDesktopManager *this)
{
  _QWORD *v1; // rsi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx
  int DcompTargetsForNewGroup; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  CDWMDisplay *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  CDWMDisplaySet *v15; // rcx
  void *v16; // [rsp+28h] [rbp-41h]
  void *v17; // [rsp+28h] [rbp-41h]
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  CDWMDisplay *v19; // [rsp+48h] [rbp-21h]
  __int128 v20; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h]
  unsigned int v22; // [rsp+68h] [rbp-1h]
  __int128 v23; // [rsp+70h] [rbp+7h] BYREF
  __int64 v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  char v26; // [rsp+D0h] [rbp+67h] BYREF
  char v27; // [rsp+D8h] [rbp+6Fh]
  int v28; // [rsp+E0h] [rbp+77h] BYREF
  int v29; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = (_QWORD *)((char *)this + 88);
  v18 = 0LL;
  v24 = 0LL;
  v3 = *((_QWORD *)this + 11);
  v25 = 0;
  v21 = 0LL;
  v22 = 0;
  v27 = 0;
  v26 = 0;
  v19 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *v1 = 0LL;
  }
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 26))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
         &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0,
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x4F4u, v16);
    goto LABEL_12;
  }
  DcompTargetsForNewGroup = CDesktopManager::GetDcompTargetsForNewGroup(
                              this,
                              (__int64)&v26,
                              (__int64)&v29,
                              (__int64)&v28);
  v5 = DcompTargetsForNewGroup;
  if ( DcompTargetsForNewGroup < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DcompTargetsForNewGroup, 0x4FDu, v17);
    goto LABEL_12;
  }
  if ( v26 )
  {
    CWindowList::HandleScreenRotation(*((CWindowList **)this + 61), v29, v28);
    v12 = v19;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, _DWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL)
                                                                                          + 16LL)
                                                                            + 680LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 24LL),
            (char *)v19 + 56,
            (char *)v19 + 40,
            *((_DWORD *)v19 + 52));
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x509u, v17);
      goto LABEL_12;
    }
    CDWMDisplay::Release(v12);
  }
  if ( v27 )
  {
    if ( v22
      && (v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v18 + 424LL))(
                 v18,
                 v20,
                 v22,
                 v1),
          v8 = FailFastIfAccessDenied(v7),
          v5 = v8,
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x514u, v17);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), *v1);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x517u, v17);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
        v5 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x519u, v17);
        else
          CDesktopManager::UpdateMaxTextureSize(this);
      }
    }
  }
LABEL_12:
  if ( v5 < 0 )
  {
    CDesktopManager::ReleaseMonitorRenderTargets(this);
    v14 = *((_QWORD *)this + 19);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *((_QWORD *)this + 19) = 0LL;
    }
    v15 = (CDWMDisplaySet *)*((_QWORD *)this + 20);
    if ( v15 )
    {
      CDWMDisplaySet::Release(v15);
      *((_QWORD *)this + 20) = 0LL;
    }
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v20);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v23);
  return (unsigned int)v5;
}
