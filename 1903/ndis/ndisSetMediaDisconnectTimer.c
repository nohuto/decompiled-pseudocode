/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C001CB1C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0103A54 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     NdisSetTimer @ 0x1C001CC60 (NdisSetTimer.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1)
{
  int v2; // ecx
  int v3; // edx

  v2 = *(_DWORD *)(a1 + 124);
  if ( (v2 & 0x20) != 0
    && (*(_DWORD *)(a1 + 4420) & 8) != 0
    && (v2 & 8) == 0
    && (unsigned __int8)ndisReferenceMiniport(a1) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        14,
        142,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1,
        *(_WORD *)(a1 + 3684));
    }
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
    NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3684));
  }
}
