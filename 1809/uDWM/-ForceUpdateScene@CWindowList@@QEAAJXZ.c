/*
 * XREFs of ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001BF90
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003E6B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800A4E80 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001B788 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18001D3A0 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033AE0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18006F6AC (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

__int64 __fastcall CWindowList::ForceUpdateScene(CWindowList *this)
{
  int v1; // r15d
  int v3; // esi
  CDesktopManager *v4; // rcx
  CDesktopManager *v5; // rdi
  unsigned int v6; // ebx
  __int64 i; // r13
  CDesktopManager *v8; // rcx
  _QWORD *v9; // rdi
  PVOID v10; // rbx
  struct CVisual *v11; // rdx
  struct CVisual *v12; // rdx
  __int64 v13; // r14
  _QWORD *v14; // rax
  char v15; // di
  PVOID v16; // rcx
  int v17; // eax
  struct CVisual *v18; // rdx
  struct CVisual *v19; // rdx
  __int64 v20; // rax
  struct CVisual *v21; // rdx
  CDesktopManager *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  CDesktopManager *v25; // rcx
  void *v26; // rcx
  char *v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  int v31; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PVOID RestartKey; // [rsp+60h] [rbp+8h] BYREF
  char v34; // [rsp+68h] [rbp+10h] BYREF
  DWORD LastError; // [rsp+6Ch] [rbp+14h]

  v3 = 0;
  LODWORD(RestartKey) = 0;
  v31 = v1;
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
                (void *)0x190,
                (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
                (const char *)(unsigned int)v17,
                v31);
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
    CDesktopManager::UpdateSceneImpl(v22, *(struct CVisual **)(i + 8));
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, "/#");
  v23 = *((_QWORD *)this + 73);
  if ( (unsigned __int64)(v23 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    v23 = *((_QWORD *)this + 71);
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          v23);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1714,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v24,
      v31);
  v25 = (CDesktopManager *)*((_QWORD *)this + 71);
  *((_BYTE *)this + 602) = 0;
  if ( v25 )
  {
    NtDCompositionCommitSynchronizationObject();
    ConfirmResizeCommit(*((_QWORD *)this + 72));
    v26 = (void *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 72) = 0LL;
    CloseHandle(v26);
    *((_QWORD *)this + 71) = 0LL;
  }
  v27 = (char *)*((_QWORD *)this + 73);
  if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v34 = 0;
    LastError = GetLastError();
    CloseHandle(v27);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v34);
  }
  *((_QWORD *)this + 73) = 0LL;
  if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v25) >= 0 )
  {
    v28 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
    if ( v28 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v28);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x171E,
          (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v29,
          v31);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
