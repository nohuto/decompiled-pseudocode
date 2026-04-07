/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180015280
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180005F30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180015610 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180018538 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033C40 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  int v1; // r15d
  int v3; // esi
  CDesktopManager *v4; // rbx
  CDesktopManager *v5; // rcx
  int v6; // r8d
  __int64 v7; // rax
  CDesktopManager *v8; // rcx
  CDesktopManager *v9; // rbx
  unsigned int v10; // edi
  __int64 i; // r13
  CDesktopManager *v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  struct CVisual *v15; // rdx
  struct CVisual *v16; // rdx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  char v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  struct CVisual *v22; // rdx
  struct CVisual *v23; // rdx
  __int64 v24; // rax
  struct CVisual *v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  CDesktopManager *v28; // rcx
  char *v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // rbx
  bool v37; // di
  CDesktopManager *v38; // rcx
  void *v39; // rcx
  DWORD LastError; // ebx
  int v41; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v43; // [rsp+68h] [rbp+10h]
  PVOID RestartKey; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v43) = 0;
  v3 = 0;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() == *((_DWORD *)v4 + 164) )
    goto LABEL_3;
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  v6 = 0;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( !*(_DWORD *)(v7 + 40) )
    goto LABEL_3;
  v33 = *(_QWORD *)(v7 + 16);
  v34 = *(unsigned int *)(v7 + 40);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v33 + 24LL) != 4 )
      ++v6;
    v33 += 8LL;
    --v34;
  }
  while ( v34 );
  if ( v6 <= 0 )
    goto LABEL_3;
  v35 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  if ( v35 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 116));
    v5 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v36 = *((_QWORD *)v5 + 25);
  if ( !v36 )
    goto LABEL_3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v37 = !*(_DWORD *)(v36 + 64) || !*(_BYTE *)(v36 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 116), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v36 = &CAnimationEngine::`vftable';
    DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)(v36 + 72));
    DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)(v36 + 40));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v36);
  }
  if ( !v37 )
  {
LABEL_3:
    v41 = v1;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    v10 = 0;
    RestartKey = 0LL;
    for ( i = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31); v10 < *((_DWORD *)v9 + 194); ++v10 )
      CDesktopManager::UpdateSceneImpl(v8, *(struct CVisual **)(*((_QWORD *)v9 + 94) + 8LL * v10));
    v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    if ( v13 )
    {
      v14 = v43;
      do
      {
        v15 = (struct CVisual *)v13[3];
        if ( v15 )
          CDesktopManager::UpdateSceneImpl(v12, v15);
        v16 = (struct CVisual *)v13[5];
        if ( v16 )
          CDesktopManager::UpdateSceneImpl(v12, v16);
        v17 = v13[7];
        if ( v17 )
        {
          v18 = *(_QWORD **)(v17 + 96);
          if ( v18 )
          {
            if ( v18[2] && v18[7] && (v14 = v18[3], v3 |= 1u, v14) )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(v18[3]);
              v19 = 1;
            }
            else
            {
              v19 = 0;
            }
            if ( (v3 & 1) != 0 )
            {
              v3 &= ~1u;
              v20 = v14;
              if ( v14 )
              {
                v14 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
              }
            }
            if ( v19 )
            {
              v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v17 + 96) + 16LL) + 64LL))(*(_QWORD *)(*(_QWORD *)(v17 + 96) + 16LL));
              if ( v21 < 0 )
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x18F,
                  (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
                  (const char *)(unsigned int)v21,
                  v41);
            }
          }
        }
        v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
      }
      while ( v13 );
    }
    v22 = (struct CVisual *)*((_QWORD *)this + 62);
    if ( v22 && *((_QWORD *)v22 + 3) )
      CDesktopManager::UpdateSceneImpl(v12, v22);
    v23 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v23 && *((_QWORD *)v23 + 3) )
      CDesktopManager::UpdateSceneImpl(v12, v23);
    v24 = *((_QWORD *)this + 65);
    if ( v24 )
    {
      v25 = *(struct CVisual **)(v24 + 48);
      if ( v25 )
        CDesktopManager::UpdateSceneImpl(v12, v25);
    }
    if ( i && *(_QWORD *)(i + 8) )
    {
      CWindowList::MoveTransitionAndTouchVisualToFront(this);
      CDesktopManager::UpdateSceneImpl(v38, *(struct CVisual **)(i + 8));
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, "/#");
    v26 = *((_QWORD *)this + 73);
    if ( (unsigned __int64)(v26 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v26 = *((_QWORD *)this + 71);
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 16LL)
                                                     + 32LL))(
            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
            v26);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1784,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v27,
        v41);
    v28 = (CDesktopManager *)*((_QWORD *)this + 71);
    *((_BYTE *)this + 602) = 0;
    if ( v28 )
    {
      NtDCompositionCommitSynchronizationObject();
      ConfirmResizeCommit(*((_QWORD *)this + 72));
      v39 = (void *)*((_QWORD *)this + 71);
      *((_QWORD *)this + 72) = 0LL;
      CloseHandle(v39);
      *((_QWORD *)this + 71) = 0LL;
    }
    v29 = (char *)*((_QWORD *)this + 73);
    if ( (unsigned __int64)(v29 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v29);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 73) = 0LL;
    if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v28) >= 0 )
    {
      v30 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
      if ( v30 )
      {
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 24LL))(v30);
        if ( v31 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x178E,
            (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v31,
            v41);
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
