/*
 * XREFs of ndisReferenceVcPtr @ 0x1C011EB94
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AC50 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQueryAllData @ 0x1C00B4384 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00B4A84 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B5580 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiFindInstanceName @ 0x1C00F62C0 (ndisWmiFindInstanceName.c)
 *     NdisClCloseCall @ 0x1C011B0C0 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C011B400 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C011BE10 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_SF_qDDLq @ 0x1C00539E8 (WPP_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al

  v2 = 0;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qDDLq(0x29u, *(_QWORD *)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( *(int *)(a1 + 4) >= 0 )
  {
    ++*(_DWORD *)a1;
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v3);
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qDDLq(0x2Au, **(unsigned int **)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  return v2;
}
