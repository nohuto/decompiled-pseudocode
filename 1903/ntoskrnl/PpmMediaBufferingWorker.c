/*
 * XREFs of PpmMediaBufferingWorker @ 0x1401431E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x1408B6D3C (PpmPdcNotifyMediaBufferingUpdate.c)
 */

__int64 PpmMediaBufferingWorker()
{
  bool v0; // si
  KIRQL v1; // al
  char v2; // di
  KIRQL v3; // bl
  REGHANDLE v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v8; // rcx
  BOOL v9; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  while ( 1 )
  {
    v0 = 1;
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmMediaBufferingWork);
    v2 = byte_1404441C9;
    v3 = v1;
    if ( byte_1404441C9 == byte_140443B0C )
      break;
    byte_140443B0C = byte_1404441C9;
    KxReleaseSpinLock(&PpmMediaBufferingWork);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
    if ( PpmEtwRegistered )
    {
      v4 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY) )
      {
        UserData.Size = 4;
        UserData.Reserved = 0;
        v9 = v2 != 0;
        UserData.Ptr = (ULONGLONG)&v9;
        EtwWriteEx(v4, &PPM_ETW_MEDIA_BUFFERING_NOTIFY, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( !PpmLowPowerProfile )
    {
      if ( v2 )
        v0 = 0;
      else
        v0 = PpmPdcMediaEngaged != 0;
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( v0 )
    {
      LOBYTE(v5) = v2;
      PpmPdcMediaEngaged = v2;
      PpmPdcNotifyMediaBufferingUpdate(v5);
    }
  }
  byte_1404441C8 = 0;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v8 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v8);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
