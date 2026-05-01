/*
 * XREFs of ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x1803582B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803B97F4 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1803B9B4C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall BackOperation::SwitchBack(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // edi
  int ViewFullScreen; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v13 = (a1 + 16) & -(__int64)(a1 != 176);
  v14 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v13, 1);
  v6 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 55LL;
    goto LABEL_10;
  }
  v10 = 589889;
  if ( (a3 & 1) == 0 )
    goto LABEL_7;
  ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(a1 - 152, a2, 10LL);
  v7 = ViewFullScreen;
  if ( ViewFullScreen >= 0 )
  {
    Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((__int64 *)(a1 - 88), a2);
    v10 = 589891;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
    (const char *)(unsigned int)ViewFullScreen);
LABEL_8:
  if ( v7 >= 0 )
  {
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    v7 = 0;
    *(_DWORD *)(a1 - 72) = v10;
    goto LABEL_12;
  }
  v8 = (unsigned int)v7;
  v9 = 58LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
    (const char *)v8);
LABEL_12:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v13);
  return (unsigned int)v7;
}
