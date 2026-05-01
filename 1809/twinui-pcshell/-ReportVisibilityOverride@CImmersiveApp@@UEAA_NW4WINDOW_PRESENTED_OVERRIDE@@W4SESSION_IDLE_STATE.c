/*
 * XREFs of ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x18011F490
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180051484 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1800514EC (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800529E0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18011AFB0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18011D83C (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180120538 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::ReportVisibilityOverride(unsigned __int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int v7; // ebx
  char IsReportingEnabled; // bp
  CImmersiveApp::CImmersiveWindowCollection *v9; // r14
  int v10; // edx
  int v11; // r9d
  int v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  struct IImmersiveMonitor *v15; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  IsReportingEnabled = 0;
  v9 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152);
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152))
    || v10 == 2 )
  {
    IsReportingEnabled = a2 != *(_DWORD *)(a1 + 528);
    if ( a2 != *(_DWORD *)(a1 + 528) )
    {
      if ( a2 == 2 )
      {
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        (*(void (__fastcall **)(unsigned __int64, struct IImmersiveMonitor **))(*(_QWORD *)a1 + 464LL))(a1, &v15);
        IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                               (struct IUnknown *)v15,
                               (struct IImmersiveApplicationInternal *)(a1 & -(__int64)(a1 != 112)));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
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
    }
    if ( IsReportingEnabled )
    {
      *(_DWORD *)(a1 + 528) = a2;
      if ( a2 == 1 )
        CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v9, 1LL, 1LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v9, 1u);
      if ( (a5 & 1) != 0 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v9) )
      {
        LOBYTE(v7) = a2 != 2;
        v13 = v7 + 13;
        v14 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 384LL))(a1);
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 112),
          (const struct APP_CHANGE_INFO *const)&v13,
          1uLL);
      }
    }
  }
  return IsReportingEnabled;
}
