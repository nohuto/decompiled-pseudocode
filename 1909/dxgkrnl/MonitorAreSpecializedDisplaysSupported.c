/*
 * XREFs of MonitorAreSpecializedDisplaysSupported @ 0x1C00C6E1C
 * Callers:
 *     ?_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z @ 0x1C00C6DD8 (-_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C028C984 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

_BOOL8 MonitorAreSpecializedDisplaysSupported()
{
  _BOOL8 result; // rax
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnedProductType[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v3; // [rsp+40h] [rbp-C0h] BYREF
  int v4; // [rsp+48h] [rbp-B8h]
  const wchar_t *v5; // [rsp+50h] [rbp-B0h]
  int *v6; // [rsp+58h] [rbp-A8h]
  int v7; // [rsp+60h] [rbp-A0h]
  int *v8; // [rsp+68h] [rbp-98h]
  int v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  int v11; // [rsp+80h] [rbp-80h]
  _BYTE v12[40]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD VersionInformation[72]; // [rsp+B0h] [rbp-50h] BYREF

  v1 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v5 = L"EnableSpecializedMonitorsPreview";
  v6 = &v1;
  v8 = &v1;
  v4 = 292;
  v7 = 67108868;
  v9 = 4;
  memset(v12, 0, sizeof(v12));
  result = 0;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v3, 0LL, 0LL) >= 0 )
  {
    if ( v1 )
    {
      memset(&VersionInformation[1], 0, 0x118uLL);
      VersionInformation[0] = 284;
      if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0 )
      {
        ReturnedProductType[0] = 0;
        if ( RtlGetProductInfo(
               VersionInformation[1],
               VersionInformation[2],
               LOWORD(VersionInformation[69]),
               HIWORD(VersionInformation[69]),
               ReturnedProductType) )
        {
          if ( (unsigned __int8)ExQueryFastCacheDevLicense()
            && (ReturnedProductType[0] == 4 || ReturnedProductType[0] == 164 || ReturnedProductType[0] == 161) )
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}
