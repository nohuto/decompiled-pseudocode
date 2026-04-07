/*
 * XREFs of ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A602C
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002C490 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800A506C (--1CScreenRotation@@MEAA@XZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A50A8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800A550C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800A5940 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800A5A60 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180004ED4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180004F30 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800073E8 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180007CB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036A78 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800A5408 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

void __fastcall CScreenRotation::Stop(CScreenRotation *this, char a2)
{
  CAnimationEngine *v4; // rax
  __int64 v5; // rcx
  CAnimationEngine *v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // edx
  bool v9; // zf
  void *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  CScreenRotation::CleanupTimeline(this);
  v4 = CDesktopManager::AcquireAnimationEngine();
  v6 = v4;
  if ( v4 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v4,
      (struct IAnimationListener *)(((unsigned __int64)this + 280) & -(__int64)(this != 0LL)));
    v7 = *((_DWORD *)this + 89);
    if ( v7 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v6, v7);
      *((_DWORD *)this + 89) = -1;
    }
    v8 = *((_DWORD *)this + 90);
    if ( v8 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v6, v8);
      *((_DWORD *)this + 90) = -1;
    }
    CAnimationEngine::Release(v6);
  }
  v9 = *((_BYTE *)this + 328) == 0;
  *((_BYTE *)this + 329) = 0;
  if ( !v9 )
  {
    v9 = *((_BYTE *)this + 380) == 0;
    *((_BYTE *)this + 328) = 0;
    if ( v9 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_14;
      v10 = &UdwmScreenRotation_Animation_Stop;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_14;
      v10 = &UdwmHardwareExpression_Animation_Stop;
    }
    McTemplateU0d(v5, (int)v10, *((_DWORD *)this + 86));
  }
LABEL_14:
  VisualCollection::RemoveAll((CScreenRotation *)((char *)this + 32));
  CRenderDataVisual::ClearInstructions(this);
  if ( !a2 )
  {
    CRenderDataVisual::ClearInstructions(this);
    v11 = *((_QWORD *)this + 3);
    if ( v11 )
      VisualCollection::Remove((VisualCollection *)(v11 + 32), this);
    *((_WORD *)this + 165) = 0;
    *((_DWORD *)this + 85) = 0;
    v12 = *((_QWORD *)this + 39);
    if ( v12 )
    {
      CBaseObject::Release((CBaseObject *)(v12 + 8));
      *((_QWORD *)this + 39) = 0LL;
    }
  }
  v13 = *((_QWORD *)this + 40);
  if ( v13 )
  {
    CBaseObject::Release((CBaseObject *)(v13 + 8));
    *((_QWORD *)this + 40) = 0LL;
  }
}
