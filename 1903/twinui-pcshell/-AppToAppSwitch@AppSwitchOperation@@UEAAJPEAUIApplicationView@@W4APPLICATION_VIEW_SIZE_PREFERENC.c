/*
 * XREFs of ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803BB900
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1803BBCB0 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18041BB80 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18041C4F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
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
      Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
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
