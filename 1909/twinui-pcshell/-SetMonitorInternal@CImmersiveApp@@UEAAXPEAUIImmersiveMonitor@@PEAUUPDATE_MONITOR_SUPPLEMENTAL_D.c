/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x1800669E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x18000B488 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014340 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800246EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180057028 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058150 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180062EDC (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
wil::details::in1diag3 **__fastcall CImmersiveApp::SetMonitorInternal(
        __int64 *a1,
        struct IUnknown *a2,
        struct IUnknown **a3,
        char a4)
{
  wil::details::in1diag3 **result; // rax
  int v9; // r12d
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // edi
  void (__fastcall *v13)(__int64 *, struct IUnknown **); // rdi
  __int64 *v14; // rcx
  BOOL v15; // r14d
  char IsReportingEnabled; // al
  void (__fastcall *v17)(__int64 *, struct IUnknown **); // rdi
  __int64 v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // edx
  int v23; // [rsp+20h] [rbp-50h]
  struct IUnknown *v24; // [rsp+30h] [rbp-40h] BYREF
  void *v25; // [rsp+38h] [rbp-38h] BYREF
  struct IUnknown *v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v28[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h] BYREF
  struct IUnknown *v30; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+C8h] [rbp+58h] BYREF

  result = &retaddr;
  v28[2] = (struct IUnknown *)-2LL;
  v31 = 0;
  v9 = a4 & 8;
  v10 = 0LL;
  v27 = 0LL;
  if ( (a4 & 8) != 0 )
  {
    result = (wil::details::in1diag3 **)Microsoft::WRL::ComPtr<IUnknown>::operator=(&v27, a1 + 84);
    v10 = v27;
  }
  else
  {
    v11 = a1[83];
    if ( v11 )
    {
      result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(a1[83]);
      v10 = v11;
      v27 = v11;
    }
  }
  if ( !a2 || !v10 )
    goto LABEL_39;
  if ( a2 != (struct IUnknown *)v10 )
  {
    v26 = 0LL;
    v30 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v26) < 0 )
      goto LABEL_39;
    v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v10)(
            v10,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v30);
    if ( v12 >= 0 )
      ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
    if ( v12 < 0 || (result = (wil::details::in1diag3 **)v30, v26 != v30) )
    {
LABEL_39:
      if ( (a4 & 1) == 0
        || (result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 400))(a1), !(_BYTE)result) )
      {
        v26 = 0LL;
        v13 = *(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
        v13(a1, &v26);
        v14 = a1 + 84;
        if ( !v9 )
          v14 = a1 + 83;
        Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=(v14, (__int64)a2);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1) && (a4 & 6) != 0 )
        {
          v15 = (a4 & 2) == 0;
          v30 = 0LL;
          if ( a3 )
          {
            v30 = *a3;
          }
          else
          {
            v25 = 0LL;
            v28[0] = 0LL;
            v31 = 2;
            (*(void (__fastcall **)(__int64 *, GUID *, struct IUnknown **))(*(a1 - 8) + 32))(
              a1 - 8,
              &GUID_00000000_0000_0000_c000_000000000046,
              v28);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
            IAMPrivate_QueryObject(
              v28[0],
              (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              &v25);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
            (*(void (__fastcall **)(void *, struct IUnknown **))(*(_QWORD *)v25 + 120LL))(v25, &v30);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
          }
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 a2,
                                 0LL);
          v23 = v15;
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*a1 + 264))(
            a1,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            (unsigned int)v30,
            HIDWORD(v30));
        }
        v24 = 0LL;
        v17 = *(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        v17(a1, &v24);
        if ( (unsigned int)SHIsSameObject(v26, v24) )
          goto LABEL_36;
        wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
        v18 = a1[85];
        if ( v18 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, unsigned int *))(*(_QWORD *)v18 + 80LL))(
                  v18,
                  v24,
                  &v31);
          v20 = retaddr;
          if ( v19 >= 0 )
          {
            v22 = v31;
            if ( *((_DWORD *)a1 + 172) == v31 )
              goto LABEL_35;
            *((_DWORD *)a1 + 172) = v31;
            v19 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(
                    (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 23),
                    v22);
            v20 = retaddr;
            if ( v19 >= 0 )
              goto LABEL_35;
            v21 = 1971LL;
          }
          else
          {
            v21 = 1967LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v20,
            (void *)v21,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)(unsigned int)v19,
            v23);
        }
        else
        {
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x7B9,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)0x8000FFFFLL,
            v23);
        }
LABEL_35:
        LODWORD(v28[0]) = 17;
        v28[1] = 0LL;
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 14),
          (const struct APP_CHANGE_INFO *const)v28,
          1uLL);
LABEL_36:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        result = (wil::details::in1diag3 **)Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
      }
    }
  }
  if ( v10 )
    return (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return result;
}
