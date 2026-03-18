/*
 * XREFs of ThreadUnlock1 @ 0x1C0022E20
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0035630 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C011A24C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0129C00 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0129D60 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C012A8C0 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C012A970 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     HMDestroyUnlockedObject @ 0x1C0034DD0 (HMDestroyUnlockedObject.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C003AF80 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     AddToDeferredUserCritSharedThreadUnlockList @ 0x1C00B0EC8 (AddToDeferredUserCritSharedThreadUnlockList.c)
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
  v1 = *(_QWORD **)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = *v1;
  v2 = v1[1];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    {
      v4 = (char *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)*(_DWORD *)v2;
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
