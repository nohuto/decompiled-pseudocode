/*
 * XREFs of ndisReferenceVcPtr @ 0x1C00874C0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C001E30C (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     NdisClCloseCall @ 0x1C0082410 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C0082780 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C00837C0 (NdisCmMakeCallComplete.c)
 *     ndisWmiQueryAllData @ 0x1C00A8D0C (ndisWmiQueryAllData.c)
 * Callees:
 *     WPP_RECORDER_SF_qDDLq @ 0x1C0086B00 (WPP_RECORDER_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // di
  KIRQL v5; // al
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-38h]

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), *(_QWORD *)(a1 + 8), a3, 0x29u, v8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( *(int *)(a1 + 4) >= 0 )
  {
    ++*(_DWORD *)a1;
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), *(_QWORD *)(a1 + 8), v6, 0x2Au, v8);
  return v4;
}
