/*
 * XREFs of DpiHybridInternalPanelOverride @ 0x1C001F410
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

bool DpiHybridInternalPanelOverride()
{
  __int64 v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h]
  const wchar_t *v3; // [rsp+40h] [rbp-9h]
  int *v4; // [rsp+48h] [rbp-1h]
  int v5; // [rsp+50h] [rbp+7h]
  int *v6; // [rsp+58h] [rbp+Fh]
  int v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+70h] [rbp+27h]
  _BYTE v10[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v11; // [rsp+B0h] [rbp+67h] BYREF

  if ( !g_OSTestSigningEnabled )
    return 0;
  v11 = 0;
  v1 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v3 = L"HybridInternalPanelOverrideEnable";
  v4 = &v11;
  v6 = &v11;
  v2 = 288;
  v5 = 67108868;
  v7 = 4;
  memset(v10, 0, sizeof(v10));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v1, 0LL, 0LL);
  return v11 != 0;
}
