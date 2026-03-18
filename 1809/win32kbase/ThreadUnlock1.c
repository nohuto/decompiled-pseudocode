/*
 * XREFs of ThreadUnlock1 @ 0x1C00250E0
 * Callers:
 *     DestroyThreadsObjects @ 0x1C002E4A0 (DestroyThreadsObjects.c)
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0063DFC (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0063FE4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0064B10 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0064BC0 (xxxInternalActivateKeyboardLayout.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     HMDestroyUnlockedObject @ 0x1C002D920 (HMDestroyUnlockedObject.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00324A0 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     AddToDeferredUserCritSharedThreadUnlockList @ 0x1C00EB854 (AddToDeferredUserCritSharedThreadUnlockList.c)
 */

__int64 ThreadUnlock1()
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v1; // rbx
  __int64 v2; // rbx
  char *v4; // rdi
  char v5; // al
  char *v6; // rcx
  tagObjLock *v7; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = *(_QWORD **)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = *v1;
  v2 = v1[1];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    {
      v4 = (char *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)v2;
      v5 = v4[25];
      if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
      {
        if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v7);
          v6 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)v2;
          if ( !*((_QWORD *)v6 + 2) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
            AddToDeferredUserCritSharedThreadUnlockList(v6);
          }
          tagObjLock::UnLock(v7);
        }
        else
        {
          HMDestroyUnlockedObject(v4);
        }
        return 0LL;
      }
    }
  }
  return v2;
}
