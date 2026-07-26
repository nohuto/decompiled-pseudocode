/*
 * XREFs of ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F12C
 * Callers:
 *     ndisEnableWppTracingCallback @ 0x1C004FF5C (ndisEnableWppTracingCallback.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004EEEC (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_DDDDD @ 0x1C004F700 (WPP_SF_DDDDD.c)
 *     WPP_SF_qqZ @ 0x1C004F958 (WPP_SF_qqZ.c)
 */

void __fastcall ndisMEmitTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // bp
  _NDIS_FILTER_BLOCK *LowestFilter; // rdi
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi

  if ( byte_1C00A0251 )
  {
    WPP_SF_qqZ(87LL, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1, a1->DriverHandle, a1->pAdapterInstanceName);
    if ( byte_1C00A0251 )
    {
      WPP_SF_DDDDD(
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        HIWORD(a1->NetLuid.Value),
        a1->DriverHandle->MajorNdisVersion,
        a1->DriverHandle->MinorNdisVersion,
        a1->IfIndex,
        HIWORD(a1->NetLuid.Value),
        (a1->NetLuid.Value >> 24) & 0xFFFFFF);
      if ( byte_1C00A0251 )
        WPP_SF_dd(0x59u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1->State, a1->PnPDeviceState);
    }
  }
  if ( a1->AoAc )
    ndisAoAcTraceRundown(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LowestFilter = a1->LowestFilter;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 74656;
  if ( LowestFilter )
  {
    if ( byte_1C00A0251 )
    {
      WPP_SF_(0x5Bu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
      LowestFilter = a1->LowestFilter;
    }
    while ( LowestFilter )
    {
      if ( byte_1C00A0251 )
        WPP_SF_qqZ(
          92LL,
          &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids,
          LowestFilter,
          LowestFilter->FilterDriver,
          LowestFilter->FilterFriendlyName);
      LowestFilter = LowestFilter->HigherFilter;
    }
  }
  else if ( byte_1C00A0251 )
  {
    WPP_SF_(0x5Au, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  }
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    if ( byte_1C00A0251 )
    {
      WPP_SF_(0x5Eu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
      OpenQueue = a1->OpenQueue;
    }
    while ( OpenQueue )
    {
      if ( byte_1C00A0251 )
        WPP_SF_qqZ(
          95LL,
          &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids,
          OpenQueue,
          OpenQueue->ProtocolHandle,
          &OpenQueue->ProtocolHandle->Name);
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
  }
  else if ( byte_1C00A0251 )
  {
    WPP_SF_(0x5Du, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v2);
}
