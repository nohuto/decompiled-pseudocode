/*
 * XREFs of ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802A4570
 * Callers:
 *     _lambda_a2e6e8c7c47ff621075ed7caffbf1187_::operator() @ 0x180070624 (_lambda_a2e6e8c7c47ff621075ed7caffbf1187_--operator().c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18029B940 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18029BAC0 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x180035B4C (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180035B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180035BD8 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800364FC (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1802A44A8 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 */

char __fastcall WindowReadyState::SetWindow(__int64 a1, HWND a2, int a3)
{
  bool IsReadyForPresentation; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r14
  unsigned int PropW; // eax
  int v11; // eax
  char result; // al
  struct tagRECT Rect; // [rsp+20h] [rbp-38h] BYREF

  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  *(_QWORD *)v8 = v7;
  v9 = IsReadyForPresentation;
  WindowReadyState::WaitFlags::Clear((int *)(v8 + 8), (__int64 *)v8, 14);
  if ( a2 )
  {
    PropW = (unsigned int)GetPropW(a2, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
    *(_BYTE *)(a1 + 24) = PropW == 1;
    if ( PropW == 1 && a3 != 1 )
      WindowReadyState::WaitFlags::Set((int *)(a1 + 8), (__int64 *)a1, 2);
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v11 = Rect.right - Rect.left;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 28) = v11;
    *(_DWORD *)(a1 + 32) = Rect.bottom - Rect.top;
    WindowReadyState::_WaitForUnfreezeIfNecessary((HWND *)a1);
  }
  result = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  if ( result != v9 )
    return std::_Func_class<void,bool>::operator()(a1 + 40, result);
  return result;
}
