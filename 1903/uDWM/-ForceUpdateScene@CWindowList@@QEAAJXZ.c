/*
 * XREFs of ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180014FB0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800412D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800A94E0 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180015610 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180018538 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033C40 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 */

__int64 __fastcall CWindowList::ForceUpdateScene(CWindowList *this)
{
  int v1; // r15d
  int v3; // esi
  CDesktopManager *v4; // rcx
  CDesktopManager *v5; // rbx
  unsigned int v6; // edi
  __int64 i; // r13
  CDesktopManager *v8; // rcx
  _QWORD *v9; // rdi
  PVOID v10; // rbx
  struct CVisual *v11; // rdx
  struct CVisual *v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rax
  char v15; // r14
  PVOID v16; // rcx
  int v17; // eax
  struct CVisual *v18; // rdx
  struct CVisual *v19; // rdx
  __int64 v20; // rax
  struct CVisual *v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  CDesktopManager *v24; // rcx
  char *v25; // rdi
  __int64 v26; // rcx
  int v27; // eax
  CDesktopManager *v29; // rcx
  void *v30; // rcx
  DWORD LastError; // ebx
  int v32; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  LODWORD(RestartKey) = 0;
  v32 = v1;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  v6 = 0;
  RestartKey = 0LL;
  for ( i = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31); v6 < *((_DWORD *)v5 + 194); ++v6 )
    CDesktopManager::UpdateSceneImpl(v4, *(struct CVisual **)(*((_QWORD *)v5 + 94) + 8LL * v6));
  v9 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
  if ( v9 )
  {
    v10 = RestartKey;
    do
    {
      v11 = (struct CVisual *)v9[3];
      if ( v11 )
        CDesktopManager::UpdateSceneImpl(v8, v11);
      v12 = (struct CVisual *)v9[5];
      if ( v12 )
        CDesktopManager::UpdateSceneImpl(v8, v12);
      v13 = v9[7];
      if ( v13 )
      {
        v14 = *(_QWORD **)(v13 + 96);
        if ( v14 )
        {
          if ( v14[2] && v14[7] && (v10 = (PVOID)v14[3], v3 |= 1u, v10) )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(v14[3]);
            v15 = 1;
          }
          else
          {
            v15 = 0;
          }
          if ( (v3 & 1) != 0 )
          {
            v3 &= ~1u;
            v16 = v10;
            if ( v10 )
            {
              v10 = 0LL;
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
            }
          }
          if ( v15 )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v13 + 96) + 16LL) + 64LL))(*(_QWORD *)(*(_QWORD *)(v13 + 96) + 16LL));
            if ( v17 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x18F,
                (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
                (const char *)(unsigned int)v17,
                v32);
          }
        }
      }
      v9 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    }
    while ( v9 );
  }
  v18 = (struct CVisual *)*((_QWORD *)this + 62);
  if ( v18 && *((_QWORD *)v18 + 3) )
    CDesktopManager::UpdateSceneImpl(v8, v18);
  v19 = (struct CVisual *)*((_QWORD *)this + 63);
  if ( v19 && *((_QWORD *)v19 + 3) )
    CDesktopManager::UpdateSceneImpl(v8, v19);
  v20 = *((_QWORD *)this + 65);
  if ( v20 )
  {
    v21 = *(struct CVisual **)(v20 + 48);
    if ( v21 )
      CDesktopManager::UpdateSceneImpl(v8, v21);
  }
  if ( i && *(_QWORD *)(i + 8) )
  {
    CWindowList::MoveTransitionAndTouchVisualToFront(this);
    CDesktopManager::UpdateSceneImpl(v29, *(struct CVisual **)(i + 8));
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, "/#");
  v22 = *((_QWORD *)this + 73);
  if ( (unsigned __int64)(v22 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    v22 = *((_QWORD *)this + 71);
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 16LL)
                                                   + 32LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
          v22);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1784,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v23,
      v32);
  v24 = (CDesktopManager *)*((_QWORD *)this + 71);
  *((_BYTE *)this + 602) = 0;
  if ( v24 )
  {
    NtDCompositionCommitSynchronizationObject();
    ConfirmResizeCommit(*((_QWORD *)this + 72));
    v30 = (void *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 72) = 0LL;
    CloseHandle(v30);
    *((_QWORD *)this + 71) = 0LL;
  }
  v25 = (char *)*((_QWORD *)this + 73);
  if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v25);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 73) = 0LL;
  if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v24) >= 0 )
  {
    v26 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
    if ( v26 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x178E,
          (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v27,
          v32);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
