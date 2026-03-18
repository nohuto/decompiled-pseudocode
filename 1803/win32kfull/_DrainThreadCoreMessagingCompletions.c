/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C003D5B0
 * Callers:
 *     NtUserCallNoParam @ 0x1C003D530 (NtUserCallNoParam.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C003D780 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  tagObjLock *v6; // rbp
  unsigned int DLT; // eax
  __int64 v8; // rcx
  tagObjLock *DomainLockRef; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rsi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  int v16; // esi
  unsigned int v17; // eax
  int v19; // [rsp+28h] [rbp-50h]
  _BYTE v20[8]; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+48h] [rbp-30h]
  char v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF

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
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  if ( v4 + 384 == gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v10 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v10);
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v4 + 384));
  if ( *(_QWORD *)(v4 + 1448) )
  {
    v13 = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11) )
    {
      v15 = (_QWORD *)PsGetThreadWin32Thread(v13);
      if ( v15 )
        v14 = (_QWORD *)*v15;
    }
    v23 = 0LL;
    v16 = 0;
    ZwSetIoCompletionEx(v14[176], v14[180], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v19) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v14[176], v20, 1LL, &v22, &v23, v19) )
        break;
      if ( v21 == 1 )
      {
        v16 = 1;
      }
      else
      {
        if ( v21 || !v14[181] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v14, v20, 0LL);
      }
    }
    if ( v16 )
      ZwAssociateWaitCompletionPacket(v14[179], v14[176], v14[178], 0LL, 1LL, 0, 0LL, 0LL);
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v11);
  }
  v17 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v17);
  tagObjLock::UnLock(v6);
  tagObjLock::UnLock(DomainLockRef);
  return v3;
}
