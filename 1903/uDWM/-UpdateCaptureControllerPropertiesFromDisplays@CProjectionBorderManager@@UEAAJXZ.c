/*
 * XREFs of ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x18003CE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180089458 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008954C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008A08C (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18008A11C (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18008A76C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateCaptureControllerPropertiesFromDisplays(
        struct _RTL_GENERIC_TABLE *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  HMONITOR v6; // rdx
  CProjectionBorderManager *v7; // rcx
  int updated; // eax
  CProjectionBorderManager *v9; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
    v3 = v2;
    if ( !v2 )
    {
      v4 = 0;
      goto LABEL_4;
    }
    v13 = *v2;
    CProjectionBorderManager::_RemoveVisuals(v13, v2 + 3);
    v6 = (HMONITOR)v3[2];
    if ( v6 )
      CProjectionBorderManager::_AddProjectionBorderForDisplay(
        (CProjectionBorderManager *)this,
        v6,
        (const struct DWM_CAPTURE_TOKEN *)&v13);
    else
      CProjectionBorderManager::_AddProjectionBorderForAllDisplays(
        (CProjectionBorderManager *)this,
        (const struct DWM_CAPTURE_TOKEN *)&v13);
    updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
                v7,
                (HMONITOR)v3[2],
                *((_DWORD *)v3 + 2));
    v4 = updated;
    if ( updated < 0 )
      break;
    updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(
                v9,
                (HMONITOR)v3[2],
                *((_DWORD *)v3 + 2));
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = 638LL;
      goto LABEL_12;
    }
  }
  v10 = 637LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v11);
LABEL_4:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v4;
}
