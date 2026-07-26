/*
 * XREFs of ndisMiniportFatalError @ 0x1C00F434C
 * Callers:
 *     ndisSetPowerResumeComplete @ 0x1C0076040 (ndisSetPowerResumeComplete.c)
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00EB0F0 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C010C328 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00650EC (NdisMRemoveMiniportInternal.c)
 */

void __fastcall ndisMiniportFatalError(__int64 a1, unsigned __int16 a2)
{
  unsigned __int8 v4; // di
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = 1;
  v5 = ndisMReferenceIfBlock(a1, 0x13u);
  if ( !v5
    || (*(_WORD *)(v5 + 1460) = a2,
        _InterlockedOr((volatile signed __int32 *)(v5 + 1456), 1u),
        ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR),
        !*(_QWORD *)(*(_QWORD *)(a1 + 3792) + 864LL))
    || (v6 = *(_QWORD *)(a1 + 4120)) == 0
    || !*(_QWORD *)(v6 + 32)
    || (*(_DWORD *)(a1 + 124) & 0x1080000) != 0
    || *(int *)(a1 + 120) < 0
    || *(_DWORD *)(a1 + 1520) != 1 )
  {
    v4 = 0;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 2u )
    WPP_SF_qD(0x40u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, v4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 3792) + 864LL))(*(_QWORD *)(a1 + 24));
  else
    NdisMRemoveMiniportInternal(a1, a2);
}
