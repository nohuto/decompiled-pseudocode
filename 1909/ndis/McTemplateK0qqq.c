/*
 * XREFs of McTemplateK0qqq @ 0x1C007D7C8
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0013050 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0016CD8 (ndisWriteWmiStatusIndication.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027808 (ndisNotifyWmiBindUnbind.c)
 *     NdisCoDeleteVc @ 0x1C0084F50 (NdisCoDeleteVc.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C0092F80 (NdisReEnumerateProtocolBindings.c)
 *     ndisValidateMiniportDriverCharacteristicsEntryPoints @ 0x1C0109780 (ndisValidateMiniportDriverCharacteristicsEntryPoints.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 *     NdisMAllocateMapRegisters @ 0x1C0139490 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C013A050 (NdisMRegisterDmaChannel.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00618DC (McGenEventWrite.c)
 */

ULONG __stdcall McTemplateK0qqq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1,
        const unsigned int Arg2)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  const unsigned int *p_Arg2; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  unsigned int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = Arg0;
  v8 = &v14;
  v9 = 4LL;
  p_Arg1 = &Arg1;
  p_Arg2 = &Arg2;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, Descriptor, Activity, 4u, &EventData);
}
