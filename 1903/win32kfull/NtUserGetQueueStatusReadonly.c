/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C0014EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0016108 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rsi
  tagObjLock *v3; // rbp
  unsigned int DLT; // eax
  __int64 v5; // rcx
  tagDomLock *DomainLockRef; // r15
  unsigned int v7; // eax
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v9; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]
  char v21; // [rsp+90h] [rbp+8h] BYREF
  __int64 v22; // [rsp+98h] [rbp+10h] BYREF

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
    v9 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v9 = (_QWORD *)*ThreadWin32Thread;
    }
    v22 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v11 = 0;
    v19 = 0LL;
    v20 = 0LL;
    ZwSetIoCompletionEx(v9[178], v9[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v16) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v9[178], &v17, 1LL, &v21, &v22, v16) )
        break;
      if ( (_DWORD)v18 == 1 )
      {
        v11 = 1;
      }
      else
      {
        if ( (_DWORD)v18 || !v9[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v9, &v17, (unsigned int)(v18 + 1));
      }
    }
    if ( v11 )
      ZwAssociateWaitCompletionPacket(v9[181], v9[178], v9[180], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v12 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 6LL) << 16));
  v13 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v13);
  tagObjLock::UnLockExclusive(v3);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v14);
  return v12;
}
