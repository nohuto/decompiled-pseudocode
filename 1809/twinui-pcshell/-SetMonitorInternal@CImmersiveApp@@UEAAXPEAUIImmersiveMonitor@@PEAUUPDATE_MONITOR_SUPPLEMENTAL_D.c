/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x1800600E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180051484 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800529E0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180079F28 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveApp::SetMonitorInternal(__int64 *a1, struct IUnknown *a2, struct IUnknown **a3, char a4)
{
  int v8; // edi
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // r12d
  BOOL v12; // esi
  char IsReportingEnabled; // al
  struct IUnknown *v14; // [rsp+30h] [rbp-40h] BYREF
  void *v15[2]; // [rsp+38h] [rbp-38h] BYREF
  struct IUnknown *v16; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+58h] [rbp-18h] BYREF
  struct IUnknown *v19; // [rsp+B8h] [rbp+48h] BYREF
  int v20; // [rsp+C8h] [rbp+58h]

  v18[1] = -2LL;
  v20 = 0;
  v8 = a4 & 8;
  v9 = 0LL;
  v18[0] = 0LL;
  if ( (a4 & 8) != 0 )
  {
    result = (__int64)Microsoft::WRL::ComPtr<IApplicationView>::operator=(v18, a1 + 80);
    v9 = v18[0];
  }
  else
  {
    result = a1[79];
    if ( result )
    {
      v9 = a1[79];
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(v9);
      v18[0] = v9;
    }
  }
  if ( !a2 || !v9 )
    goto LABEL_29;
  if ( a2 != (struct IUnknown *)v9 )
  {
    v17 = 0LL;
    v19 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v17) < 0 )
      goto LABEL_29;
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v9)(
            v9,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v19);
    if ( v11 >= 0 )
      ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
    if ( v11 < 0 || (result = (__int64)v19, v17 != v19) )
    {
LABEL_29:
      if ( (a4 & 1) == 0 || (result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 400))(a1), !(_BYTE)result) )
      {
        v17 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        (*(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464))(a1, &v17);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(
          (__int64 *)((char *)a1 + (v8 != 0 ? 640LL : 632LL)),
          (__int64)a2);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1) && (a4 & 6) != 0 )
        {
          v12 = (a4 & 2) == 0;
          v19 = 0LL;
          if ( a3 )
          {
            v19 = *a3;
          }
          else
          {
            v15[0] = 0LL;
            v14 = 0LL;
            v20 = 2;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
            (*(void (__fastcall **)(__int64 *, GUID *, struct IUnknown **))(*(a1 - 8) + 32))(
              a1 - 8,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v14);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
            IAMPrivate_QueryObject(
              v14,
              (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              v15);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
            (*(void (__fastcall **)(void *, struct IUnknown **))(*(_QWORD *)v15[0] + 120LL))(v15[0], &v19);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
          }
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 a2,
                                 0LL);
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, BOOL))(*a1 + 264))(
            a1,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            (unsigned int)v19,
            HIDWORD(v19),
            v12);
        }
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        (*(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464))(a1, &v16);
        if ( !(unsigned int)SHIsSameObject(v17, v16) )
        {
          wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
          LODWORD(v15[0]) = 17;
          v15[1] = 0LL;
          CImmersiveApp::_ScheduleApplicationNotifications(
            (CImmersiveApp *)(a1 - 14),
            (const struct APP_CHANGE_INFO *const)v15,
            1uLL);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      }
    }
  }
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
