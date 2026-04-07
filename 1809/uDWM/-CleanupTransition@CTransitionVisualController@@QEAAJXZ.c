/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002DA1C
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002D9A4 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180031AA0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x1800788C4 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x18009FA40 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180005B94 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180005E1C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18000B8D4 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002D8AC (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18002DC04 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800308F0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030FEC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18007FFA4 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  int v2; // eax
  __int64 v3; // rcx
  struct CVisual *v4; // rdx
  CBaseObject *v5; // rcx
  __int64 v6; // rdi
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject ***v12; // rdi
  CBaseObject **v13; // rax
  struct CTopLevelWindow *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CAnimationEngine *v17; // rax
  __int64 v18; // rcx
  CAnimationEngine *v19; // rdi
  _QWORD *v20; // rdi
  unsigned int v21; // ebp
  __int64 v22; // rsi
  CBaseObject *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  struct CVisual *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rdx
  struct CWindowData *v35; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v17 = CDesktopManager::AcquireAnimationEngine();
    v19 = v17;
    if ( v17 )
    {
      CAnimationEngine::ScheduleStopAnimation(v17, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v19);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d(v18, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
  }
  v2 = *((_DWORD *)this + 44);
  if ( v2 )
  {
    v20 = (_QWORD *)((char *)this + 152);
    do
    {
      v21 = v2 - 1;
      v22 = 56LL * (unsigned int)(v2 - 1);
      v23 = *(CBaseObject **)(v22 + *v20 + 48);
      if ( v23 )
      {
        CBaseObject::Release(v23);
        *(_QWORD *)(v22 + *v20 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v21);
      v2 = *((_DWORD *)this + 44);
    }
    while ( v2 );
  }
  while ( *((_DWORD *)this + 20) )
    CTransitionVisualController::DiscardStoredSnapshot(this, **((HWND **)this + 7));
  if ( *((_DWORD *)this + 12) )
  {
    v12 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v13 = *v12;
      v14 = **v12;
      if ( v14 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v14, 0);
        v13 = *v12;
        v15 = **v12;
        if ( v15 )
        {
          CBaseObject::Release(v15);
          v13 = *v12;
        }
      }
      v16 = v13[1];
      if ( v16 )
        CBaseObject::Release(v16);
      DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, 0LL);
    }
    while ( *((_DWORD *)this + 12) );
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = (struct CVisual *)*((_QWORD *)this + 2);
    if ( v4 )
    {
      if ( *((_DWORD *)this + 34) )
      {
        do
        {
          v24 = *((_QWORD *)this + 14);
          v25 = *((_DWORD *)this + 34) - 1;
          v35 = 0LL;
          v26 = *(_QWORD *)(v24 + 8LL * v25);
          if ( (int)CWindowList::GetSyncedWindowDataByHwnd(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(HWND *)(v26 + 16),
                      &v35) >= 0
            && v35 )
          {
            CTransitionVisualController::RestoreWindow(this, v35, 1);
          }
          v27 = *(struct CVisual **)(v26 + 32);
          if ( v27 )
          {
            v28 = *((_QWORD *)v27 + 3);
            if ( v28 )
              VisualCollection::Remove((VisualCollection *)(v28 + 32), v27);
          }
          v29 = *(_QWORD *)(v26 + 40);
          if ( v29 )
            VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), (struct CVisual *)(v29 + 8));
          CBaseObject::Release((CBaseObject *)v26);
          v30 = *((_DWORD *)this + 34);
          v31 = v30 - 1;
          if ( (unsigned int)v31 < v30 )
          {
            v32 = *((_QWORD *)this + 14);
            while ( (unsigned int)v31 < v30 - 1 )
            {
              *(_QWORD *)(v32 + 8 * v31) = *(_QWORD *)(v32 + 8LL * (unsigned int)(v31 + 1));
              v31 = (unsigned int)(v31 + 1);
              v30 = *((_DWORD *)this + 34);
            }
            *((_DWORD *)this + 34) = v30 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
          }
        }
        while ( *((_DWORD *)this + 34) );
        v4 = (struct CVisual *)*((_QWORD *)this + 2);
        v3 = *((_QWORD *)this + 1);
      }
      VisualCollection::Remove((VisualCollection *)(v3 + 32), v4);
      v5 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v6 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v6 >= 0 )
    {
      v33 = 24LL * (int)v6;
      do
      {
        v34 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v34 + v33 + 16) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v34 + 24 * v6));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, (unsigned int)v6);
        }
        v33 -= 24LL;
        v6 = (unsigned int)(v6 - 1);
      }
      while ( (int)v6 >= 0 );
    }
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    VisualCollection::Remove(
      (VisualCollection *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 32LL),
      *((struct CVisual **)this + 1));
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 18) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 1) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
