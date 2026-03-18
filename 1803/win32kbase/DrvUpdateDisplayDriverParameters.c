/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C0050C84
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0050B34 (ApplyPathModalityToCdsRegistryStore.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0050D78 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  int v5; // ebp
  int v9; // r15d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  unsigned int v11; // edx
  unsigned __int16 *v12; // r14
  __int64 v14; // rcx
  unsigned int v15; // ebp
  _OWORD *v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  const unsigned __int16 *v20; // rax
  unsigned int v21; // edx
  unsigned __int16 *v22; // r13
  int v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+90h] [rbp+28h]

  v5 = -1073741823;
  v26 = -1073741823;
  v9 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    *((_DWORD *)a1 + 65) = a3 == 0;
    if ( (*((_DWORD *)a1 + 40) & 8) != 0 && a2 )
    {
      v14 = *((_QWORD *)a1 + 34);
      v15 = a2->dmDriverExtra + a2->dmSize;
      if ( v14 )
      {
        Win32FreePool(v14);
        *((_QWORD *)a1 + 34) = 0LL;
      }
      v16 = PALLOCMEM2(v15, 0x73726447u, 0);
      *((_QWORD *)a1 + 34) = v16;
      if ( !v16 )
        return 3221225495LL;
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
    }
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v9,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL,
                                                                gProtocolType);
      v12 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v26 = DrvWriteDisplayDriverParameters(a1, v11, RegistryHandleFromDeviceMap, a2, a3, v23);
        v5 = v26;
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
      v17 = 0;
      if ( *((_DWORD *)a1 + 54) )
      {
        do
        {
          v18 = *((_QWORD *)a1 + 28);
          v19 = 32LL * v17;
          if ( (*(_BYTE *)(v19 + v18) & 3) == 3 )
          {
            v20 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v9,
                                              (unsigned int *)(v19 + v18 + 4),
                                              0LL,
                                              0,
                                              0LL,
                                              gProtocolType);
            v22 = (unsigned __int16 *)v20;
            if ( v20 )
            {
              DrvWriteDisplayDriverParameters(a1, v21, v20, a2, a3, v24);
              ZwClose(v22);
            }
          }
          ++v17;
        }
        while ( v17 < *((_DWORD *)a1 + 54) );
        v5 = v26;
      }
    }
LABEL_6:
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      return 0;
    return (unsigned int)v5;
  }
}
