/*
 * XREFs of NdisMIdleNotificationCompleteEx @ 0x1C00B6E90
 * Callers:
 *     NdisMIdleNotificationComplete @ 0x1C00B6E70 (NdisMIdleNotificationComplete.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisRequestPowerResume @ 0x1C00B8DE0 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00B95DC (ndisSelectiveSuspendResumeOperations.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00BB16C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall NdisMIdleNotificationCompleteEx(__int64 a1, int a2)
{
  __int64 v2; // rdi
  KIRQL v5; // si
  int v6; // edx
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 4448);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  ndisLogMiniportEvent(a1, 0x11u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      15,
      28,
      (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
      a1,
      a2);
  }
  *(_DWORD *)(v2 + 504) &= ~4u;
  KeSetEvent((PRKEVENT)(v2 + 200), 0, 0);
  *(_DWORD *)(v2 + 504) &= ~0x80u;
  v7 = *(_DWORD *)(v2 + 504);
  if ( (v7 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
    if ( a2 >= 0 && *(_DWORD *)(a1 + 3868) == 4 )
      ndisAoAcScheduleWakeWorkItem((struct _NDIS_MINIPORT_BLOCK *)a1, NdisMEventD0_AoAcSurpriseWake);
  }
  else if ( (v7 & 0x10) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
    ndisRequestPowerResume(a1);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
    ndisSelectiveSuspendResumeOperations((struct _NDIS_MINIPORT_BLOCK *)a1);
  }
  ndisDereferenceMiniport(a1, 0x15u);
}
