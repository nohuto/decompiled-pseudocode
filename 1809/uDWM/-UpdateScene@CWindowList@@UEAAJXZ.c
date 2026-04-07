/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001CE40
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180031934 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18001D3A0 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18001DF0C (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033AE0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?FreeTableData@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x18003B4A0 (-FreeTableData@-$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_G.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18006F6AC (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  int v2; // esi
  CDesktopManager *v3; // rbx
  CDesktopManager *v4; // rbx
  int v5; // edx
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  bool v14; // di
  CDesktopManager *v15; // rcx
  CDesktopManager *v16; // rdi
  unsigned int v17; // ebx
  __int64 i; // r13
  CDesktopManager *v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // rbx
  struct CVisual *v22; // rdx
  struct CVisual *v23; // rdx
  __int64 v24; // rbp
  _QWORD *v25; // rax
  char v26; // di
  __int64 v27; // rcx
  int v28; // eax
  struct CVisual *v29; // rdx
  struct CVisual *v30; // rdx
  __int64 v31; // rax
  struct CVisual *v32; // rdx
  CDesktopManager *v33; // rdi
  __int64 v34; // rax
  volatile signed __int32 *v35; // rdi
  bool v36; // bl
  __int64 v37; // rsi
  int v38; // ebx
  CVisual *OverlayRootVisualForDesktop; // rax
  CVisual *v40; // rbx
  struct _RTL_GENERIC_TABLE *v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  CDesktopManager *v44; // rcx
  void *v45; // rcx
  char *v46; // rbx
  __int64 v47; // rcx
  int v48; // eax
  int v50; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v52; // [rsp+68h] [rbp+10h]
  PVOID RestartKey; // [rsp+70h] [rbp+18h] BYREF
  char v54; // [rsp+78h] [rbp+20h] BYREF
  DWORD LastError; // [rsp+7Ch] [rbp+24h]

  LODWORD(v52) = 0;
  v2 = 0;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() == *((_DWORD *)v3 + 164) )
    goto LABEL_18;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = 0;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v7 = *(_DWORD *)(v6 + 40);
  if ( !v7 )
    goto LABEL_18;
  v8 = *(__int64 **)(v6 + 16);
  v9 = v7;
  do
  {
    v10 = *v8;
    v11 = v5 + 1;
    ++v8;
    if ( *(_DWORD *)(v10 + 24) == 4 )
      v11 = v5;
    v5 = v11;
    --v9;
  }
  while ( v9 );
  if ( v11 <= 0 )
    goto LABEL_18;
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 116));
    v4 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v13 = *((_QWORD *)v4 + 25);
  if ( !v13 )
    goto LABEL_18;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = !*(_DWORD *)(v13 + 64) || !*(_BYTE *)(v13 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 116), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v13 = &CAnimationEngine::`vftable';
    DynArrayImpl<0>::~DynArrayImpl<0>(v13 + 72);
    DynArrayImpl<0>::~DynArrayImpl<0>(v13 + 40);
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v13);
  }
  if ( !v14 )
  {
LABEL_18:
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = CDesktopManager::s_pDesktopManagerInstance;
    v17 = 0;
    RestartKey = 0LL;
    for ( i = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31); v17 < *((_DWORD *)v16 + 194); ++v17 )
      CDesktopManager::UpdateSceneImpl(v15, *(struct CVisual **)(*((_QWORD *)v16 + 94) + 8LL * v17));
    v20 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    if ( v20 )
    {
      v21 = v52;
      do
      {
        v22 = (struct CVisual *)v20[3];
        if ( v22 )
          CDesktopManager::UpdateSceneImpl(v19, v22);
        v23 = (struct CVisual *)v20[5];
        if ( v23 )
          CDesktopManager::UpdateSceneImpl(v19, v23);
        v24 = v20[7];
        if ( v24 )
        {
          v25 = *(_QWORD **)(v24 + 96);
          if ( v25 )
          {
            if ( v25[2] && v25[7] && (v21 = v25[3], v2 |= 1u, v21) )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(v25[3]);
              v26 = 1;
            }
            else
            {
              v26 = 0;
            }
            if ( (v2 & 1) != 0 )
            {
              v2 &= ~1u;
              v27 = v21;
              if ( v21 )
              {
                v21 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
              }
            }
            if ( v26 )
            {
              v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v24 + 96) + 16LL) + 64LL))(*(_QWORD *)(*(_QWORD *)(v24 + 96) + 16LL));
              if ( v28 < 0 )
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x190,
                  (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
                  (const char *)(unsigned int)v28,
                  v50);
            }
          }
        }
        v20 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
      }
      while ( v20 );
    }
    v29 = (struct CVisual *)*((_QWORD *)this + 62);
    if ( v29 && *((_QWORD *)v29 + 3) )
      CDesktopManager::UpdateSceneImpl(v19, v29);
    v30 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v30 && *((_QWORD *)v30 + 3) )
      CDesktopManager::UpdateSceneImpl(v19, v30);
    v31 = *((_QWORD *)this + 65);
    if ( v31 )
    {
      v32 = *(struct CVisual **)(v31 + 48);
      if ( v32 )
        CDesktopManager::UpdateSceneImpl(v19, v32);
    }
    if ( i && *(_QWORD *)(i + 8) )
    {
      v33 = CDesktopManager::s_pDesktopManagerInstance;
      v34 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      if ( v34 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 116));
        v33 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v35 = (volatile signed __int32 *)*((_QWORD *)v33 + 25);
      if ( v35 )
      {
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v36 = !*((_DWORD *)v35 + 16) || !*((_BYTE *)v35 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v36 )
        {
          v37 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
          if ( v37 )
          {
            v19 = *(CDesktopManager **)(v37 + 8);
            if ( v19 )
            {
              v38 = CVisual::MoveToFront(v19, 0);
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v37 + 8) + 104LL))(*(_QWORD *)(v37 + 8));
              if ( v38 >= 0 )
              {
                OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                                this,
                                                *(_QWORD *)(v37 + 96),
                                                0);
                v40 = OverlayRootVisualForDesktop;
                if ( OverlayRootVisualForDesktop )
                {
                  CVisual::MoveToFront(OverlayRootVisualForDesktop, 0);
                  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v40 + 104LL))(v40);
                }
              }
            }
          }
        }
        if ( _InterlockedExchangeAdd(v35 + 29, 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v35 = &CAnimationEngine::`vftable';
          DynArrayImpl<0>::~DynArrayImpl<0>(v35 + 18);
          DynArrayImpl<0>::~DynArrayImpl<0>(v35 + 10);
          CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData(v41, (PVOID)v35);
        }
      }
      CDesktopManager::UpdateSceneImpl(v19, *(struct CVisual **)(i + 8));
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, "/#");
    v42 = *((_QWORD *)this + 73);
    if ( (unsigned __int64)(v42 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v42 = *((_QWORD *)this + 71);
    v43 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                     + 32LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            v42);
    if ( v43 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1714,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v43,
        v50);
    v44 = (CDesktopManager *)*((_QWORD *)this + 71);
    *((_BYTE *)this + 602) = 0;
    if ( v44 )
    {
      NtDCompositionCommitSynchronizationObject();
      ConfirmResizeCommit(*((_QWORD *)this + 72));
      v45 = (void *)*((_QWORD *)this + 71);
      *((_QWORD *)this + 72) = 0LL;
      CloseHandle(v45);
      *((_QWORD *)this + 71) = 0LL;
    }
    v46 = (char *)*((_QWORD *)this + 73);
    if ( (unsigned __int64)(v46 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v54 = 0;
      LastError = GetLastError();
      CloseHandle(v46);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v54);
    }
    *((_QWORD *)this + 73) = 0LL;
    if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v44) >= 0 )
    {
      v47 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
      if ( v47 )
      {
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 24LL))(v47);
        if ( v48 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x171E,
            (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v48,
            v50);
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
