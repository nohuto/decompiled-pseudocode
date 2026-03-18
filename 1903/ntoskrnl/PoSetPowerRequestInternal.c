/*
 * XREFs of PoSetPowerRequestInternal @ 0x1400ECD64
 * Callers:
 *     PoSetPowerRequest @ 0x1400EB3B0 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140181EC8 (PpmBeginHighPerfRequest.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x14069FA64 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PopDiagTracePowerRequestChange @ 0x1400ECF20 (PopDiagTracePowerRequestChange.c)
 *     PopQueuePowerRequestCallback @ 0x1400ED07C (PopQueuePowerRequestCallback.c)
 *     PopPowerRequestCallbackWorker @ 0x1400ED160 (PopPowerRequestCallbackWorker.c)
 *     PopAcquirePowerRequestSpinLock @ 0x1402EDE1C (PopAcquirePowerRequestSpinLock.c)
 *     PopReleasePowerRequestSpinLock @ 0x1402EDE70 (PopReleasePowerRequestSpinLock.c)
 *     PopProcessDisplayRequiredChange @ 0x14069DF70 (PopProcessDisplayRequiredChange.c)
 *     PopReleasePowerRequestPushLock @ 0x14069FCA8 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r14
  void *v5; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  int *v9; // r9
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (int)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0LL;
  v6 = 0;
  if ( a2 > 5 || ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  if ( a2 != 3 )
    goto LABEL_4;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_KPROCESS **)(a1 + 120) != Process )
    return (unsigned int)-1073741637;
  LOBYTE(Process) = 1;
  PopAcquirePowerRequestPushLock(Process);
LABEL_4:
  PopAcquirePowerRequestSpinLock(&LockHandle);
  v7 = a1 + 4 * v2;
  v8 = *(unsigned int *)(v7 + 32);
  if ( (_DWORD)v8 == -1 )
  {
    v12 = -1073741675;
  }
  else
  {
    *(_DWORD *)(v7 + 32) = v8 + 1;
    if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !(_DWORD)v8 )
    {
      v9 = PopPowerRequestAttributes;
      v10 = PopPowerRequestAttributes[4 * v2];
      if ( v10 == -1 )
      {
        v12 = -1073741675;
        *(_DWORD *)(v7 + 32) = v8;
        goto LABEL_13;
      }
      v11 = v10 + 1;
      PopPowerRequestAttributes[4 * v2] = v11;
      if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || v11 == 1 )
      {
        LOBYTE(v8) = 1;
        LOBYTE(v9) = CurrentIrql >= 2u;
        PopQueuePowerRequestCallback(a1, (unsigned int)v2, v8, v9, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
      }
      if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 120) && CurrentIrql < 2u )
      {
        v5 = *(void **)(a1 + 120);
        ObfReferenceObjectWithTag(v5, 0x72506F50u);
        v6 = 1;
      }
    }
    PopDiagTracePowerRequestChange(a1);
    v12 = 0;
  }
LABEL_13:
  PopReleasePowerRequestSpinLock(&LockHandle);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock(v14, v13);
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker(0LL);
  if ( v5 )
  {
    PopProcessDisplayRequiredChange(v5, v6);
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  }
  return v12;
}
