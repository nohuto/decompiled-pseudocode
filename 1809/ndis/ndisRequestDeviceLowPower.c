/*
 * XREFs of ndisRequestDeviceLowPower @ 0x1C00B8D00
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C0073DB0 (NdisMIdleNotificationConfirm.c)
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 *     ndisMediaDisconnectWorker @ 0x1C00F5460 (ndisMediaDisconnectWorker.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FD784 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     McTemplateK0jqx @ 0x1C00694D8 (McTemplateK0jqx.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00771EC (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        __int64 a1,
        POWER_STATE a2,
        REQUEST_POWER_COMPLETE *a3,
        void *a4,
        unsigned __int16 a5)
{
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  unsigned int v11; // edi
  struct _NDIS_MINIPORT_AOAC *v12; // rcx

  ndisLogMiniportEvent(a1, a5);
  if ( (byte_1C00A2083 & 4) != 0 )
    McTemplateK0jqx(
      v9,
      &DevicePowerDownRequested,
      (const GUID *)(a1 + 4040),
      a1 + 4040,
      *(_DWORD *)(a1 + 4088),
      *(_QWORD *)(a1 + 4056));
  _InterlockedOr((volatile signed __int32 *)(a1 + 4464), 4u);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    v11 = 259;
  }
  else
  {
    v10 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 3864), 2u, a2, a3, a4, 0LL);
    v11 = v10;
    if ( v10 != 259 && (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_dq(0x96u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v10, a1);
  }
  v12 = *(struct _NDIS_MINIPORT_AOAC **)(a1 + 4496);
  if ( v12 )
    ndisAoAcPauseRefTimeAccumulation(v12);
  return v11;
}
