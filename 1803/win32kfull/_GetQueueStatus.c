/*
 * XREFs of _GetQueueStatus @ 0x1C003BE50
 * Callers:
 *     NtUserCallOneParam @ 0x1C003BDC0 (NtUserCallOneParam.c)
 *     NtUserGetThreadState @ 0x1C00DED00 (NtUserGetThreadState.c)
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C003C400 (xxxDrainQueueCompletions.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetQueueStatus(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int16 v3; // di
  _QWORD *v4; // rbx
  _QWORD *ThreadWin32Thread; // rax
  tagObjLock *v6; // r14
  unsigned int DLT; // eax
  __int64 v8; // rcx
  tagObjLock *DomainLockRef; // r15
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // esi
  int v13; // ebp
  __int64 v14; // rax
  unsigned int v15; // ebx
  int v16; // edi
  unsigned int v17; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = (_QWORD *)*ThreadWin32Thread;
  }
  v6 = (tagObjLock *)(v4 + 48);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  if ( v4 + 48 == (_QWORD *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v10 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v10);
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v4 + 48));
  if ( v4[181] && (v3 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v11 = v4[55];
  v12 = v3 & 0x5DFF;
  v13 = *(unsigned __int16 *)(v11 + 4);
  *(_WORD *)(v11 + 4) = v13 & ~(v3 & 0x5DFF);
  v14 = v4[55];
  v15 = *(unsigned __int16 *)(v14 + 8);
  v16 = *(unsigned __int16 *)(v14 + 6);
  v17 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v17);
  tagObjLock::UnLock(v6);
  tagObjLock::UnLock(DomainLockRef);
  return v12 & v13 | ((v12 & (v16 | v15)) << 16);
}
