/*
 * XREFs of ndisRequestDeviceLowPower @ 0x1C001483C
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C00A54D0 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00B6FD0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqx @ 0x1C00A6360 (McTemplateK0jqx.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB018 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        __int64 a1,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        unsigned __int16 a5)
{
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  struct _NDIS_MINIPORT_AOAC *v12; // rcx

  ndisLogMiniportEvent(a1, a5);
  if ( (byte_1C00E8083 & 4) != 0 )
    McTemplateK0jqx(
      v9,
      (unsigned int)&DevicePowerDownRequested,
      a1 + 4008,
      a1 + 4008,
      *(_DWORD *)(a1 + 4056),
      *(_QWORD *)(a1 + 4024));
  _InterlockedOr((volatile signed __int32 *)(a1 + 4424), 4u);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    v11 = 259;
  }
  else
  {
    v11 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 3832), 2u, PowerState, CompletionFunction, Context, 0LL);
    if ( v11 != 259 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        14,
        158,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v11,
        a1);
    }
  }
  v12 = *(struct _NDIS_MINIPORT_AOAC **)(a1 + 4456);
  if ( v12 )
    ndisAoAcPauseRefTimeAccumulation(v12);
  return v11;
}
