/*
 * XREFs of ?ndisUnprocessAllMiniports@@_Y2PAGENPNP@@AXPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0136338
 * Callers:
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisUnprocessAllMiniports(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  KIRQL v2; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v4; // dl
  signed __int32 InterlockedFlags; // eax
  signed __int32 v6; // ett

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      67,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1);
  while ( 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
    MiniportQueue = a1->MiniportQueue;
    v4 = v2;
    while ( MiniportQueue )
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
      if ( (InterlockedFlags & 0x80) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&MiniportQueue->InterlockedFlags, 0xFFFFFF7F);
        break;
      }
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    KeReleaseSpinLock(&a1->Ref.SpinLock, v4);
    if ( !MiniportQueue )
      break;
    ndisDereferenceMiniport((__int64)MiniportQueue, 0x52u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      68,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1);
}
