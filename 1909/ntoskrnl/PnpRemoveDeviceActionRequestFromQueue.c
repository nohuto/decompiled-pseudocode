/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x14029F8DC
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14087708C (PiQueueDeviceRequest.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1401599F0 (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015E124 (PnpDeleteDeviceActionRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequestFromQueue(volatile signed __int32 *a1)
{
  unsigned __int8 v2; // di
  KIRQL v3; // bp
  __int64 v4; // rdx
  volatile signed __int32 **v5; // rcx
  __int64 v6; // r15
  KIRQL v7; // r14
  __int64 v8; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx
  void *v11; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( !*((_BYTE *)a1 + 76) )
  {
    v4 = *(_QWORD *)a1;
    v5 = (volatile signed __int32 **)*((_QWORD *)a1 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
      __fastfail(3u);
    *v5 = (volatile signed __int32 *)v4;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *((unsigned int *)a1 + 6);
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_1404449E0);
    v8 = MEMORY[0xFFFFF78000000008];
    if ( !--dword_1404449E8 )
    {
      PopDirectedDripsClearDisengageReason(4);
      if ( byte_140444A58 )
      {
        qword_140444A60 += v8 - qword_140444A68;
        qword_140444A68 = 0LL;
      }
    }
    --dword_1404449F0[v6];
    KxReleaseSpinLock(&qword_1404449E0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
  }
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  __writecr8(v3);
  if ( v2 )
  {
    v11 = (void *)*((_QWORD *)a1 + 2);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    PnpDeleteDeviceActionRequest(a1);
  }
  return v2;
}
