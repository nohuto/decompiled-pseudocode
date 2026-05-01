/*
 * XREFs of ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x1803DBD00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803DB72C (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18043BBC4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::ReverseAppToAppSwitch(__int64 a1, struct IApplicationView *a2, char a3)
{
  __int64 v3; // rbp
  int SwitchToApp; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 176;
  v11 = (a1 + 16) & -(__int64)(a1 != 176);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  SwitchToApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = SwitchToApp;
  if ( SwitchToApp >= 0 )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(v3, a2, 4);
    v8 = SwitchToApp;
    if ( SwitchToApp >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 129;
      if ( (a3 & 1) == 0 )
        *(_DWORD *)(a1 - 72) = 131;
      Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
        (__int64 *)(a1 - 88),
        (__int64)a2);
      SwitchToApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
      v8 = SwitchToApp;
      if ( SwitchToApp >= 0 )
      {
        v8 = 0;
        goto LABEL_11;
      }
      v9 = 221LL;
    }
    else
    {
      v9 = 208LL;
    }
  }
  else
  {
    v9 = 205LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)SwitchToApp);
LABEL_11:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v8;
}
