/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C003E120
 * Callers:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C00416B0 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0012318 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C003D6C0 (UpdateMonitorDevices.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0041158 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  int v5; // r15d
  int v9; // r14d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  unsigned int v11; // edx
  unsigned __int16 *v12; // rbp
  __int64 v14; // rcx
  unsigned int v15; // ebp
  _OWORD *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  const unsigned __int16 *v19; // rax
  unsigned int v20; // edx
  unsigned __int16 *v21; // r12
  int v22; // [rsp+28h] [rbp-20h]
  int v23; // [rsp+28h] [rbp-20h]
  int v25; // [rsp+70h] [rbp+28h]

  v5 = -1073741823;
  v25 = -1073741823;
  v9 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v9,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL);
      v12 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v25 = DrvWriteDisplayDriverParameters(a1, v11, RegistryHandleFromDeviceMap, a2, a3, v22);
        v5 = v25;
        ZwClose(v12);
      }
      if ( v5 >= 0 )
        break;
      if ( v9 != 2 )
        goto LABEL_6;
      v9 = 0;
    }
    if ( a4 )
    {
      UpdateMonitorDevices();
      v17 = 0LL;
      if ( *((_DWORD *)a1 + 54) )
      {
        do
        {
          v18 = *((_QWORD *)a1 + 28);
          if ( (*(_BYTE *)(v18 + 20 * v17) & 3) == 3 )
          {
            v19 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v9,
                                              (unsigned int *)(v18 + 4 * (5 * v17 + 1)),
                                              0LL,
                                              0,
                                              0LL);
            v21 = (unsigned __int16 *)v19;
            if ( v19 )
            {
              DrvWriteDisplayDriverParameters(a1, v20, v19, a2, a3, v23);
              ZwClose(v21);
            }
          }
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *((_DWORD *)a1 + 54) );
        v5 = v25;
      }
    }
LABEL_6:
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
      return (unsigned int)v5;
    return 0LL;
  }
  *((_DWORD *)a1 + 65) = a3 == 0;
  if ( (*((_DWORD *)a1 + 40) & 8) == 0 || !a2 )
    return 0LL;
  v14 = *((_QWORD *)a1 + 34);
  v15 = a2->dmDriverExtra + a2->dmSize;
  if ( v14 )
  {
    Win32FreePool(v14);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  v16 = PALLOCMEM2(v15, 0x73726447u, 0);
  *((_QWORD *)a1 + 34) = v16;
  if ( v16 )
  {
    *v16 = *(_OWORD *)a2->dmDeviceName;
    v16[1] = *(_OWORD *)&a2->dmDeviceName[8];
    v16[2] = *(_OWORD *)&a2->dmDeviceName[16];
    v16[3] = *(_OWORD *)&a2->dmDeviceName[24];
    v16[4] = *(_OWORD *)&a2->dmSpecVersion;
    v16[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
    v16[6] = *(_OWORD *)&a2->dmYResolution;
    v16[7] = *(_OWORD *)&a2->dmFormName[5];
    v16[8] = *(_OWORD *)&a2->dmFormName[13];
    v16[9] = *(_OWORD *)&a2->dmFormName[21];
    v16[10] = *(_OWORD *)&a2->dmFormName[29];
    v16[11] = *(_OWORD *)&a2->dmPelsHeight;
    v16[12] = *(_OWORD *)&a2->dmICMIntent;
    *((_QWORD *)v16 + 26) = *(_QWORD *)&a2->dmReserved2;
    *((_DWORD *)v16 + 54) = a2->dmPanningHeight;
    memmove((void *)(*((_QWORD *)a1 + 34) + 220LL), &a2[1], a2->dmDriverExtra);
    return 0LL;
  }
  return 3221225495LL;
}
