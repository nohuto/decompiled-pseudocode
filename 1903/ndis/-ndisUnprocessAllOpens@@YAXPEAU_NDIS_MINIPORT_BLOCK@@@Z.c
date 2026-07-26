/*
 * XREFs of ?ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00149F0
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisUnprocessAllOpens(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // r15
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rsi
  volatile unsigned int OpenFlags; // eax
  struct _KEVENT *WaitNetPnpEvent; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      22,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  if ( OpenQueue )
  {
    do
    {
      MiniportNextOpen = OpenQueue->MiniportNextOpen;
      KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
      OpenFlags = OpenQueue->OpenFlags;
      if ( (OpenFlags & 0x80010) == 0x80010 )
      {
        WaitNetPnpEvent = OpenQueue->WaitNetPnpEvent;
        OpenQueue->OpenFlags = OpenFlags & 0xFFF7FFEF;
        if ( WaitNetPnpEvent )
        {
          KeSetEvent(WaitNetPnpEvent, 0, 0);
          OpenQueue->WaitNetPnpEvent = 0LL;
        }
      }
      else if ( (OpenFlags & 0x80000) != 0 )
      {
        OpenQueue->OpenFlags &= ~0x80000u;
      }
      KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
      OpenQueue = MiniportNextOpen;
    }
    while ( MiniportNextOpen );
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      23,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1);
}
