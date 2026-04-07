/*
 * XREFs of ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800826C8
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x18003AFF0 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180082568 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800292D4 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800827BC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForAllDisplays(
        CProjectionBorderManager *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v4; // rcx
  int AllDisplaysNoRef; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r14
  int v11[4]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  unsigned int v14; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
  if ( v4 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    *(_OWORD *)v11 = 0LL;
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v4, (__int64)v11);
    v6 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      v7 = 982LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)AllDisplaysNoRef);
      DynArrayImpl<0>::~DynArrayImpl<0>(v11);
      goto LABEL_10;
    }
    v8 = 0LL;
    if ( v14 )
    {
      v9 = *(_QWORD *)v11;
      while ( 1 )
      {
        AllDisplaysNoRef = CProjectionBorderManager::_AddProjectionBorderForDisplay(
                             this,
                             *(HMONITOR *)(*(_QWORD *)(v9 + 8 * v8) + 16LL),
                             a2);
        v6 = AllDisplaysNoRef;
        if ( AllDisplaysNoRef < 0 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v14 )
          goto LABEL_8;
      }
      v7 = 985LL;
      goto LABEL_12;
    }
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(v11);
  }
  v6 = 0;
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v6;
}
