/*
 * XREFs of ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013B1C4
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMInvokeShutdown @ 0x1C009B0E8 (ndisMInvokeShutdown.c)
 */

__int64 __fastcall ndisMShutdownMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  unsigned int Flags; // edx
  __int64 v4; // rdx
  void (__fastcall *ShutdownHandler)(void *); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      123,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  Flags = a1->Flags;
  a1->PnPFlags |= 0x1000000u;
  a1->MiniportThread = 0LL;
  a1->Flags = Flags & 0x7FFFFFFE | 0x80000000;
  KeReleaseSpinLock(&a1->Lock, v2);
  if ( (a1->PnPFlags & 0x4004) != 0 || (unsigned int)(a1->CurrentDevicePowerState - 2) <= 2 )
    goto LABEL_12;
  if ( a1->MajorNdisVersion >= 6u )
  {
    if ( a1->DriverHandle->MiniportDriverCharacteristics.ShutdownHandlerEx )
      ndisMInvokeShutdown((__int64)a1, 0);
  }
  else
  {
    ShutdownHandler = a1->ShutdownHandler;
    if ( ShutdownHandler )
      ShutdownHandler(a1->ShutdownContext);
  }
  a1->PnPFlags |= 0x800000u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      9u,
      0x7Cu,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
LABEL_12:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        125,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
  }
  return 0LL;
}
