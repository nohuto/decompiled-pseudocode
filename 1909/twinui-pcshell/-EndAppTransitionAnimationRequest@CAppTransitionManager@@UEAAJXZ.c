/*
 * XREFs of ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x1803A6300
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x1803A70DC (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x1803A76C8 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CAppTransitionManager::EndAppTransitionAnimationRequest(CAppTransitionManager *this)
{
  CAppTransitionManager *v2; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CAppTransitionManager *)((char *)this - 88);
  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle(v2) )
    return 0LL;
  *(_QWORD *)v6 = ((unsigned __int64)this + 32) & -(__int64)(v2 != 0LL);
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v6, 1);
  v4 = CAppTransitionManager::_EndDWMTransitionRequest(v2, 0);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v4);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v6);
  return v5;
}
