/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C0130E30
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0132088 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rsi
  tagObjLock *v3; // rbp
  unsigned int DLT; // eax
  __int64 v5; // rcx
  tagDomLock *DomainLockRef; // r15
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v11; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  char v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h] BYREF

  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = (tagObjLock *)(v2 + 384);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v2 + 384 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v7 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v7);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive(v3);
  if ( *(_QWORD *)(v2 + 1464) && (a1 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = (_QWORD *)*ThreadWin32Thread;
    }
    v24 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v13 = 0;
    v21 = 0LL;
    v22 = 0LL;
    ZwSetIoCompletionEx(v11[178], v11[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v18) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v11[178], &v19, 1LL, &v23, &v24, v18) )
        break;
      if ( (_DWORD)v20 == 1 )
      {
        v13 = 1;
      }
      else
      {
        if ( (_DWORD)v20 || !v11[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v11, &v19, (unsigned int)(v20 + 1));
      }
    }
    if ( v13 )
      ZwAssociateWaitCompletionPacket(v11[181], v11[178], v11[180], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v14 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 6LL) << 16));
  v15 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v15);
  tagObjLock::UnLockExclusive(v3);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v16);
  return v14;
}
