/*
 * XREFs of PopPepUpdateDripsDeviceVetoMask @ 0x1402DE200
 * Callers:
 *     PopFxUpdateVetoMaskWork @ 0x14086BB40 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401725A8 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402D410C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402DD144 (PopPepGetMinimumDevicePowerState.c)
 */

__int64 __fastcall PopPepUpdateDripsDeviceVetoMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  volatile LONG *v4; // r14
  KIRQL v5; // al
  unsigned int v6; // r15d
  KIRQL v7; // si
  char DeepSleepPlatformStateIndex; // al
  int *v9; // r9
  char v10; // bp
  int v11; // r8d
  int *v12; // rdx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  int v17; // eax
  char v18; // cl
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  char v21; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  int v24; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v4 = (volatile LONG *)(v2 + 64);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64));
  v6 = *(_DWORD *)(v2 + 144);
  v7 = v5;
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 164);
  DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
  v10 = DeepSleepPlatformStateIndex;
  if ( a2 >= 2 )
  {
    v11 = 1 << DeepSleepPlatformStateIndex;
    v12 = v9;
    v13 = a2 - 1;
    do
    {
      *v12++ |= v11;
      --v13;
    }
    while ( v13 );
  }
  v14 = *v9;
  PopPepUpdateIdleStateRefCount(v6, *v9, 1LL);
  PopPepUpdateIdleStateRefCount(v6, v14, 0LL);
  PopPepGetMinimumDevicePowerState(v2, v10, 0, &v24, 0LL);
  v15 = *(_QWORD *)(v2 + 32) + 584LL;
  v16 = MEMORY[0xFFFFF78000000008];
  KxAcquireSpinLock((PKSPIN_LOCK)v15);
  v17 = v24;
  v18 = *(_BYTE *)(v15 + 8);
  if ( v24 == 1 )
  {
    v19 = *(_QWORD *)(v15 + 24);
    if ( v18 && v16 > v19 )
    {
      v20 = v16 - v19;
      *(_QWORD *)(v15 + 128) += v20;
      *(_QWORD *)(v15 + 136) += v20;
    }
    *(_DWORD *)(v15 + 12) = 5;
    v21 = 0;
  }
  else
  {
    if ( !v18 )
      *(_QWORD *)(v15 + 24) = v16;
    *(_DWORD *)(v15 + 12) = v17;
    v21 = 1;
  }
  *(_BYTE *)(v15 + 8) = v21;
  KxReleaseSpinLock((PKSPIN_LOCK)v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
