/*
 * XREFs of ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C0010E90
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeMiniportSysPowerNotify(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _DWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( DriverHandle->SysPowerNotifyHandler && (a1->PnPFlags & 0x4000) == 0 )
  {
    v5[2] = a3;
    v5[0] = 786816;
    v5[1] = a2;
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(11LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
    DriverHandle->SysPowerNotifyHandler(a1->MiniportAdapterContext, (_NDIS_MINIPORT_SYSPOWER_NOTIFY *)v5);
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(12LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  }
}
