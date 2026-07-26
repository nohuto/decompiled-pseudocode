/*
 * XREFs of ndisPnPRemoveDeviceEx @ 0x1C00F4F94
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00F52B0 (ndisWdfPreReleaseHardware.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 */

void __fastcall ndisPnPRemoveDeviceEx(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // eax
  _DEVICE_OBJECT *InputBuffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x1Du, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)MiniportAdapterHandle);
  v2 = MiniportAdapterHandle->PnPFlags & 0xFFFEFFFF;
  MiniportAdapterHandle->PnPDeviceState = NdisPnPDeviceRemoved;
  MiniportAdapterHandle->PnPFlags = v2 | 0x10;
  if ( ndisIsMiniportStarted(MiniportAdapterHandle)
    && ((MiniportAdapterHandle->PnPFlags & 0x200000) != 0 && ndisAoAcCapable
     || (MiniportAdapterHandle->FilterPnPFlags & 0x200) != 0)
    && MiniportAdapterHandle->PhysicalMediumType == NdisPhysicalMedium802_3 )
  {
    v3 = MiniportAdapterHandle->PMHardwareCapabilities.Header.Revision == 2;
    v6 = 0LL;
    InputBuffer = MiniportAdapterHandle->PhysicalDeviceObject;
    LODWORD(v6) = 4;
    if ( !v3
      || (MiniportAdapterHandle->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
      || MiniportAdapterHandle->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
      || MiniportAdapterHandle->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
      || (unsigned int)(MiniportAdapterHandle->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
      || (MiniportAdapterHandle->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
      || (v4 = MiniportAdapterHandle->PMHardwareCapabilities.SupportedProtocolOffloads & 3, BYTE5(v6) = 1,
                                                                                            (_BYTE)v4 != 3) )
    {
      BYTE5(v6) = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  ndisPnPRemoveDevice(MiniportAdapterHandle);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x1Eu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)MiniportAdapterHandle);
}
