/*
 * XREFs of DisableMagicPacketKeyword @ 0x1C0072228
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     ndisWritePMAdminConfigState @ 0x1C0077A3C (ndisWritePMAdminConfigState.c)
 */

void __fastcall DisableMagicPacketKeyword(_DWORD *a1)
{
  NDIS_STATUS v2; // eax
  NDIS_HANDLE v3; // rcx
  struct _NDIS_CONFIGURATION_OBJECT v4; // [rsp+40h] [rbp-28h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+70h] [rbp+8h] BYREF

  *((_DWORD *)&v4.Header + 1) = 0;
  *(&v4.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  v4.Flags = 0;
  v4.NdisHandle = a1;
  v4.Header = (_NDIS_OBJECT_HEADER)1573289;
  v2 = NdisOpenConfigurationEx(&v4, &ConfigurationHandle);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x90u,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        v2,
        a1);
  }
  else
  {
    ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnMagicPacketStr);
    v3 = ConfigurationHandle;
    a1[978] = a1[978] & 0xFFFFFFF3 | 4;
    NdisCloseConfiguration(v3);
  }
}
