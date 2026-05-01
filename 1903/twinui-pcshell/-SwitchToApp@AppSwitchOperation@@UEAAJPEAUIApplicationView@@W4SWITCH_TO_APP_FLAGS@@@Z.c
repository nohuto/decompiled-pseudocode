/*
 * XREFs of ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803BC870
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803BC18C (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18041BB80 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18041C4F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::SwitchToApp(__int64 a1, struct IApplicationView *a2, int a3)
{
  __int64 v3; // r14
  int SwitchToApp; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 176;
  v12 = (a1 + 16) & -(__int64)(a1 != 176);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
  SwitchToApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = SwitchToApp;
  if ( SwitchToApp >= 0 )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(v3, a2, a3);
    v8 = SwitchToApp;
    if ( SwitchToApp >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 1;
      if ( (a3 & 1) != 0 )
      {
        v10 = 65537;
      }
      else
      {
        *(_DWORD *)(a1 - 72) = 3;
        v10 = 65539;
      }
      if ( (a3 & 2) == 0 )
      {
        *(_DWORD *)(a1 - 72) = v10;
        if ( (a3 & 8) != 0 )
        {
          v10 |= 0x400000u;
          *(_DWORD *)(a1 - 72) = v10;
        }
        if ( (a3 & 0x10) != 0 )
          *(_DWORD *)(a1 - 72) = v10 | 0x2000000;
      }
      Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
        (__int64 *)(a1 - 88),
        (__int64)a2);
      SwitchToApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 4LL);
      v8 = SwitchToApp;
      if ( SwitchToApp >= 0 )
      {
        v8 = 0;
        goto LABEL_17;
      }
      v9 = 103LL;
    }
    else
    {
      v9 = 75LL;
    }
  }
  else
  {
    v9 = 72LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)SwitchToApp);
LABEL_17:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v12);
  return v8;
}
