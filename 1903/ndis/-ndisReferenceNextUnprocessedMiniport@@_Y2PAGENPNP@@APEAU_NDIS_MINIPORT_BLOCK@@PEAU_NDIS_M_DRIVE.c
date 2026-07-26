/*
 * XREFs of ?ndisReferenceNextUnprocessedMiniport@@_Y2PAGENPNP@@APEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C013620C
 * Callers:
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisIsMiniportReady @ 0x1C007E5F4 (ndisIsMiniportReady.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceNextUnprocessedMiniport(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  KIRQL v2; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v4; // bp
  signed __int32 InterlockedFlags; // eax
  signed __int32 v6; // ett

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      65,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  MiniportQueue = a1->MiniportQueue;
  v4 = v2;
  while ( MiniportQueue )
  {
    if ( ndisIsMiniportReady(MiniportQueue) )
    {
      _m_prefetchw(&MiniportQueue->InterlockedFlags);
      InterlockedFlags = MiniportQueue->InterlockedFlags;
      do
      {
        v6 = InterlockedFlags;
        InterlockedFlags = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&MiniportQueue->InterlockedFlags,
                             InterlockedFlags,
                             InterlockedFlags);
      }
      while ( v6 != InterlockedFlags );
      if ( (InterlockedFlags & 0x80) == 0 && (unsigned __int8)ndisReferenceMiniport((__int64)MiniportQueue) )
      {
        _InterlockedOr((volatile signed __int32 *)&MiniportQueue->InterlockedFlags, 0x80u);
        break;
      }
    }
    MiniportQueue = MiniportQueue->NextMiniport;
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      66,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1);
  return MiniportQueue;
}
