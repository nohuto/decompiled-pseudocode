/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C0025324
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00C080C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C00154D0 (NdisSetTimer.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 124);
  if ( (v2 & 0x20) != 0 && (*(_DWORD *)(a1 + 4460) & 8) != 0 && (v2 & 8) == 0 && ndisReferenceMiniport(a1) )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(142LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, *(unsigned __int16 *)(a1 + 3708));
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
    NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3708));
  }
}
