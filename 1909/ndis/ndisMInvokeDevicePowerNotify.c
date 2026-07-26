/*
 * XREFs of ndisMInvokeDevicePowerNotify @ 0x1C00FC6F0
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ndisMInvokeDevicePowerNotify(__int64 a1, int a2))(_QWORD, _QWORD)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 3760);
  v3 = a2;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 856);
  if ( result && *(_DWORD *)(v2 + 904) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        167,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        a1);
      result = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 856);
    }
    result = (__int64 (__fastcall *)(_QWORD, _QWORD))result(*(_QWORD *)(a1 + 24), v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return (__int64 (__fastcall *)(_QWORD, _QWORD))WPP_RECORDER_SF_qD(
                                                       *((_QWORD *)WPP_GLOBAL_Control + 8),
                                                       v6,
                                                       14,
                                                       168,
                                                       (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
                                                       a1,
                                                       (char)result);
    }
  }
  return result;
}
