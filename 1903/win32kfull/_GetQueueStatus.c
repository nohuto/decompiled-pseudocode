/*
 * XREFs of _GetQueueStatus @ 0x1C00148A0
 * Callers:
 *     NtUserGetThreadState @ 0x1C01018A0 (NtUserGetThreadState.c)
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C0014A04 (xxxDrainQueueCompletions.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetQueueStatus(__int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rbx
  _QWORD *ThreadWin32Thread; // rax
  tagObjLock *v5; // r14
  unsigned int DLT; // eax
  __int64 v7; // rcx
  tagDomLock *DomainLockRef; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // esi
  int v12; // ebp
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v15; // edi
  unsigned int v16; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  v5 = (tagObjLock *)(v3 + 48);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v3 + 48 == (_QWORD *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  v9 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v9);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v3 + 48));
  if ( v3[183] && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v10 = v3[55];
  v11 = a1 & 0x5DFF;
  v12 = *(unsigned __int16 *)(v10 + 4);
  *(_WORD *)(v10 + 4) = v12 & ~(a1 & 0x5DFF);
  v13 = v3[55];
  v14 = *(unsigned __int16 *)(v13 + 8);
  v15 = *(unsigned __int16 *)(v13 + 6);
  v16 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v16);
  tagObjLock::UnLockExclusive(v5);
  tagDomLock::UnLockShared(DomainLockRef);
  return v11 & v12 | ((v11 & (v15 | v14)) << 16);
}
