/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C0015EC0
 * Callers:
 *     NtUserCallNoParam @ 0x1C0015E30 (NtUserCallNoParam.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0016108 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  tagObjLock *v8; // rbp
  unsigned int DLT; // eax
  __int64 v10; // rcx
  tagDomLock *DomainLockRef; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  int v20; // esi
  unsigned int v21; // eax
  int v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+58h] [rbp-20h]
  char v28; // [rsp+80h] [rbp+8h] BYREF
  __int64 v29; // [rsp+88h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v8 = (tagObjLock *)(v6 + 384);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v6 + 384 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  v12 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v12);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v6 + 384));
  if ( *(_QWORD *)(v6 + 1464) )
  {
    v17 = KeGetCurrentThread();
    v18 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15, v16) )
    {
      v19 = (_QWORD *)PsGetThreadWin32Thread(v17);
      if ( v19 )
        v18 = (_QWORD *)*v19;
    }
    v29 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v20 = 0;
    v26 = 0LL;
    v27 = 0LL;
    ZwSetIoCompletionEx(v18[178], v18[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v23) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v18[178], &v24, 1LL, &v28, &v29, v23) )
        break;
      if ( (_DWORD)v25 == 1 )
      {
        v20 = 1;
      }
      else
      {
        if ( (_DWORD)v25 || !v18[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v18, &v24, 0LL);
      }
    }
    if ( v20 )
      ZwAssociateWaitCompletionPacket(v18[181], v18[178], v18[180], 0LL, 1LL, 0, 0LL, 0LL);
    v5 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  v21 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v21);
  tagObjLock::UnLockExclusive(v8);
  tagDomLock::UnLockShared(DomainLockRef);
  return v5;
}
