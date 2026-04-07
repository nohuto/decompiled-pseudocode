/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4DC
 * Callers:
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180005784 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002D440 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002D51C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002D618 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180031AA0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18000B884 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18001DF0C (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180030410 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(CTransitionVisualController *this)
{
  volatile signed __int32 *v1; // r14
  volatile signed __int32 *v2; // r15
  int v3; // edi
  bool v4; // zf
  int v7; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CVisual *v14; // rax
  int v15; // eax
  struct CVisual *v16; // rax
  struct CVisual *v17; // rbx
  struct CVisual *v18; // rax
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  struct CVisual *v21; // [rsp+60h] [rbp+30h] BYREF
  struct CVisual *v22; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v21 = 0LL;
  v4 = *((_QWORD *)this + 12) == -1LL;
  v22 = 0LL;
  if ( v4 )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v23) )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147467259,
        0x26Bu);
      goto LABEL_34;
    }
    v13 = CTransitionVisualController::_SetDesktopId(this, v23);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v13,
        0x26Eu);
      goto LABEL_4;
    }
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v7 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), &v21);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v7,
        0x273u);
      goto LABEL_19;
    }
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                    *((_QWORD *)this + 12),
                                    0);
    if ( OverlayRootVisualForDesktop )
    {
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                          + 61));
      v1 = (volatile signed __int32 *)v21;
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                   v21,
                   OverlayRootVisualForDesktop,
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
          0x277u);
        goto LABEL_4;
      }
    }
    else
    {
      v14 = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 61));
      v1 = (volatile signed __int32 *)v21;
      v15 = VisualCollection::InsertRelative((struct CVisual *)((char *)v14 + 32), v21, 0LL, 0, 1);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v15,
          0x27Bu);
        goto LABEL_4;
      }
    }
    *((_QWORD *)this + 1) = v1;
    if ( v1 )
    {
      _InterlockedIncrement(v1 + 2);
      v1 = (volatile signed __int32 *)v21;
      v2 = (volatile signed __int32 *)v22;
    }
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v11 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), &v22);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v11,
        0x282u);
      v2 = (volatile signed __int32 *)v22;
      goto LABEL_4;
    }
    v2 = (volatile signed __int32 *)v22;
    v12 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), v22, 0LL, 0, 1);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v12,
        0x283u);
      goto LABEL_4;
    }
    *((_QWORD *)this + 2) = v2;
    if ( v2 )
    {
      _InterlockedIncrement(v2 + 2);
      v2 = (volatile signed __int32 *)v22;
LABEL_19:
      v1 = (volatile signed __int32 *)v21;
    }
  }
LABEL_4:
  if ( v3 >= 0 )
    goto LABEL_5;
  if ( v1 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(v1 + 8));
    v16 = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 61));
    VisualCollection::Remove((struct CVisual *)((char *)v16 + 32), (struct CVisual *)v1);
  }
  if ( v2 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    v17 = (struct CVisual *)*((_QWORD *)this + 1);
    v18 = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 61));
    VisualCollection::Remove((struct CVisual *)((char *)v18 + 32), v17);
  }
LABEL_34:
  v19 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v19 )
  {
    CBaseObject::Release(v19);
    *((_QWORD *)this + 1) = 0LL;
  }
  v20 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)this + 2) = 0LL;
  }
LABEL_5:
  if ( v1 )
    CBaseObject::Release((CBaseObject *)v1);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return (unsigned int)v3;
}
