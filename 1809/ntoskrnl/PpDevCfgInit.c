/*
 * XREFs of PpDevCfgInit @ 0x1409C975C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PiDmEnumObjectsWithCallback @ 0x140597F5C (PiDmEnumObjectsWithCallback.c)
 *     RtlIsStateSeparationEnabled @ 0x1406C4490 (RtlIsStateSeparationEnabled.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E601C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     _PnpCtxRegQueryValue @ 0x14073D4F4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x14073D544 (_PnpCtxRegOpenKey.c)
 *     PiDrvDbEnumNodes @ 0x14083E8D0 (PiDrvDbEnumNodes.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083F388 (PiDrvDbQuerySyncNodesUpdated.c)
 */

__int64 PpDevCfgInit()
{
  char v0; // di
  __int64 v1; // rcx
  int ObjectProperties; // ebx
  int v3; // eax
  char v4; // al
  __int64 v5; // rcx
  int v7; // eax
  int MatchingChangeStamp; // [rsp+30h] [rbp-D8h]
  char v9; // [rsp+68h] [rbp-A0h] BYREF
  char v10; // [rsp+69h] [rbp-9Fh] BYREF
  int v11; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v12; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v13; // [rsp+74h] [rbp-94h] BYREF
  int v14; // [rsp+78h] [rbp-90h] BYREF
  int v15; // [rsp+7Ch] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v17; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v18; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v19[16]; // [rsp+A8h] [rbp-60h] BYREF

  v10 = 0;
  v0 = 0;
  memset(v19, 0, 0x78uLL);
  v19[0] = &DEVPKEY_DriverDatabase_ConfigMode;
  LODWORD(v19[1]) = 7;
  v19[2] = &v11;
  LODWORD(v19[3]) = 4;
  v19[5] = &DEVPKEY_DriverDatabase_ConfigOptions;
  LODWORD(v19[6]) = 7;
  v19[7] = &v12;
  v19[10] = &DEVPKEY_DriverDatabase_Updated;
  v19[12] = &v9;
  LODWORD(v19[8]) = 4;
  LODWORD(v19[11]) = 17;
  LODWORD(v19[13]) = 1;
  ObjectProperties = PiDevCfgQueryObjectProperties(v1, (__int64)L"SYSTEM", 7u, 0LL, (__int64)v19, 3u);
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v19[4]) >= 0 )
      v11 = (v11 & 3) != 0 ? v11 : 0;
    else
      v11 = 3;
    v3 = v12;
    *(_DWORD *)&v18.Length = 1835034;
    if ( SLODWORD(v19[9]) < 0 )
      v3 = 0;
    v12 = v3;
    v4 = v9;
    if ( SLODWORD(v19[14]) < 0 )
      v4 = 0;
    v9 = v4;
    v18.Buffer = L"DeviceInstall";
    if ( PipOpenServiceEnumKeys(&v18, 0x20019u, &v17, 0LL, 0) >= 0 )
    {
      if ( (int)PnpCtxRegOpenKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v17,
                  (__int64)L"Parameters",
                  0,
                  0x20019u,
                  (__int64)&Handle) >= 0 )
      {
        v13 = 4;
        if ( (int)PnpCtxRegQueryValue(v5, Handle, L"DriverUpdatesPending", &v14, &v15, &v13) >= 0
          && v14 == 4
          && v13 == 4
          && v15 )
        {
          ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
        }
        ZwClose(Handle);
      }
      ZwClose(v17);
      PiDevCfgFlags |= 2u;
    }
    PiDevCfgMode = v11;
    PiDevCfgOptions = v12;
    if ( v11 )
    {
      if ( (PiDevCfgFlags & 2) == 0 || (v12 & 0x20) != 0 )
      {
        v7 = PiDrvDbQuerySyncNodesUpdated(0, &v10);
        v0 = v10;
        if ( v7 >= 0 )
        {
          if ( v10 )
            PiDevCfgFlags |= 1u;
        }
      }
      if ( v9 == -1 )
        PiDevCfgFlags |= 1u;
    }
    if ( (PiDevCfgFlags & 1) != 0 )
    {
      if ( !RtlIsStateSeparationEnabled() || (ObjectProperties = PiDrvDbEnumNodes(), ObjectProperties >= 0) )
      {
        ObjectProperties = PiDmEnumObjectsWithCallback(
                             1LL,
                             (__int64 (__fastcall *)(void *, __int64, _BYTE *))PiDevCfgInitDeviceCallback,
                             0LL);
        if ( ObjectProperties >= 0 )
        {
          if ( v9 == -1 )
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              0LL,
              (__int64)L"SYSTEM",
              7u,
              0LL,
              MatchingChangeStamp,
              (__int64)&DEVPKEY_DriverDatabase_Updated,
              0,
              0LL,
              0,
              0);
          if ( v0 )
            PiDrvDbQuerySyncNodesUpdated(1, 0LL);
        }
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
