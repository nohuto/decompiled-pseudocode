/*
 * XREFs of ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803DD300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803DCC54 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18043BBC4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppResizeOperation::ResizeApps(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rbp
  int ResizeApps; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 176;
  v11 = (a1 + 16) & -(__int64)(a1 != 176);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  ResizeApps = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = ResizeApps;
  if ( ResizeApps < 0 )
  {
    v9 = 58LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
      (const char *)(unsigned int)ResizeApps);
    goto LABEL_8;
  }
  *(_DWORD *)(a1 - 72) = 1;
  ResizeApps = AppResizeOperation::QueryResizeApps(v3, a2, a3);
  v8 = ResizeApps;
  if ( ResizeApps < 0 )
  {
    v9 = 60LL;
    goto LABEL_7;
  }
  ResizeApps = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v8 = ResizeApps;
  if ( ResizeApps < 0 )
  {
    v9 = 61LL;
    goto LABEL_7;
  }
LABEL_8:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v8;
}
