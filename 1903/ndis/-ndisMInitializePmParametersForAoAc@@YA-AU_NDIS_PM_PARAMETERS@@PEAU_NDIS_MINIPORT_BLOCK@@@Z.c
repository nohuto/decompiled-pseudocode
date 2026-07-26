/*
 * XREFs of ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBF70
 * Callers:
 *     ndisWdfSendPmParametersForAoAc @ 0x1C00BDAD8 (ndisWdfSendPmParametersForAoAc.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011D330 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PM_PARAMETERS *__fastcall ndisMInitializePmParametersForAoAc(
        struct _NDIS_PM_PARAMETERS *__return_ptr retstr,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int MediaSpecificWakeUpEvents; // eax
  unsigned int SupportedWakeUpEvents; // r8d
  int v4; // eax

  MediaSpecificWakeUpEvents = a2->PMCurrentParameters.MediaSpecificWakeUpEvents;
  SupportedWakeUpEvents = a2->PMAdvertisedCapabilities.SupportedWakeUpEvents;
  *(_OWORD *)&retstr->Header.Type = *(_OWORD *)&a2->PMCurrentParameters.Header.Type;
  retstr->MediaSpecificWakeUpEvents = MediaSpecificWakeUpEvents;
  v4 = 0;
  retstr->WakeUpFlags = 0;
  if ( (SupportedWakeUpEvents & 2) != 0 )
  {
    retstr->WakeUpFlags = 2;
    v4 = 2;
  }
  if ( (SupportedWakeUpEvents & 1) != 0 )
    retstr->WakeUpFlags = v4 | 1;
  return retstr;
}
