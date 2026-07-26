/*
 * XREFs of WPP_SF_Sd @ 0x1C0051C6C
 * Callers:
 *     _lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator() @ 0x1C00B32B4 (_lambda_07fad1521ccbf9dcf92f4e848ce013d0_--operator().c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C00C8244 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00C8C90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ndisQueryDeviceFlags @ 0x1C00CAF4C (ndisQueryDeviceFlags.c)
 *     NdisQueryDiagnosticSetting @ 0x1C00F6D70 (NdisQueryDiagnosticSetting.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0106FA8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Sd(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(a2, a1, a3, v5, &v6, 4LL, 0LL);
}
