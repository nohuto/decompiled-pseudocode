/*
 * XREFs of ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180359E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x18035A054 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1803B9B4C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall PPILayoutOperation::InsertApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  PPILayoutOperation *v3; // r12
  int v6; // ebx
  int InsertApp; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (PPILayoutOperation *)(a1 - 176);
  v6 = 1;
  v13 = (a1 + 16) & -(__int64)(a1 != 176);
  v14 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v13, 1);
  InsertApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = InsertApp;
  if ( InsertApp < 0 )
  {
    v10 = 95LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)InsertApp);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
    (__int64 *)(a1 - 88),
    (__int64)a2);
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a3 & 1) == 0 )
  {
    v6 = 3;
    *(_DWORD *)(a1 - 72) = 3;
  }
  if ( (a3 & 2) == 0 )
  {
    v11 = v6 | 0x10000;
    *(_DWORD *)(a1 - 72) = v11;
    if ( (a3 & 8) != 0 )
      *(_DWORD *)(a1 - 72) = v11 | 0x400000;
  }
  InsertApp = PPILayoutOperation::QueryInsertApp(v3, a2);
  v9 = InsertApp;
  if ( InsertApp < 0 )
  {
    v10 = 114LL;
    goto LABEL_12;
  }
  InsertApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 2LL);
  v9 = InsertApp;
  if ( InsertApp < 0 )
  {
    v10 = 115LL;
    goto LABEL_12;
  }
LABEL_13:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v13);
  return v9;
}
