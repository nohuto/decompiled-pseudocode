/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001554C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004149C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0061A2C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0061B10 (DrvCleanupOneGraphicsDevice.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(int a1)
{
  unsigned int v1; // r12d
  __int64 v4; // rbx
  WCHAR v5; // ax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  int v7; // esi
  WCHAR *v8; // r14
  __int64 v9; // rax
  void *v10; // rax
  int v11; // [rsp+30h] [rbp-50h]
  int v12; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  WCHAR ValueName[16]; // [rsp+58h] [rbp-28h] BYREF

  v1 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  if ( a1 )
  {
    if ( gpLocalDiscGraphicsDevice )
      return 1LL;
  }
  else if ( gpRemoteDiscGraphicsDevice )
  {
    return 1LL;
  }
  v4 = PALLOCMEM2(0x138uLL);
  if ( !v4 )
    return v1;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
  RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString.Buffer, DestinationString.Length + 2);
  *(_OWORD *)v4 = *(_OWORD *)ValueName;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&ValueName[8];
  v5 = ValueName[12];
  *(_DWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 224) = 0LL;
  *(_DWORD *)(v4 + 160) |= 0x2000000u;
  *(_WORD *)(v4 + 24) = v5;
  *(_WORD *)(v4 + 220) = -1;
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(v4, 0LL, 0LL, 0LL, 0, &v12, -1);
  v7 = v12;
  v8 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( v12 >= 0 )
  {
    if ( RegistryHandleFromDeviceMap )
    {
      DrvGetDeviceConfigurationInformation((PVOID)v4, RegistryHandleFromDeviceMap, 0);
      ZwClose(v8);
      v1 = 1;
    }
    if ( !*(_QWORD *)(v4 + 208) )
    {
      v9 = PALLOCMEM2(0x20uLL);
      *(_QWORD *)(v4 + 208) = v9;
      if ( v9 )
      {
        LOWORD(v11) = -1;
        v10 = (void *)DrvGetRegistryHandleFromDeviceMap(v4, 0LL, 0LL, v9, 16, &v12, v11);
        if ( v10 )
          ZwClose(v10);
        v7 = v12;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    if ( v7 >= 0 )
    {
      swprintf_s((wchar_t *)(v4 + 64), 0x20uLL, L"WinDisc");
      *(_QWORD *)(v4 + 136) = 0LL;
      if ( gpGraphicsDeviceList )
        *((_QWORD *)gpGraphicsDeviceListLast + 16) = v4;
      else
        gpGraphicsDeviceList = (wchar_t *)v4;
      gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v4;
      if ( a1 )
        gpLocalDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
      else
        gpRemoteDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
      if ( (*(_DWORD *)(v4 + 160) & 0x800000) != 0 )
        DrvAddAdapterLuid(*(struct _LUID *)(v4 + 248));
      return v1;
    }
  }
  DrvCleanupOneGraphicsDevice(v4);
  return 0LL;
}
