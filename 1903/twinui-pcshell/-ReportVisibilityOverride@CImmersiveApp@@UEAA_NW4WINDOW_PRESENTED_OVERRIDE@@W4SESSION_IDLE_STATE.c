/*
 * XREFs of ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180148910
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180021240 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18006EA9C (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006EB04 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x1801430F0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1801467DC (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180149B88 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::ReportVisibilityOverride(unsigned __int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int v7; // edi
  char IsReportingEnabled; // bl
  CImmersiveApp::CImmersiveWindowCollection *v9; // r14
  int v10; // edx
  int v11; // r9d
  void (__fastcall *v12)(unsigned __int64, struct IImmersiveMonitor **); // rbx
  int v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  struct IImmersiveMonitor *v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  IsReportingEnabled = 0;
  v9 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184);
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184))
    || v10 == 2 )
  {
    if ( a2 == *(_DWORD *)(a1 + 560) )
      return 0;
    if ( a2 == 2 )
    {
      v16 = 0LL;
      v12 = *(void (__fastcall **)(unsigned __int64, struct IImmersiveMonitor **))(*(_QWORD *)a1 + 464LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
      v12(a1, &v16);
      IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                             (struct IUnknown *)v16,
                             (struct IImmersiveApplicationInternal *)(a1 & -(__int64)(a1 != 112)));
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    }
    else
    {
      if ( v11 != 2
        && CReportWindowVisibilityChange::IsOverrideImmuneApplication(
             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
             (struct IUnknown *)(a1 & ((unsigned __int128)-(__int128)(a1 - 112) >> 64))) )
      {
        return 0;
      }
      IsReportingEnabled = 1;
    }
    if ( IsReportingEnabled )
    {
      *(_DWORD *)(a1 + 560) = a2;
      if ( a2 == 1 )
        CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v9, 1LL, 1LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v9, 1u);
      if ( (a5 & 1) != 0 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v9) )
      {
        LOBYTE(v7) = a2 != 2;
        v14 = v7 + 13;
        v15 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 384LL))(a1);
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 112),
          (const struct APP_CHANGE_INFO *)&v14,
          1uLL);
      }
    }
  }
  return IsReportingEnabled;
}
