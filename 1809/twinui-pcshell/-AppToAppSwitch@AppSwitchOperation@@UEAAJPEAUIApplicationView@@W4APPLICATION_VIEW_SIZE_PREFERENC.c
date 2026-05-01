/*
 * XREFs of ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x180355A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x180355DA8 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1803B9B4C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::AppToAppSwitch(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  CAppLayoutOperation *v9; // rbp
  int AppToAppSwitch; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+70h] [rbp+8h]

  v4 = a1 - 176;
  v14 = (a1 + 16) & -(__int64)(a1 != 176);
  v9 = (CAppLayoutOperation *)(a1 - 152);
  v15 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v14, 1);
  AppToAppSwitch = CAppLayoutOperation::_VerifyAndPrepareLayout(v9, 0LL, 0);
  v11 = AppToAppSwitch;
  if ( AppToAppSwitch >= 0 )
  {
    AppToAppSwitch = AppSwitchOperation::QueryAppToAppSwitch(v4, a2, a3, a4);
    v11 = AppToAppSwitch;
    if ( AppToAppSwitch >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 327699;
      Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
        (__int64 *)(a1 - 88),
        a4);
      AppToAppSwitch = CAppLayoutOperation::_FinalizeLayout(a1 - 152, v17 | 4u);
      v11 = AppToAppSwitch;
      if ( AppToAppSwitch >= 0 )
      {
        v11 = 0;
        goto LABEL_9;
      }
      v12 = 130LL;
    }
    else
    {
      v12 = 120LL;
    }
  }
  else
  {
    v12 = 116LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)AppToAppSwitch);
LABEL_9:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v14);
  return v11;
}
