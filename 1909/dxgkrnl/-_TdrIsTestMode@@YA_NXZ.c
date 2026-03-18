/*
 * XREFs of ?_TdrIsTestMode@@YA_NXZ @ 0x1C023EEBC
 * Callers:
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C023E37C (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

bool _TdrIsTestMode(void)
{
  int v0; // eax
  int v1; // ecx
  __int64 v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+38h] [rbp-11h]
  const wchar_t *v5; // [rsp+40h] [rbp-9h]
  int *v6; // [rsp+48h] [rbp-1h]
  int v7; // [rsp+50h] [rbp+7h]
  int *v8; // [rsp+58h] [rbp+Fh]
  int v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+70h] [rbp+27h]
  _BYTE v12[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v13; // [rsp+B0h] [rbp+67h] BYREF
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF

  v4 = 288;
  v13 = 0;
  v5 = L"TdrTestMode";
  v3 = 0LL;
  v6 = &v14;
  v7 = 67108868;
  v8 = &v13;
  v9 = 4;
  v10 = 0LL;
  v11 = 0;
  memset(v12, 0, sizeof(v12));
  v0 = RtlQueryRegistryValuesEx(
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
         &v3,
         0LL,
         0LL);
  v1 = v14;
  if ( v0 < 0 )
    v1 = 0;
  return v1 != 0;
}
