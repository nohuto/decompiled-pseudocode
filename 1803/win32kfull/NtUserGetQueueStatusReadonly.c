/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C00D6470
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C003D780 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rsi
  tagObjLock *v3; // rbp
  unsigned int DLT; // eax
  __int64 v5; // rcx
  tagObjLock *DomainLockRef; // r15
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v11; // rbx
  _QWORD **ThreadWin32Thread; // rax
  int v13; // edi
  __int64 v14; // r9
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // [rsp+28h] [rbp-60h]
  ULONG64 v23; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+48h] [rbp-40h]
  char v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF

  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = (tagObjLock *)(v2 + 384);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  if ( v2 + 384 == gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v7 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v7);
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive(v3);
  if ( *(_QWORD *)(v2 + 1448) && (a1 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8) )
    {
      ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v26 = 0LL;
    v13 = 0;
    ZwSetIoCompletionEx(v11[176], v11[180], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v22) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v11[176], &v23, 1LL, &v25, &v26, v22) )
        break;
      if ( v24 == 1 )
      {
        v13 = 1;
      }
      else
      {
        if ( v24 || !v11[181] )
          break;
        xxxHandleCoreMessagingQueueCompletion((__int64)v11, &v23, (unsigned int)(v24 + 1), v14);
      }
    }
    if ( v13 )
      ZwAssociateWaitCompletionPacket(v11[179], v11[176], v11[178], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v15 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 6LL) << 16));
  v16 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v16);
  tagObjLock::UnLock(v3);
  tagObjLock::UnLock(DomainLockRef);
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v15;
}
