/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C00E7490
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00262E4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+28h] [rbp-60h]
  ULONG64 v22; // [rsp+40h] [rbp-48h] BYREF
  int v23; // [rsp+48h] [rbp-40h]
  char v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h] BYREF

  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = (tagObjLock *)(v2 + 392);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  if ( v2 + 392 == gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v7 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v7);
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive(v3);
  if ( *(_QWORD *)(v2 + 1440) && (a1 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8) )
    {
      ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v25 = 0LL;
    v13 = 0;
    ZwSetIoCompletionEx(v11[175], v11[179], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v21) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v11[175], &v22, 1LL, &v24, &v25, v21) )
        break;
      if ( v23 == 1 )
      {
        v13 = 1;
      }
      else
      {
        if ( v23 || !v11[180] )
          break;
        xxxHandleCoreMessagingQueueCompletion((__int64)v11, &v22, v23 + 1);
      }
    }
    if ( v13 )
      ZwAssociateWaitCompletionPacket(v11[178], v11[175], v11[177], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v14 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 6LL) << 16));
  v15 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v15);
  tagObjLock::UnLock(v3);
  tagObjLock::UnLock(DomainLockRef);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v14;
}
