/*
 * XREFs of ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E319C
 * Callers:
 *     NtUserUndelegateInput @ 0x1C013AAD0 (NtUserUndelegateInput.c)
 *     NtUserHandleDelegatedInput @ 0x1C022F9F0 (NtUserHandleDelegatedInput.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01E14B0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01E30FC (-_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E3268 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 */

__int64 __fastcall _HandleDelegatedInput(__int64 a1, unsigned int a2, struct tagMSG *a3)
{
  unsigned int DLT; // eax
  struct tagQMSG *v7; // rbx
  struct CInpLockGuard *TouchProcessorLock; // rax
  struct tagQMSG *i; // rax
  struct tagQMSG *v11; // [rsp+40h] [rbp+18h] BYREF

  DLT = DLT_QUEUE::getDLT(a1);
  GetDomainLockRef(DLT);
  v7 = 0LL;
  if ( a3 )
  {
    if ( !(unsigned int)_FindQMsgFromMsg((struct tagTHREADINFO *const)a1, a3, &v11) )
      return (unsigned int)v7;
    v7 = v11;
  }
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v11, TouchProcessorLock);
  for ( i = *(struct tagQMSG **)(*(_QWORD *)(a1 + 424) + 24LL);
        i != v7;
        i = _HandleDelegatedInputWorker((struct tagTHREADINFO *)a1, a2, i) )
  {
    ;
  }
  CInpLockGuard::UnLock(v11);
  LODWORD(v7) = 1;
  return (unsigned int)v7;
}
