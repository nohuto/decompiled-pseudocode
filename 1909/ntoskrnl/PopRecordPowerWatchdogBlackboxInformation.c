/*
 * XREFs of PopRecordPowerWatchdogBlackboxInformation @ 0x140306008
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1408BA36C (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 */

void PopRecordPowerWatchdogBlackboxInformation()
{
  KIRQL v0; // al
  __int64 v1; // rdx
  int v2; // esi
  _DWORD *v3; // rbx
  KIRQL v4; // bp
  int v5; // ecx
  bool v6; // zf
  SIZE_T v7; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r9
  __int64 i; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(InputBuffer, 0, 0x20uLL);
  v0 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  v1 = PopWatchdogList;
  v2 = 0;
  v3 = 0LL;
  v4 = v0;
  if ( (__int64 *)PopWatchdogList == &PopWatchdogList )
    goto LABEL_13;
  do
  {
    v5 = v2++;
    v6 = *(_BYTE *)(v1 + 216) == 0;
    v1 = *(_QWORD *)v1;
    if ( v6 )
      v2 = v5;
  }
  while ( (__int64 *)v1 != &PopWatchdogList );
  if ( !v2 )
  {
LABEL_13:
    v7 = 0LL;
  }
  else
  {
    v7 = 80LL * (unsigned int)(v2 - 1) + 96;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x42424F50u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      *v3 = 1;
      v9 = v3 + 4;
      v3[1] = v7;
      v3[2] = v2;
      for ( i = PopWatchdogList; (__int64 *)i != &PopWatchdogList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 216) )
        {
          *v9 = *(_DWORD *)(i + 16);
          *((_QWORD *)v9 + 9) = *(_QWORD *)(i + 304);
          v9[1] = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(i + 296)) / 0x2710uLL;
          v9[2] = *(_DWORD *)(i + 224);
          v9[3] = *(_DWORD *)(i + 232);
          *((_QWORD *)v9 + 2) = *(_QWORD *)(i + 240);
          *((_QWORD *)v9 + 3) = *(_QWORD *)(i + 248);
          *((_QWORD *)v9 + 4) = *(_QWORD *)(i + 256);
          *((_QWORD *)v9 + 5) = *(_QWORD *)(i + 264);
          *((_QWORD *)v9 + 8) = i + 224;
          *((_QWORD *)v9 + 6) = *(_QWORD *)(i + 280);
          *((_QWORD *)v9 + 7) = *(_QWORD *)(i + 288);
          v9 += 20;
        }
      }
    }
  }
  KxReleaseSpinLock(&PopWatchdogLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v4);
  if ( v7 )
  {
    InputBuffer[2] = 0LL;
    InputBuffer[3] = 8LL;
    InputBuffer[0] = v3;
    InputBuffer[1] = (unsigned int)v7;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x42424F50u);
}
