/*
 * XREFs of ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0117B0C
 * Callers:
 *     NdisLWMDeregisterMiniportDriver @ 0x1C009D7C0 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C009E340 (NdisMDeregisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisCloseRef @ 0x1C003E9FC (ndisCloseRef.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C009CD78 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisInternalDeregisterMiniportDriver(_NDIS_M_DRIVER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r8
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      108,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1);
  MiniportQueue = a1->MiniportQueue;
  if ( MiniportQueue )
  {
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      a1,
      MiniportQueue);
    if ( SLOBYTE(a1->Flags) < 0 )
      ndisBugCheckEx(0x2BuLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  AssociatedProtocol = a1->AssociatedProtocol;
  if ( AssociatedProtocol )
  {
    AssociatedProtocol->AssociatedMiniDriver = 0LL;
    a1->AssociatedProtocol = 0LL;
  }
  if ( ndisCloseRef(&a1->Ref.SpinLock) )
  {
    ndisDereferenceDriver((__int64)a1, 0, 0xFFu);
    if ( (a1->Flags & 0xC0) != 0 )
    {
      KeWaitForSingleObject(&a1->MiniportsRemovedEvent, Executive, 0, 0, 0LL);
      KeClearEvent(&a1->MiniportsRemovedEvent);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        109,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (char)a1);
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(a1);
  }
}
