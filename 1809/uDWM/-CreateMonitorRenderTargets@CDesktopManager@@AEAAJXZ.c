/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029128
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002C5EC (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x180049C28 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x180028C1C (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18002B994 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002BEF4 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18002BFAC (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18002C5A0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180079900 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x18008B2EC (-HandleScreenRotation@CWindowList@@QEAAXHH@Z.c)
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
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  CDWMDisplay *v17; // [rsp+48h] [rbp-21h] BYREF
  __int128 v18; // [rsp+50h] [rbp-19h] BYREF
  __int64 v19; // [rsp+60h] [rbp-9h]
  unsigned int v20; // [rsp+68h] [rbp-1h]
  __int128 v21; // [rsp+70h] [rbp+7h] BYREF
  __int64 v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  char v24; // [rsp+D0h] [rbp+67h] BYREF
  char v25; // [rsp+D8h] [rbp+6Fh] BYREF
  int v26; // [rsp+E0h] [rbp+77h] BYREF
  int v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = (_QWORD *)((char *)this + 88);
  v16 = 0LL;
  v22 = 0LL;
  v3 = *((_QWORD *)this + 11);
  v23 = 0;
  v19 = 0LL;
  v20 = 0;
  v25 = 0;
  v24 = 0;
  v17 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *v1 = 0LL;
  }
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 26))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
         &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x508u);
    goto LABEL_12;
  }
  DcompTargetsForNewGroup = CDesktopManager::GetDcompTargetsForNewGroup(
                              (CDWMDXGIEnumeration **)this,
                              (__int64)&v18,
                              &v17,
                              &v25,
                              &v24,
                              &v27,
                              &v26);
  v5 = DcompTargetsForNewGroup;
  if ( DcompTargetsForNewGroup < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DcompTargetsForNewGroup, 0x511u);
    goto LABEL_12;
  }
  if ( v24 )
  {
    CWindowList::HandleScreenRotation(*((CWindowList **)this + 61), v27, v26);
    v12 = v17;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 9) + 16LL)
                                                                            + 712LL))(
            *(_QWORD *)(*((_QWORD *)this + 9) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 9) + 24LL),
            (char *)v17 + 56,
            (char *)v17 + 40,
            *((_DWORD *)v17 + 52));
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x51Fu);
      goto LABEL_12;
    }
    CDWMDisplay::Release(v12);
  }
  if ( v25 )
  {
    if ( v20
      && (v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v16 + 424LL))(
                 v16,
                 v18,
                 v20,
                 v1),
          v8 = FailFastIfAccessDenied(v7),
          v5 = v8,
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x52Au);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), *v1);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x52Du);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
        v5 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x52Fu);
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
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v16 = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v18);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v21);
  return (unsigned int)v5;
}
