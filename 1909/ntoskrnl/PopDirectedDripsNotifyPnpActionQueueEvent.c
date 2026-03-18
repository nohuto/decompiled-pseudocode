/*
 * XREFs of PopDirectedDripsNotifyPnpActionQueueEvent @ 0x1401598B8
 * Callers:
 *     PoNotifyPnpActionQueueEvent @ 0x1402FAF50 (PoNotifyPnpActionQueueEvent.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1401599F0 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140159A4C (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1404449E0);
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
          if ( byte_140444A58 )
          {
            *(_QWORD *)&PopDirectedDripsState[2 * v3 + 182] += MEMORY[0xFFFFF78000000008] - qword_140444A70;
            qword_140444A70 = 0LL;
          }
          dword_1404449EC = 26;
        }
      }
      else
      {
        dword_1404449EC = v3;
        if ( byte_140444A58 )
          qword_140444A70 = MEMORY[0xFFFFF78000000008];
      }
    }
    else
    {
      if ( !--dword_1404449E8 )
      {
        PopDirectedDripsClearDisengageReason(4LL);
        if ( byte_140444A58 )
        {
          qword_140444A60 += v5 - qword_140444A68;
          qword_140444A68 = 0LL;
        }
      }
      --PopDirectedDripsState[v3 + 148];
    }
  }
  else
  {
    if ( ++dword_1404449E8 == 1 )
    {
      if ( byte_140444A58 )
        qword_140444A68 = MEMORY[0xFFFFF78000000008];
      PopDirectedDripsSetDisengageReason(4LL);
    }
    ++PopDirectedDripsState[v3 + 148];
    if ( byte_140444A58 )
      ++PopDirectedDripsState[v3 + 234];
  }
  KxReleaseSpinLock(&qword_1404449E0);
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
