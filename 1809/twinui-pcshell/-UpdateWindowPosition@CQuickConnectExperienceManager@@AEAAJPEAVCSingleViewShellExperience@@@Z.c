/*
 * XREFs of ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801766EC
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180173A80 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180013C64 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800648B8 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132BB0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x18016DAFC (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x180170A60 (--$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition.c)
 *     ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x180170B20 (--$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateW.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180171160 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_180171160.c)
 *     ??1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x180171660 (--1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x180172A20 (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x180172BA0 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x180174F88 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017505C (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::UpdateWindowPosition(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rbx
  int Int32; // eax
  __int64 v8; // rdx
  float v9; // xmm0_4
  float v10; // xmm1_4
  HMONITOR v11; // rbx
  const char *v12; // r9
  __int64 v13; // rdx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT rcWork; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-A0h]
  RECT rc; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h]
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v26[40]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v21 = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v26,
    (__int64)"ExperienceManager_UpdateWindowPosition");
  v26[0] = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v26);
  v16 = (int)*((float *)a2 + 11);
  v15 = (int)*((float *)a2 + 12);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
    (__int64)v26,
    (__int64)&v16,
    (__int64)&v15);
  v18 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v18);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v19 = 0LL;
    LODWORD(v20) = 0;
    v6 = v18;
    *(_QWORD *)&rcWork.left = &v19;
    *(_QWORD *)&rcWork.right = 0LL;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MaxHeight", 0xAu, 9u);
    (*(void (__fastcall **)(__int64, __int64, LONG *))(*(_QWORD *)v6 + 48LL))(v6, v24, &rcWork.right);
    v24 = 0LL;
    RoVariant::Attach(*(RoVariant **)&rcWork.left, *(struct IInspectable **)&rcWork.right);
    if ( v19 )
    {
      *(_QWORD *)&rcWork.left = v19;
      rcWork.right = v20;
      Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&rcWork, (int *)this + 92);
      LastError = Int32;
      if ( Int32 < 0 )
      {
        v8 = 821LL;
        goto LABEL_18;
      }
    }
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    v9 = *((float *)this + 82);
    rc.left = (int)v9;
    v10 = *((float *)this + 83);
    rc.top = (int)v10;
    rc.right = (int)(float)(v9 + *((float *)this + 84));
    rc.bottom = (int)(float)(v10 + *((float *)this + 85));
    v11 = MonitorFromRect(&rc, 0);
    if ( v11 == (HMONITOR)-1LL )
    {
      v13 = 833LL;
    }
    else
    {
      mi.cbSize = 40;
      memset_0(&mi.rcMonitor, 0, 0x24uLL);
      if ( GetMonitorInfoW(v11, &mi) )
      {
        rcWork = mi.rcWork;
        Int32 = CQuickConnectExperienceManager::FinalizeWindowPlacement(this, v16, v15, &rcWork);
        LastError = Int32;
        if ( Int32 >= 0 )
        {
          Int32 = CQuickConnectExperienceManager::FinalizeWindowPosition(this, v16, v15, &rcWork);
          LastError = Int32;
          if ( Int32 >= 0 )
          {
            if ( *((_QWORD *)a2 + 3) )
            {
              Int32 = CSingleViewShellExperience::SetPosition(a2, (const struct tagRECT *)((char *)this + 376));
              LastError = Int32;
              if ( Int32 < 0 )
              {
                v8 = 850LL;
                goto LABEL_18;
              }
              QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
                (__int64)v26,
                (__int64)this + 376,
                (__int64)this + 380,
                (__int64)this + 384,
                (__int64)this + 388);
            }
            wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v26);
            LastError = 0;
            goto LABEL_21;
          }
          v8 = 845LL;
        }
        else
        {
          v8 = 842LL;
        }
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Int32);
        goto LABEL_21;
      }
      v13 = 835LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v13,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
                  v12);
LABEL_21:
    RoVariant::~RoVariant((RoVariant *)&v19);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::~ExperienceManager_UpdateWindowPosition((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v26);
  return LastError;
}
