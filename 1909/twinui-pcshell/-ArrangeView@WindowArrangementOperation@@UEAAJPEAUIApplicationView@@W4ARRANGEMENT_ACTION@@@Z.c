/*
 * XREFs of ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1803DC180
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1803DC314 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18043BBC4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
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
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
    (__int64 *)(a1 - 88),
    a2);
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
