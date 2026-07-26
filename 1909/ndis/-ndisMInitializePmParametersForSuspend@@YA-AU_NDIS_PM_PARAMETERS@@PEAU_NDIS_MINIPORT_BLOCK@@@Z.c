/*
 * XREFs of ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B5AC8
 * Callers:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00B68B0 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfSendPmParametersForSuspend @ 0x1C00BA7D8 (ndisWdfSendPmParametersForSuspend.c)
 * Callees:
 *     ?ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BAF88 (-ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisAddWoLDirectedMAC @ 0x1C01154EC (ndisAddWoLDirectedMAC.c)
 */

struct _NDIS_PM_PARAMETERS *__fastcall ndisMInitializePmParametersForSuspend(
        struct _NDIS_PM_PARAMETERS *__return_ptr retstr,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int EnabledWoLPacketPatterns; // esi
  int v3; // esi
  char v4; // bl
  unsigned int v6; // eax
  unsigned int MediaSpecificWakeUpEvents; // eax

  EnabledWoLPacketPatterns = a2->PMCurrentParameters.EnabledWoLPacketPatterns;
  *(_QWORD *)&retstr->Header.Type = 0LL;
  v3 = EnabledWoLPacketPatterns & 1;
  v4 = (char)a2;
  *(_QWORD *)&retstr->EnabledProtocolOffloads = 0LL;
  retstr->MediaSpecificWakeUpEvents = 0;
  if ( !a2->AoAc || (a2->PnPFlags & 0x60) != 0x60 )
    goto LABEL_14;
  if ( (unsigned int)(a2->DeviceCaps.DeviceWake - 2) > 2 || (a2->PMHardwareCapabilities.Flags & 4) == 0 )
  {
    if ( (unsigned int)(a2->DeviceCaps.DeviceWake - 2) <= 2
      && (a2->PMHardwareCapabilities.Flags & 2) != 0
      && (ndisLowPowerEpoch || ndisConnectedStandby) )
    {
      MediaSpecificWakeUpEvents = a2->PMCurrentParameters.MediaSpecificWakeUpEvents;
      *(_OWORD *)&retstr->Header.Type = *(_OWORD *)&a2->PMCurrentParameters.Header.Type;
      retstr->MediaSpecificWakeUpEvents = MediaSpecificWakeUpEvents;
      goto LABEL_11;
    }
LABEL_14:
    retstr->Header = (_NDIS_OBJECT_HEADER)1311360;
    retstr->WakeUpFlags = 16;
    return retstr;
  }
  v6 = a2->PMCurrentParameters.MediaSpecificWakeUpEvents;
  *(_OWORD *)&retstr->Header.Type = *(_OWORD *)&a2->PMCurrentParameters.Header.Type;
  retstr->MediaSpecificWakeUpEvents = v6;
  retstr->WakeUpFlags |= 0x20u;
LABEL_11:
  if ( ndisAoAcIsDataPathPdcActivatorPresent(a2) && v3 )
    ndisAddWoLDirectedMAC(v4);
  return retstr;
}
