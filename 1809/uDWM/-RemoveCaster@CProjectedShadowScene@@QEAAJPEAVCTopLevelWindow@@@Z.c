/*
 * XREFs of ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800B0BD0
 * Callers:
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x180086E9C (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 * Callees:
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180022478 (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x1800B0CA4 (-RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B0ED8 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::RemoveCaster(
        CProjectedShadowScene::CProjectedShadowSceneInstance **this,
        struct CTopLevelWindow *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CDesktopManager *v7; // rcx
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(this[3], a2);
  v5 = updated;
  if ( updated >= 0 )
  {
    updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(this[4], a2);
    v5 = updated;
    if ( updated >= 0 )
    {
      *((_BYTE *)a2 + 241) &= ~0x40u;
      updated = CProjectedShadowScene::UpdateProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
      v5 = updated;
      if ( updated >= 0 )
      {
        DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(v7);
        updated = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice
                                                                                        + 24LL))(DCompositionInteropDevice);
        v5 = updated;
        if ( updated >= 0 )
        {
          v5 = 0;
          goto LABEL_11;
        }
        v6 = 79LL;
      }
      else
      {
        v6 = 78LL;
      }
    }
    else
    {
      v6 = 75LL;
    }
  }
  else
  {
    v6 = 74LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)updated);
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
