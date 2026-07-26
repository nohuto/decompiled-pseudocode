/*
 * XREFs of DisableMagicPacketKeyword @ 0x1C00E6268
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 *     ndisWritePMAdminConfigState @ 0x1C00E91AC (ndisWritePMAdminConfigState.c)
 */

void __fastcall DisableMagicPacketKeyword(_DWORD *a1)
{
  NDIS_STATUS v2; // eax
  NDIS_HANDLE v3; // rcx
  struct _NDIS_CONFIGURATION_OBJECT v4; // [rsp+20h] [rbp-28h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+50h] [rbp+8h] BYREF

  ConfigurationHandle = 0LL;
  v4.Flags = 0;
  v4.NdisHandle = a1;
  v4.Header = (_NDIS_OBJECT_HEADER)1573289;
  v2 = NdisOpenConfigurationEx(&v4, &ConfigurationHandle);
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_dq(0x90u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v2, a1);
  }
  else
  {
    ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnMagicPacketStr);
    v3 = ConfigurationHandle;
    a1[986] = a1[986] & 0xFFFFFFF3 | 4;
    NdisCloseConfiguration(v3);
  }
}
