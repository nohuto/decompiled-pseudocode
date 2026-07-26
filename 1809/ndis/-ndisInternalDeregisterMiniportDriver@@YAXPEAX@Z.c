/*
 * XREFs of ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00F0F44
 * Callers:
 *     NdisLWMDeregisterMiniportDriver @ 0x1C00F1620 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C00F1CC0 (NdisMDeregisterMiniportDriver.c)
 * Callees:
 *     ndisCloseRef @ 0x1C00258F8 (ndisCloseRef.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0064A5C (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisInternalDeregisterMiniportDriver(_NDIS_M_DRIVER_BLOCK *this)
{
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r8
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x69u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)this);
  MiniportQueue = this->MiniportQueue;
  if ( MiniportQueue )
  {
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      this,
      MiniportQueue);
    if ( SLOBYTE(this->Flags) < 0 )
      ndisBugCheckEx(0x2BuLL, (ULONG_PTR)this, 0LL, 0LL);
  }
  AssociatedProtocol = this->AssociatedProtocol;
  if ( AssociatedProtocol )
  {
    AssociatedProtocol->AssociatedMiniDriver = 0LL;
    this->AssociatedProtocol = 0LL;
  }
  if ( ndisCloseRef(&this->Ref.SpinLock) )
  {
    ndisDereferenceDriver((__int64)this, 0, 0xFFu);
    if ( (this->Flags & 0xC0) != 0 )
    {
      KeWaitForSingleObject(&this->MiniportsRemovedEvent, Executive, 0, 0, 0LL);
      KeClearEvent(&this->MiniportsRemovedEvent);
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x6Au, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)this);
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(this);
  }
}
