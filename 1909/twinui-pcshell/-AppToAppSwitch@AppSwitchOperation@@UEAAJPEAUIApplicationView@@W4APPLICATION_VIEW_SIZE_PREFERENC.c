/*
 * XREFs of ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803DAEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1803DB250 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18043BBC4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::AppToAppSwitch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r14
  CAppLayoutOperation *v11; // rbp
  int AppToAppSwitch; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v19; // [rsp+70h] [rbp+8h]

  v6 = a1 - 176;
  v16 = (a1 + 16) & -(__int64)(a1 != 176);
  v11 = (CAppLayoutOperation *)(a1 - 152);
  v17 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v16, 1);
  AppToAppSwitch = CAppLayoutOperation::_VerifyAndPrepareLayout(v11, 0LL, 0);
  v13 = AppToAppSwitch;
  if ( AppToAppSwitch >= 0 )
  {
    AppToAppSwitch = AppSwitchOperation::QueryAppToAppSwitch(v6, a2, a3, a4);
    v13 = AppToAppSwitch;
    if ( AppToAppSwitch >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 327697;
      if ( (a6 & 1) == 0 )
        *(_DWORD *)(a1 - 72) = 327699;
      Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
        (__int64 *)(a1 - 88),
        a4);
      AppToAppSwitch = CAppLayoutOperation::_FinalizeLayout(a1 - 152, v19 | 4u);
      v13 = AppToAppSwitch;
      if ( AppToAppSwitch >= 0 )
      {
        v13 = 0;
        goto LABEL_11;
      }
      v14 = 136LL;
    }
    else
    {
      v14 = 122LL;
    }
  }
  else
  {
    v14 = 118LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)AppToAppSwitch);
LABEL_11:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v16);
  return v13;
}
