/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001DE34
 * Callers:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18001E098 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     PbmReportAppInteractivityChange @ 0x180020350 (PbmReportAppInteractivityChange.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000EE60 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000EECC (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000F604 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000F78C (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     WPP_SF_Sis @ 0x1800183EC (WPP_SF_Sis.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x180028B60 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  CApplication *v9; // rsi
  __int64 v10; // r8
  int v11; // edi
  const char *v12; // rax
  int Application; // ebx
  CApplication *v14; // rbp
  struct IPBMWorkItem *v15; // rdi
  int v16; // eax
  struct IPBMWorkItem *v18; // [rsp+40h] [rbp-48h] BYREF
  CApplication *v19[3]; // [rsp+48h] [rbp-40h] BYREF
  CApplication *v20; // [rsp+90h] [rbp+8h] BYREF

  v19[1] = (CApplication *)-2LL;
  v9 = (CApplication *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v19[2] = v9;
  LODWORD(v20) = 0;
  v18 = 0LL;
  v11 = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = "PBMIC_UNKNOWN";
    if ( a4 == 2 )
      v12 = "PBMIC_SOFT_NONINTERACTIVE";
    if ( a4 == 1 )
      v12 = "PBMIC_HARD_NONINTERACTIVE";
    if ( !a4 )
      v12 = "PBMIC_INTERACTIVE";
    WPP_SF_Sis(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Bu, v10, a2, a3, v12);
  }
  Application = CApplicationManager::GetApplication((CApplicationManager *)a1, a2, a3, a5, v19, 1, (int *)&v20);
  if ( Application < 0 )
    goto LABEL_32;
  EnterCriticalSection((LPCRITICAL_SECTION)v9);
  v20 = v9;
  v14 = v19[0];
  if ( a4 == 2
    && *((_DWORD *)v19[0] + 52)
    && !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(v19[0])
    && (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v14) )
  {
    if ( v9 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v9);
  }
  else
  {
    if ( v9 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v9);
    v11 = 0;
  }
  Application = CAppStateChangedWorkItem::CreateInstance(a2, a3, a4 == 0, a5, &v18);
  if ( Application < 0 )
    goto LABEL_28;
  if ( v11 )
  {
    v15 = v18;
    v16 = CApplication::PostDelayedInteractivityNotification((const wchar_t **)v14, (const wchar_t *)v18);
    goto LABEL_26;
  }
  Application = CApplication::CleanupDelayedInteractivityNotification(v14);
  if ( Application < 0 )
  {
LABEL_28:
    v15 = v18;
    goto LABEL_29;
  }
  v15 = v18;
  v16 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_26:
  Application = v16;
  if ( v16 >= 0 )
    v15 = 0LL;
LABEL_29:
  if ( v15 )
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1LL);
  if ( Application < 0 )
  {
LABEL_32:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Cu,
        &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::ProcessInteractivityNotification", 3241, Application);
  }
  if ( v9 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v9);
  return (unsigned int)Application;
}
