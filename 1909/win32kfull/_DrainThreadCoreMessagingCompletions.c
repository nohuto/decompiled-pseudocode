/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C0131E40
 * Callers:
 *     NtUserCallNoParam @ 0x1C0131DB0 (NtUserCallNoParam.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0132088 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  tagObjLock *v6; // rbp
  unsigned int DLT; // eax
  __int64 v8; // rcx
  tagDomLock *DomainLockRef; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *v15; // rsi
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  int v18; // esi
  unsigned int v19; // eax
  int v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h]
  __int64 v24; // [rsp+50h] [rbp-28h]
  __int64 v25; // [rsp+58h] [rbp-20h]
  char v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = (tagObjLock *)(v4 + 384);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v4 + 384 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v10 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v10);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v4 + 384));
  if ( *(_QWORD *)(v4 + 1464) )
  {
    v15 = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11) )
    {
      v17 = (_QWORD *)PsGetThreadWin32Thread(v15);
      if ( v17 )
        v16 = (_QWORD *)*v17;
    }
    v27 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v18 = 0;
    v24 = 0LL;
    v25 = 0LL;
    ZwSetIoCompletionEx(v16[178], v16[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v21) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v16[178], &v22, 1LL, &v26, &v27, v21) )
        break;
      if ( (_DWORD)v23 == 1 )
      {
        v18 = 1;
      }
      else
      {
        if ( (_DWORD)v23 || !v16[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v16, &v22, 0LL);
      }
    }
    if ( v18 )
      ZwAssociateWaitCompletionPacket(v16[181], v16[178], v16[180], 0LL, 1LL, 0, 0LL, 0LL);
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v11, v13, v14);
  }
  v19 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v19);
  tagObjLock::UnLockExclusive(v6);
  tagDomLock::UnLockShared(DomainLockRef);
  return v3;
}
