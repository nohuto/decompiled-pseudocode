/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x1402D4D70
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x140879788 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BAA0 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbp
  KIRQL v8; // bl
  __int64 InterruptTimePrecise; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  LARGE_INTEGER v17; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  result = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 4) )
    {
      v7 = (unsigned int)dword_14043C4C0;
      result = (unsigned int)dword_14043C4C0;
      if ( dword_14043C4C0 != -1 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v17);
        v10 = 0LL;
        v11 = PpmPlatformStates + 384 * v7;
        v12 = *(_DWORD *)(v11 + 108);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 112);
          while ( 1 )
          {
            v14 = (unsigned __int64)(unsigned int)v10 << 6;
            v15 = *(_QWORD *)(v14 + v13 + 32);
            if ( v15 )
            {
              if ( InterruptTimePrecise - v15 >= a1 )
                break;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= v12 )
              goto LABEL_11;
          }
          *a2 = *(_DWORD *)(v14 + v13 + 16);
          *a3 = *(_QWORD *)(PpmIdleVetoList + 16 * (v10 + 1));
        }
LABEL_11:
        KxReleaseSpinLock(&PpmIdleVetoLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        result = v8;
        __writecr8(v8);
      }
    }
  }
  return result;
}
