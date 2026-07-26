/*
 * XREFs of ndisCancelWaitWake @ 0x1C0019D1C
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00B6FD0 (NdisMIdleNotificationConfirm.c)
 *     ndisSelectiveSuspendStop @ 0x1C00B9798 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00BB2E8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 */

void __fastcall ndisCancelWaitWake(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  int v4; // edx
  int v5; // ecx
  KIRQL v6; // al
  char v7; // bl

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  if ( !*(_QWORD *)(a1 + 1296) || *(_BYTE *)(a1 + 1328) || *(_BYTE *)(a1 + 1330) )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock(v1, v3);
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_WORD *)(a1 + 1329) = 257;
    KeReleaseSpinLock(v1, v3);
    if ( IoCancelIrp(*(PIRP *)(a1 + 1296)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v4,
          14,
          154,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          a1);
      }
      if ( (byte_1C00E8081 & 8) != 0 )
        McTemplateK0jqxq(
          v5,
          (unsigned int)&CancelledWakeIrp,
          a1 + 4008,
          a1 + 4008,
          *(_DWORD *)(a1 + 4056),
          *(_QWORD *)(a1 + 4024),
          1);
    }
    v6 = KeAcquireSpinLockRaiseToDpc(v1);
    v7 = *(_BYTE *)(a1 + 1328);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_BYTE *)(a1 + 1329) = 0;
    KeReleaseSpinLock(v1, v6);
    if ( v7 )
      IofCompleteRequest(*(PIRP *)(a1 + 1296), 0);
  }
}
