/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000EB90 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800214B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022FA0 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180027504 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18002E760 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180036CA0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180039570 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008E0EC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x1800A2B54 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 * Callees:
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18000BF70 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180021284 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800380E8 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180039818 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C68C (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     McTemplateU0qp @ 0x18007E53C (McTemplateU0qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(__int64 this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  char v5; // r11
  bool v6; // r11
  CTopLevelWindow *v7; // rcx
  int v8; // eax
  CLivePreview *v10; // rcx
  bool v11; // al
  __int64 v12; // rax
  char v13; // cl
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  bool v19; // al
  int v20; // ecx
  int v21; // eax
  void *v22; // [rsp+28h] [rbp-30h]
  GUID v23; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(this + 360) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(this, &UdwmAnimation_Stop, *(unsigned int *)(this + 368));
    CTopLevelWindow3D::GetScenarioGuid(this, *(_DWORD *)(this + 368), &v23);
    v12 = *(_QWORD *)&v23.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v23.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *(_QWORD *)v23.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD, GUID *, unsigned __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 5)
                                                                             + 16LL)
                                                               + 240LL))(
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
        &v23,
        this | 0xD100000000000000uLL);
    v13 = CDesktopManager::s_fTimelineDirty;
    v14 = (__int64 *)(this + 376);
    v15 = 10LL;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        v17 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v17 )
          v13 = 1;
        *v14 = 0LL;
        CDesktopManager::s_fTimelineDirty = v13;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    v18 = *(_QWORD *)(this + 360);
    if ( v18 )
    {
      v17 = (*(_DWORD *)(v18 + 8))-- == 1;
      v19 = v13;
      if ( v17 )
        v19 = 1;
      *(_QWORD *)(this + 360) = 0LL;
      CDesktopManager::s_fTimelineDirty = v19;
    }
    if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
      --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
    v20 = *(_DWORD *)(this + 368);
    if ( v20 == 9 && !*(_BYTE *)(this + 288) || *(_DWORD *)(this + 372) && (unsigned int)(v20 - 7) > 2 )
      *(_OWORD *)(this + 308) = *(_OWORD *)(*(_QWORD *)(this + 328) + 48LL);
    if ( (unsigned int)(v20 - 7) > 2 )
      *(_DWORD *)(this + 372) = 0;
    *(_DWORD *)(this + 368) = 0;
  }
  else if ( *(_BYTE *)(this + 480) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
  {
    *(_BYTE *)(this + 480) = 0;
  }
  v2 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x557u, v22);
  }
  else
  {
    CTopLevelWindow3D::ReleaseSceneObjects((CTopLevelWindow3D *)this);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(double *)(this + 184) - 1.0)) & _xmm) > 0.0000011920929 )
    {
      *(_QWORD *)(this + 184) = 0x3FF0000000000000LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 24LL))(this, 32LL);
    }
    v4 = *(_QWORD *)(this + 328);
    v5 = *(_BYTE *)(v4 + 604);
    if ( (v5 & 4) != 0 )
    {
      v21 = CWindowList::QueueDestroySprite(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              (struct CWindowData *)v4);
      v3 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x56Du, v22);
    }
    else
    {
      v6 = v5 & 1;
      if ( !v6
        || ((v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64), !*((_BYTE *)v10 + 280))
         || !v4
          ? (v11 = 0)
          : (v11 = CLivePreview::_IsInLivePreview(v10, (const struct CWindowData *)v4)),
            !v11) )
      {
        v7 = *(CTopLevelWindow **)(v4 + 400);
        if ( v7 )
        {
          v8 = CTopLevelWindow::ShowWindow(v7, v6);
          v3 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x568u, v22);
        }
      }
    }
  }
  return v3;
}
