/*
 * XREFs of ndisRequestedDevicePowerIrpComplete @ 0x1C00112B0
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0qq @ 0x1C004F3F0 (McTemplateK0qq.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C3658 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisRequestedDevicePowerIrpComplete(
        struct _MCGEN_TRACE_CONTEXT *Arg2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const unsigned int *a5)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx

  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(56LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Arg2);
  v7 = *(_QWORD *)(a4 + 184);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 64LL);
  *(_OWORD *)(a4 + 48) = *(_OWORD *)a5;
  if ( *(int *)a5 < 0 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_q(58LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Arg2);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v8 + 5264);
    if ( (byte_1C00A2082 & 0x40) != 0 )
      McTemplateK0qqq(v10, &IrpSetPowerFailed, &NDIS_PROVIDER_ID, *a5, 0x78Fu, (const unsigned int)Arg2);
    IofCompleteRequest((PIRP)a4, 0);
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(57LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Arg2, *(unsigned int *)(v7 + 24));
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0qq(Arg2, &PowerIrpComplete, &NDIS_PROVIDER_ID, (const unsigned int)Arg2, *(_DWORD *)(v7 + 24));
    PoSetPowerState(*(PDEVICE_OBJECT *)(v7 + 40), SystemPowerState, *(POWER_STATE *)(v7 + 24));
    v9 = *(_QWORD *)(a4 + 184);
    *(_OWORD *)(v9 - 72) = *(_OWORD *)v9;
    *(_OWORD *)(v9 - 56) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v9 - 40) = *(_OWORD *)(v9 + 32);
    *(_QWORD *)(v9 - 24) = *(_QWORD *)(v9 + 48);
    *(_BYTE *)(v9 - 69) = 0;
    IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 3872), (PIRP)a4);
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(59LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Arg2);
}
