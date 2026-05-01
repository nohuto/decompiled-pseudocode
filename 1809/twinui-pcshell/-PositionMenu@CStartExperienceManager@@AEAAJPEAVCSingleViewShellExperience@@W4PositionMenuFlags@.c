/*
 * XREFs of ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800134FC
 * Callers:
 *     ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180080F90 (-OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x18016B310 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x180013684 (--1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800136F8 (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800138F0 (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800139A0 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013B7C (--0-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180013C64 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001607C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::PositionMenu(CStartExperienceManager *a1, __int64 a2, int a3)
{
  char v3; // r14
  struct CSingleViewShellExperience *v6; // rdx
  int MonitorInformation; // ebx
  int v8; // eax
  int v10; // [rsp+28h] [rbp-E0h]
  bool v11[8]; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B8h] BYREF
  int v13[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h]
  struct tagRECT v15; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v16; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v17[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v14 = -2LL;
  v3 = a3;
  v12 = a3;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v17);
  v17[0] = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  StartMenuExperienceTelemetry::StartMenuReposition::StartActivity((StartMenuExperienceTelemetry::StartMenuReposition *)v17);
  v16 = 0LL;
  *(_QWORD *)&v15.left = 0LL;
  *(_QWORD *)&v15.right = 0LL;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         a1,
                         v6,
                         &v16,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v13[1],
                         v11,
                         &v15,
                         0LL);
  if ( MonitorInformation >= 0 )
  {
    v11[0] = 1;
    v13[0] = v16.bottom - v16.top;
    v15.left = v16.right - v16.left;
    StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
      (unsigned int)v17,
      (unsigned int)&v16,
      (unsigned int)&v16.top,
      (unsigned int)&v15,
      (__int64)v13,
      a2 + 52,
      (__int64)v11,
      (__int64)&v12);
    *((_DWORD *)a1 + 156) = *(_DWORD *)(a2 + 44);
    *((_DWORD *)a1 + 157) = *(_DWORD *)(a2 + 48);
    if ( *(_QWORD *)(a2 + 24)
      && (v8 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)a2, &v16),
          MonitorInformation = v8,
          v8 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33D,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v10);
    }
    else
    {
      if ( (v3 & 1) != 0 )
      {
        v15.left = 4;
        v15.top = LOWORD(v13[1]);
        RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v15, 8LL);
      }
      wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
      MonitorInformation = 0;
    }
  }
  StartMenuExperienceTelemetry::StartMenuReposition::~StartMenuReposition((StartMenuExperienceTelemetry::StartMenuReposition *)v17);
  return (unsigned int)MonitorInformation;
}
