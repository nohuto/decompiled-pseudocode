/*
 * XREFs of UpdateMonitorDevices @ 0x1C0052A00
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0041AD0 (DrvEnumDisplayDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0050C84 (DrvUpdateDisplayDriverParameters.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0052060 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006D2F4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C006D878 (DrvSetMonitorBrightness.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00D3C00 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvDimMonitors @ 0x1C00D3F0C (DrvDimMonitors.c)
 *     DrvGetMonitorBrightness @ 0x1C00D50C0 (DrvGetMonitorBrightness.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00D5240 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C00D5814 (DrvPVPGetFirstActiveMonitor.c)
 *     DrvSetMonitorBrightness2 @ 0x1C00D5B80 (DrvSetMonitorBrightness2.c)
 *     DrvUndimMonitors @ 0x1C00D64DC (DrvUndimMonitors.c)
 *     GetMonitorPhysicalDimensions @ 0x1C00D6660 (GetMonitorPhysicalDimensions.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?FillMonitorDataFromMonitorDevice@@YAXPEAUtagPER_MONITOR_DATA@@PEAUtagVIDEO_MONITOR_DEVICE@@_N@Z @ 0x1C0052D14 (-FillMonitorDataFromMonitorDevice@@YAXPEAUtagPER_MONITOR_DATA@@PEAUtagVIDEO_MONITOR_DEVICE@@_N@Z.c)
 *     ?GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z @ 0x1C0052D90 (-GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z.c)
 */

void UpdateMonitorDevices()
{
  wchar_t *v0; // rbx
  bool v1; // r15
  struct _DEVICE_OBJECT *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  char *v5; // rsi
  char *v6; // rax
  _DWORD *v7; // r14
  struct tagPER_MONITOR_DATA *v8; // r13
  __int64 v9; // r12
  struct tagPER_MONITOR_DATA *PerMonitorData; // rbp
  char *v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF
  char *v16; // [rsp+A0h] [rbp+18h]

  v0 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    return;
  v1 = 1;
  while ( 1 )
  {
    v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)v0 + 17);
    P = 0LL;
    if ( v2 )
    {
      if ( (int)GreDeviceIoControlImpl(v2, 0x23201Bu, 0LL, 0, &P, 8u, (unsigned int *)&v14, 1u, 1) >= 0 )
      {
        if ( P )
        {
          LODWORD(v3) = 0;
          if ( (*(_DWORD *)P & 0x20000000) != 0 )
          {
            do
              v3 = (unsigned int)(v3 + 1);
            while ( (*((_DWORD *)P + 5 * v3) & 0x20000000) != 0 );
            if ( (_DWORD)v3 )
              break;
          }
        }
      }
    }
    v4 = *((_QWORD *)v0 + 28);
    if ( v4 )
      Win32FreePool(v4);
    *((_DWORD *)v0 + 54) = 0;
    v5 = 0LL;
LABEL_10:
    *((_QWORD *)v0 + 28) = v5;
    v0 = (wchar_t *)*((_QWORD *)v0 + 16);
    if ( !v0 )
      return;
  }
  v6 = (char *)PALLOCMEM2((unsigned int)(32 * v3), 0x76646747u, 1);
  v16 = v6;
  if ( v6 )
  {
    v7 = v6 + 24;
    v8 = (struct tagPER_MONITOR_DATA *)v6;
    v9 = 0LL;
    v14 = (unsigned int)v3;
    do
    {
      PerMonitorData = 0LL;
      v11 = (char *)P;
      if ( *((_QWORD *)v0 + 28) )
      {
        PerMonitorData = GetPerMonitorData(*(struct _LUID *)((char *)P + 8), *((_DWORD *)P + 1));
        v1 = PerMonitorData == 0LL;
      }
      FillMonitorDataFromMonitorDevice(v8, (struct tagVIDEO_MONITOR_DEVICE *)&v11[v9], v1);
      if ( !v1 )
      {
        *(v7 - 1) = *((_DWORD *)PerMonitorData + 5);
        *v7 = *((_DWORD *)PerMonitorData + 6);
        v7[1] = *((_DWORD *)PerMonitorData + 7);
      }
      v9 += 20LL;
      v8 = (struct tagPER_MONITOR_DATA *)((char *)v8 + 32);
      v7 += 8;
      v1 = 1;
      --v14;
    }
    while ( v14 );
    v5 = v16;
    ExFreePoolWithTag(P, 0);
    v12 = *((_QWORD *)v0 + 28);
    *((_DWORD *)v0 + 54) = v3;
    if ( v12 )
    {
      Win32FreePool(v12);
      *((_QWORD *)v0 + 28) = 0LL;
    }
    goto LABEL_10;
  }
  v13 = *((_QWORD *)v0 + 28);
  *((_DWORD *)v0 + 54) = 0;
  if ( v13 )
  {
    Win32FreePool(v13);
    *((_QWORD *)v0 + 28) = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
