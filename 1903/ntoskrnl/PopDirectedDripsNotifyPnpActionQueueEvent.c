/*
 * XREFs of PopDirectedDripsNotifyPnpActionQueueEvent @ 0x140159218
 * Callers:
 *     PoNotifyPnpActionQueueEvent @ 0x1402FB4A0 (PoNotifyPnpActionQueueEvent.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140159350 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1401593AC (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsNotifyPnpActionQueueEvent(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  KIRQL v4; // bp
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // ebx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = a2;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140444D00);
  v5 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          if ( byte_140444D78 )
          {
            *(_QWORD *)&PopDirectedDripsState[2 * v3 + 182] += MEMORY[0xFFFFF78000000008] - qword_140444D90;
            qword_140444D90 = 0LL;
          }
          dword_140444D0C = 26;
        }
      }
      else
      {
        dword_140444D0C = v3;
        if ( byte_140444D78 )
          qword_140444D90 = MEMORY[0xFFFFF78000000008];
      }
    }
    else
    {
      if ( !--dword_140444D08 )
      {
        PopDirectedDripsClearDisengageReason(4LL);
        if ( byte_140444D78 )
        {
          qword_140444D80 += v5 - qword_140444D88;
          qword_140444D88 = 0LL;
        }
      }
      --PopDirectedDripsState[v3 + 148];
    }
  }
  else
  {
    if ( ++dword_140444D08 == 1 )
    {
      if ( byte_140444D78 )
        qword_140444D88 = MEMORY[0xFFFFF78000000008];
      PopDirectedDripsSetDisengageReason(4LL);
    }
    ++PopDirectedDripsState[v3 + 148];
    if ( byte_140444D78 )
      ++PopDirectedDripsState[v3 + 234];
  }
  KxReleaseSpinLock(&qword_140444D00);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
