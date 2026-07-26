/*
 * XREFs of ndisMiniportFatalError @ 0x1C0118E10
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C007FBB0 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisSetPowerResumeComplete @ 0x1C00B9BD0 (ndisSetPowerResumeComplete.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005F288 (WPP_RECORDER_SF_ql_ea_1C005F288.c)
 *     NdisMRemoveMiniportInternal @ 0x1C009EA7C (NdisMRemoveMiniportInternal.c)
 */

void __fastcall ndisMiniportFatalError(__int64 a1, __int16 a2)
{
  unsigned __int8 v4; // di
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = 1;
  v5 = ndisMReferenceIfBlock(a1, 0x13u);
  if ( !v5
    || (*(_WORD *)(v5 + 1452) = a2,
        _InterlockedOr((volatile signed __int32 *)(v5 + 1448), 1u),
        ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR),
        !*(_QWORD *)(*(_QWORD *)(a1 + 3760) + 864LL))
    || (v6 = *(_QWORD *)(a1 + 4088)) == 0
    || !*(_QWORD *)(v6 + 32)
    || (*(_DWORD *)(a1 + 124) & 0x1080000) != 0
    || *(int *)(a1 + 120) < 0
    || *(_DWORD *)(a1 + 1520) != 1 )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x40u,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      v4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 3760) + 864LL))(*(_QWORD *)(a1 + 24));
  else
    NdisMRemoveMiniportInternal(a1, a2);
}
