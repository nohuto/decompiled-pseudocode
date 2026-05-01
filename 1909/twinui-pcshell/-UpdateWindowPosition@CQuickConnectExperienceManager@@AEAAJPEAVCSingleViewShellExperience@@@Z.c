/*
 * XREFs of ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C4C74
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C1B60 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180049014 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006DCF0 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017B870 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x1801BB53C (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x1801BEA90 (--$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition.c)
 *     ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x1801BEB50 (--$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateW.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801BF1D0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801BF1D0.c)
 *     ??1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x1801BF6D0 (--1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1801C0A90 (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1801C0C10 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x1801C3178 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801C3270 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::UpdateWindowPosition(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64, LONG *); // rdi
  int Int32; // eax
  __int64 v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm1_4
  HMONITOR v12; // rbx
  const char *v13; // r9
  __int64 v14; // rdx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT rcWork; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h]
  RECT rc; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h]
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v27[40]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v22 = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"ExperienceManager_UpdateWindowPosition");
  v27[0] = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v27);
  v17 = (int)*((float *)a2 + 11);
  v16 = (int)*((float *)a2 + 12);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
    (__int64)v27,
    (__int64)&v17,
    (__int64)&v16);
  v19 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v19);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v20 = 0LL;
    LODWORD(v21) = 0;
    v6 = v19;
    v7 = *(void (__fastcall **)(__int64, __int64, LONG *))(*(_QWORD *)v19 + 48LL);
    *(_QWORD *)&rcWork.left = &v20;
    *(_QWORD *)&rcWork.right = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MaxHeight", 0xAu, 9u);
    v7(v6, v25, &rcWork.right);
    v25 = 0LL;
    RoVariant::Attach(*(RoVariant **)&rcWork.left, *(struct IInspectable **)&rcWork.right);
    if ( v20 )
    {
      *(_QWORD *)&rcWork.left = v20;
      rcWork.right = v21;
      Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&rcWork, (int *)this + 92);
      LastError = Int32;
      if ( Int32 < 0 )
      {
        v9 = 821LL;
        goto LABEL_18;
      }
    }
    v10 = *((float *)this + 82);
    rc.left = (int)v10;
    v11 = *((float *)this + 83);
    rc.top = (int)v11;
    rc.right = (int)(float)(v10 + *((float *)this + 84));
    rc.bottom = (int)(float)(v11 + *((float *)this + 85));
    v12 = MonitorFromRect(&rc, 0);
    if ( v12 == (HMONITOR)-1LL )
    {
      v14 = 833LL;
    }
    else
    {
      mi.cbSize = 40;
      memset_0(&mi.rcMonitor, 0, 0x24uLL);
      if ( GetMonitorInfoW(v12, &mi) )
      {
        rcWork = mi.rcWork;
        Int32 = CQuickConnectExperienceManager::FinalizeWindowPlacement(this, v17, v16, &rcWork);
        LastError = Int32;
        if ( Int32 >= 0 )
        {
          Int32 = CQuickConnectExperienceManager::FinalizeWindowPosition(this, v17, v16, &rcWork);
          LastError = Int32;
          if ( Int32 >= 0 )
          {
            if ( *((_QWORD *)a2 + 3) )
            {
              Int32 = CSingleViewShellExperience::SetPosition(a2, (const struct tagRECT *)((char *)this + 376));
              LastError = Int32;
              if ( Int32 < 0 )
              {
                v9 = 850LL;
                goto LABEL_18;
              }
              QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
                (__int64)v27,
                (__int64)this + 376,
                (__int64)this + 380,
                (__int64)this + 384,
                (__int64)this + 388);
            }
            wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v27);
            LastError = 0;
            goto LABEL_21;
          }
          v9 = 845LL;
        }
        else
        {
          v9 = 842LL;
        }
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Int32);
        goto LABEL_21;
      }
      v14 = 835LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v14,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
                  v13);
LABEL_21:
    RoVariant::~RoVariant((RoVariant *)&v20);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::~ExperienceManager_UpdateWindowPosition((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v27);
  return LastError;
}
