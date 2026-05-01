/*
 * XREFs of ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x180356CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180356E64 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1803B9B4C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall WindowArrangementOperation::ArrangeView(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  CAppLayoutOperation *v7; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 - 176;
  v12 = (a1 + 16) & -(__int64)(a1 != 176);
  v7 = (CAppLayoutOperation *)(a1 - 152);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout(v7, 0LL, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 60LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v8 = WindowArrangementOperation::QueryArrangeView(v3, a2, a3, &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 63LL;
    goto LABEL_7;
  }
  *(_DWORD *)(a1 - 72) = 65539;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((__int64 *)(a1 - 88), a2);
  v8 = CAppLayoutOperation::_FinalizeLayout(a1 - 152, v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 66LL;
    goto LABEL_7;
  }
LABEL_8:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v12);
  return v9;
}
