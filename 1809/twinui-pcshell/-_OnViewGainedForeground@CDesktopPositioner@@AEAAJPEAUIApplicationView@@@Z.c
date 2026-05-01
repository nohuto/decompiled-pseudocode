/*
 * XREFs of ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800223D4
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180022350 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180022574 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800229E8 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_OnViewGainedForeground(__int64 **this, struct IApplicationView *a2)
{
  char v4; // si
  int IsViewManaged; // eax
  struct IApplicationView *v6; // rdx
  unsigned int v7; // ebx
  char v8; // r14
  char v9; // r13
  char v10; // r12
  HWND WindowForView; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 *v14; // r8
  __int64 v15; // rcx
  char v16; // bl
  int v17; // eax
  char *v18; // rbx
  int v20; // [rsp+20h] [rbp-50h] BYREF
  HWND v21; // [rsp+28h] [rbp-48h] BYREF
  struct _GUID v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  struct _GUID v24; // [rsp+48h] [rbp-28h]
  char v25; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v23 = -2LL;
  v4 = 0;
  LODWORD(v21) = 0;
  IsViewManaged = CDesktopPositioner::_IsViewManaged((CDesktopPositioner *)this, a2, (bool *)&v20);
  v7 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !(_BYTE)v20 )
      return 0LL;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v6);
    v21 = WindowForView;
    if ( WindowForView )
    {
      v13 = this[44];
      v12 = (__int64 *)v13[1];
      v14 = v13;
      if ( *((_BYTE *)v12 + 25) )
        goto LABEL_10;
      do
      {
        if ( v12[4] < (unsigned __int64)WindowForView )
        {
          v12 = (__int64 *)v12[2];
        }
        else
        {
          v14 = v12;
          v12 = (__int64 *)*v12;
        }
      }
      while ( !*((_BYTE *)v12 + 25) );
      if ( v14 == v13 || (unsigned __int64)WindowForView < v14[4] )
LABEL_10:
        v14 = this[44];
      if ( v14 != v13 )
      {
        std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(this + 44, &v22, &v21);
        v8 = *(_BYTE *)(*(_QWORD *)&v22.Data1 + 40LL);
        std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(this + 44, &v22, &v21);
        v9 = *(_BYTE *)(*(_QWORD *)&v22.Data1 + 41LL);
        std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(this + 44, &v22, &v21);
        v10 = *(_BYTE *)(*(_QWORD *)&v22.Data1 + 42LL);
      }
    }
    LOBYTE(v12) = 3;
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v13, v12);
    if ( v8 )
    {
      v15 = *(_QWORD *)&v22.Data1;
    }
    else
    {
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct _GUID *))a2)(
        a2,
        &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
        &v22);
      v4 = 1;
      v15 = *(_QWORD *)&v22.Data1;
      if ( *(_QWORD *)&v22.Data1 )
      {
        v16 = 1;
        goto LABEL_16;
      }
    }
    v16 = 0;
LABEL_16:
    if ( (v4 & 1) != 0 && v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      DwmpTransitionWindow(v21, 93LL);
    v17 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F5,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v17,
        v20);
      v18 = (char *)(this + 44);
    }
    else
    {
      v18 = (char *)(this + 44);
      std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(this + 44, &v22, &v21);
      *(_BYTE *)(*(_QWORD *)&v22.Data1 + 40LL) = 1;
    }
    if ( v9 )
    {
      DwmpEndTransitionRequest(93LL);
      std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(v18, &v22, &v21);
      *(_BYTE *)(*(_QWORD *)&v22.Data1 + 41LL) = 0;
    }
    if ( v10 )
    {
      v24 = AnimationClock_TabSwitch;
      v25 = 1;
      std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(v18, &v22, &v21);
      *(_BYTE *)(*(_QWORD *)&v22.Data1 + 42LL) = 0;
      v22 = AnimationClock_TabSwitch;
      DwmpEndAnimationClock(&v22);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8C2,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)IsViewManaged,
    v20);
  return v7;
}
