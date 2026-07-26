/*
 * XREFs of ndisMInvokeDevicePowerNotify @ 0x1C00B8CBC
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010508 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FD784 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C010AA50 (ndisMPowerPolicy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeDevicePowerNotify(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // rax
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 3792);
  v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 856);
  if ( v5 && *(_DWORD *)(v2 + 904) == 1 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
    {
      WPP_SF_q(0x9Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
      v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 856);
    }
    v6 = v5(*(_QWORD *)(a1 + 24), a2);
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(0xA0u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, v6);
  }
}
