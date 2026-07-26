/*
 * XREFs of NdisMSetAttributesEx @ 0x1C010E770
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1C00EF4F0 (NdisMSetAttributes.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001DCF0 (NdisInitializeTimer.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisSetMiniportHandlers @ 0x1C010E9D0 (ndisSetMiniportHandlers.c)
 */

void __stdcall NdisMSetAttributesEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        UINT CheckForHangTimeInSeconds,
        ULONG AttributeFlags,
        NDIS_INTERFACE_TYPE AdapterType)
{
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

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x69u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x180) == 0 )
    *((_QWORD *)MiniportAdapterHandle + 3) = MiniportAdapterContext;
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 466) = 727451;
  ndisSetMiniportHandlers(MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 466) = 0;
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
  v13 = *((_DWORD *)MiniportAdapterHandle + 470) | 0x2000000;
  *((_DWORD *)MiniportAdapterHandle + 470) = v13;
  if ( (AttributeFlags & 8) != 0 )
  {
    v12 |= 8u;
    v13 |= 1u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 470) = v13;
  }
  if ( (AttributeFlags & 1) != 0 )
  {
    v12 |= 0x800u;
    v13 |= 0x20u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 470) = v13;
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    v12 |= 0x1000u;
    v13 |= 0x40u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 470) = v13;
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    v12 |= 0x8000u;
    v13 |= 0x100u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 470) = v13;
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 470) = v13 | 0x200000;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 30) = v12 & 0xFFFDFFFF;
  KeInitializeEvent((PRKEVENT)MiniportAdapterHandle + 80, NotificationEvent, 1u);
  v14 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (AttributeFlags & 0x20) != 0 || (v14 & 0x20000) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 470) |= 0x800u;
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
    ndisReferencePackage((__int64)&dword_1C009F0B0);
    v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  v16 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v16 > 5u || v16 == 5 && *((_BYTE *)MiniportAdapterHandle + 33) || (AttributeFlags & 0x200) != 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 2u;
    *((_DWORD *)MiniportAdapterHandle + 470) |= 0x20000u;
  }
  if ( ndisPadShortPackets && (AttributeFlags & 0x810) == 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 470) |= 0x20000000u;
  }
  if ( (AttributeFlags & 0x80u) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 470) |= 0x100000u;
  *((_DWORD *)MiniportAdapterHandle + 30) = v15 | 0x10000;
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  v18 = v17;
  *((_DWORD *)MiniportAdapterHandle + 466) = 727614;
  ndisSetMiniportHandlers(MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 466) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v18);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x6Au, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)MiniportAdapterHandle);
}
