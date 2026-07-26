/*
 * XREFs of ndisRequestedDevicePowerIrpComplete @ 0x1C0013050
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0qq @ 0x1C007D584 (McTemplateK0qq.c)
 *     McTemplateK0qqq @ 0x1C007D5F8 (McTemplateK0qqq.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisRequestedDevicePowerIrpComplete(
        struct _MCGEN_TRACE_CONTEXT *DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _IO_STATUS_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  unsigned int Arg2; // ebx
  unsigned __int64 Information; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  int v10; // edx
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx

  Arg2 = (unsigned int)DeviceObject;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MinorFunction) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      MinorFunction,
      14,
      56,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)DeviceObject);
  }
  Information = Context[11].Information;
  v8 = *(_QWORD *)(*(_QWORD *)(Information + 40) + 64LL);
  Context[3] = *IoStatus;
  if ( IoStatus->Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(MinorFunction) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        MinorFunction,
        14,
        58,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        Arg2);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v8 + 5224, MinorFunction, PowerState);
    if ( (byte_1C00E8042 & 0x40) != 0 )
      McTemplateK0qqq(v11, &IrpSetPowerFailed, &NDIS_PROVIDER_ID, IoStatus->Status, 0x10001u, Arg2);
    IofCompleteRequest((PIRP)Context, 0);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(MinorFunction) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        MinorFunction,
        14,
        57,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        Arg2,
        *(_DWORD *)(Information + 24));
    }
    if ( (byte_1C00E8041 & 8) != 0 )
      McTemplateK0qq(DeviceObject, &PowerIrpComplete, &NDIS_PROVIDER_ID, Arg2, *(_DWORD *)(Information + 24));
    PoSetPowerState(*(PDEVICE_OBJECT *)(Information + 40), SystemPowerState, *(POWER_STATE *)(Information + 24));
    v9 = Context[11].Information;
    *(_OWORD *)(v9 - 72) = *(_OWORD *)v9;
    *(_OWORD *)(v9 - 56) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v9 - 40) = *(_OWORD *)(v9 + 32);
    *(_QWORD *)(v9 - 24) = *(_QWORD *)(v9 + 48);
    *(_BYTE *)(v9 - 69) = 0;
    IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 3840), (PIRP)Context);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      14,
      59,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      Arg2);
  }
}
