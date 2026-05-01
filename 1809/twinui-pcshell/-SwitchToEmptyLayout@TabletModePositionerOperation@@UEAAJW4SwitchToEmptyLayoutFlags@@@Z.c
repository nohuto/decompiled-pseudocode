/*
 * XREFs of ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1803597A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x1803B8DA8 (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1803B9B4C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::SwitchToEmptyLayout(__int64 a1, char a2)
{
  CAppLayoutOperation *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (a1 + 16) & -(__int64)(a1 != 176);
  v4 = (CAppLayoutOperation *)(a1 - 152);
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v10, 1);
  v5 = CAppLayoutOperation::_VerifyAndPrepareLayout(v4, 0LL, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 171LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_9;
  }
  v5 = CAppLayoutOperation::_EvictAllItems(a1 - 152, 0LL, 5LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 174LL;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 - 72) = 1;
  v8 = *(_DWORD *)(a1 - 72);
  if ( (a2 & 1) != 0 )
    v8 = 33;
  *(_DWORD *)(a1 - 72) = v8;
  CAppLayoutOperation::_FinalizeLayout(a1 - 152, 2LL);
  v6 = 0;
LABEL_9:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v10);
  return v6;
}
