/*
 * XREFs of NdisMCancelTimer @ 0x1C0014F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

void __stdcall NdisMCancelTimer(PNDIS_MINIPORT_TIMER Timer, PBOOLEAN TimerCancelled)
{
  PBOOLEAN v3; // rdi
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  BOOLEAN v5; // al
  _NDIS_MINIPORT_BLOCK *v6; // r8
  KIRQL v7; // r8
  $958123F00583EBB48F05F544E41CF9A4 *i; // rcx
  struct _NDIS_MINIPORT_TIMER *TimerQueue; // rdx

  v3 = TimerCancelled;
  Miniport = Timer->Miniport;
  if ( (Miniport->DriverVerifyFlags & 8) != 0 )
  {
    *TimerCancelled = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(TimerCancelled) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)TimerCancelled,
        12,
        11,
        (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
        (char)Miniport,
        (char)Timer);
    }
    v5 = KeCancelTimer(&Timer->Timer);
    *v3 = v5;
    v6 = Timer->Miniport;
    if ( (v6->DriverHandle->Flags & 2) != 0 && v5 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&v6->TimerQueueLock);
      for ( i = &Timer->Miniport->560; ; i = ($958123F00583EBB48F05F544E41CF9A4 *)&TimerQueue->NextTimer )
      {
        TimerQueue = i->TimerQueue;
        if ( !i->TimerQueue )
          break;
        if ( TimerQueue == Timer )
        {
          i->TimerQueue = Timer->NextTimer;
          break;
        }
      }
      KeReleaseSpinLock(&Timer->Miniport->TimerQueueLock, v7);
    }
  }
}
