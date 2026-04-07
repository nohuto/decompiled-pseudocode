/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029F64
 * Callers:
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180003484 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000A0F4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002A378 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4BC (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002D2F4 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800269D8 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D1E8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002D210 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18002E8A4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036AD8 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(CTransitionVisualController *this)
{
  volatile signed __int32 *v1; // r14
  volatile signed __int32 *v2; // r15
  int v3; // edi
  bool v4; // zf
  int v7; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rax
  unsigned __int64 v9; // rdx
  struct CVisual *v10; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct CVisual *v16; // rax
  int v17; // eax
  struct CVisual *v18; // rax
  struct CVisual *v19; // rbx
  struct CVisual *v20; // rax
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  void *v23; // [rsp+28h] [rbp-8h]
  struct CVisual *v24; // [rsp+60h] [rbp+30h] BYREF
  struct CVisual *v25; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v24 = 0LL;
  v4 = *((_QWORD *)this + 12) == -1LL;
  v25 = 0LL;
  if ( v4 )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v26) )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147467259,
        0x269u,
        v23);
      goto LABEL_34;
    }
    v15 = CTransitionVisualController::_SetDesktopId(this, v26);
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v15,
        0x26Cu,
        v23);
      goto LABEL_4;
    }
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v7 = CVisual::Create(&v24);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v7,
        0x271u,
        v23);
      goto LABEL_19;
    }
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                    *((_QWORD *)this + 12),
                                    0);
    v9 = *((_QWORD *)this + 12);
    v10 = OverlayRootVisualForDesktop;
    if ( OverlayRootVisualForDesktop )
    {
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                           v9);
      v1 = (volatile signed __int32 *)v24;
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                   v24,
                   v10,
                   0,
                   1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          inserted,
          0x275u,
          v23);
        goto LABEL_4;
      }
    }
    else
    {
      v16 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              v9);
      v1 = (volatile signed __int32 *)v24;
      v17 = VisualCollection::InsertRelative((struct CVisual *)((char *)v16 + 32), v24, 0LL, 0, 1);
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v17,
          0x279u,
          v23);
        goto LABEL_4;
      }
    }
    *((_QWORD *)this + 1) = v1;
    if ( v1 )
    {
      _InterlockedIncrement(v1 + 2);
      v1 = (volatile signed __int32 *)v24;
      v2 = (volatile signed __int32 *)v25;
    }
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v13 = CVisual::Create(&v25);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v13,
        0x280u,
        v23);
      v2 = (volatile signed __int32 *)v25;
      goto LABEL_4;
    }
    v2 = (volatile signed __int32 *)v25;
    v14 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), v25, 0LL, 0, 1);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v14,
        0x281u,
        v23);
      goto LABEL_4;
    }
    *((_QWORD *)this + 2) = v2;
    if ( v2 )
    {
      _InterlockedIncrement(v2 + 2);
      v2 = (volatile signed __int32 *)v25;
LABEL_19:
      v1 = (volatile signed __int32 *)v24;
    }
  }
LABEL_4:
  if ( v3 >= 0 )
    goto LABEL_5;
  if ( v1 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(v1 + 8));
    v18 = CWindowList::GetRenderTargetRootVisualForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
            *((_QWORD *)this + 12));
    VisualCollection::Remove((struct CVisual *)((char *)v18 + 32), (struct CVisual *)v1);
  }
  if ( v2 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    v19 = (struct CVisual *)*((_QWORD *)this + 1);
    v20 = CWindowList::GetRenderTargetRootVisualForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
            *((_QWORD *)this + 12));
    VisualCollection::Remove((struct CVisual *)((char *)v20 + 32), v19);
  }
LABEL_34:
  v21 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 1) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 2) = 0LL;
  }
LABEL_5:
  if ( v1 )
    CBaseObject::Release((CBaseObject *)v1);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return (unsigned int)v3;
}
