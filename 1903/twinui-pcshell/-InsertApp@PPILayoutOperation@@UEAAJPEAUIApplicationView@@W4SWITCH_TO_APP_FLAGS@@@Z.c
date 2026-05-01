/*
 * XREFs of ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803BFD20
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1803BFF54 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18041BB80 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18041C4F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall PPILayoutOperation::InsertApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  PPILayoutOperation *v3; // r15
  int InsertApp; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (PPILayoutOperation *)(a1 - 176);
  v12 = (a1 + 16) & -(__int64)(a1 != 176);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
  InsertApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = InsertApp;
  if ( InsertApp < 0 )
  {
    v9 = 95LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)InsertApp);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
    (__int64 *)(a1 - 88),
    (__int64)a2);
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
      *(_DWORD *)(a1 - 72) = v10 | 0x400000;
  }
  InsertApp = PPILayoutOperation::QueryInsertApp(v3, a2);
  v8 = InsertApp;
  if ( InsertApp < 0 )
  {
    v9 = 114LL;
    goto LABEL_13;
  }
  InsertApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 2LL);
  v8 = InsertApp;
  if ( InsertApp < 0 )
  {
    v9 = 115LL;
    goto LABEL_13;
  }
LABEL_14:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v12);
  return v8;
}
