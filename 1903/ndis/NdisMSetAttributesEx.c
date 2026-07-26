/*
 * XREFs of NdisMSetAttributesEx @ 0x1C012F0C0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 *     ?NdisMSetAttributes@@YAXPEAX0EW4_NDIS_INTERFACE_TYPE@@@Z @ 0x1C0095FF0 (-NdisMSetAttributes@@YAXPEAX0EW4_NDIS_INTERFACE_TYPE@@@Z.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x1C002FB60 (NdisInitializeTimer.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012F354 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMSetAttributesEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        UINT CheckForHangTimeInSeconds,
        ULONG AttributeFlags,
        NDIS_INTERFACE_TYPE AdapterType)
{
  NDIS_HANDLE v7; // rbp
  KIRQL v9; // bp
  __int64 i; // rcx
  UINT v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // cl
  KIRQL v17; // al
  KIRQL v18; // bl
  int v19; // edx

  v7 = MiniportAdapterContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportAdapterContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterContext,
      1,
      103,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportAdapterHandle);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x180) == 0 )
    *((_QWORD *)MiniportAdapterHandle + 3) = v7;
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  *((_DWORD *)MiniportAdapterHandle + 119) = AdapterType;
  if ( CheckForHangTimeInSeconds < 2 )
  {
    v11 = 2;
  }
  else if ( CheckForHangTimeInSeconds > 0x40 )
  {
    v11 = 64;
  }
  else
  {
    v11 = CheckForHangTimeInSeconds & 0xFFFFFFFE;
  }
  *((_DWORD *)MiniportAdapterHandle + 94) = v11;
  v12 = *((_DWORD *)MiniportAdapterHandle + 30);
  v13 = *((_DWORD *)MiniportAdapterHandle + 468) | 0x2000000;
  *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  if ( (AttributeFlags & 8) != 0 )
  {
    v12 |= 8u;
    v13 |= 1u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 1) != 0 )
  {
    v12 |= 0x800u;
    v13 |= 0x20u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    v12 |= 0x1000u;
    v13 |= 0x40u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    v12 |= 0x8000u;
    v13 |= 0x100u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13 | 0x200000;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 30) = v12 & 0xFFFDFFFF;
  KeInitializeEvent((PRKEVENT)((char *)MiniportAdapterHandle + 1912), NotificationEvent, 1u);
  v14 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (AttributeFlags & 0x20) != 0 || (v14 & 0x20000) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v14 | 0x40000;
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpcX,
      MiniportAdapterHandle);
    *((_QWORD *)MiniportAdapterHandle + 55) = ndisMSendCompleteX;
  }
  else
  {
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpc,
      MiniportAdapterHandle);
  }
  v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v15 & 0x20000) != 0 )
  {
    ndisReferencePackage((__int64)&dword_1C00E50C0);
    v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  v16 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v16 > 5u || v16 == 5 && *((_BYTE *)MiniportAdapterHandle + 33) || (AttributeFlags & 0x200) != 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 2u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000u;
  }
  if ( ndisPadShortPackets && (AttributeFlags & 0x810) == 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000000u;
  }
  if ( (AttributeFlags & 0x80u) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100000u;
  *((_DWORD *)MiniportAdapterHandle + 30) = v15 | 0x10000;
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  v18 = v17;
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v18);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      1,
      104,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportAdapterHandle);
  }
}
