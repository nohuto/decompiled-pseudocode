/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHKK@Z @ 0x1C00B6608
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C004F0F0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C001497C (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004C5E4 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00A2120 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00A6CCC (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00B6930 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00B69E0 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0129C04 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // r14d
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  char *v13; // rdi
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  NTSTATUS v18; // [rsp+30h] [rbp-59h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-51h] BYREF
  PFILE_OBJECT FileObject; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  WCHAR SourceString[40]; // [rsp+60h] [rbp-29h] BYREF

  DeviceObject = 0LL;
  v3 = a2;
  v4 = a1;
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  WdLogEvent5_WdEvent(v5);
  v6 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
  {
    if ( !gpRemoteMirrorGraphicsDevice )
    {
      while ( v4 <= v3 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        v9 = 0;
        if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", v4) < 0 )
          goto LABEL_2;
        RtlInitUnicodeString(&DestinationString, SourceString);
        DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
        v12 = DeviceObjectPointer;
        v18 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
          v17 = WdLogNewEntry5_WdTrace(v11);
          *(_QWORD *)(v17 + 24) = v12;
          WdLogEvent5_WdTrace(v17);
          ++v4;
        }
        else
        {
          v13 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
          if ( v13 )
          {
            *((_DWORD *)v13 + 54) = 0;
            *((_QWORD *)v13 + 28) = 0LL;
            *((_DWORD *)v13 + 65) = 0;
            if ( DeviceObject )
            {
              *((_QWORD *)v13 + 17) = DeviceObject;
              *((_QWORD *)v13 + 29) = FileObject;
            }
            else
            {
              *((_QWORD *)v13 + 17) = 0LL;
              *((_QWORD *)v13 + 29) = 0LL;
            }
            *((_WORD *)v13 + 110) = gProtocolType;
            swprintf_s((wchar_t *)v13, 0x20uLL, L"\\Device\\Video%d", v4++);
            RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                     (unsigned __int16 *)v13,
                                                     0,
                                                     0LL,
                                                     0LL,
                                                     0,
                                                     &v18);
            DrvGetDeviceConfigurationInformation((__int64 *)v13, RegistryHandleFromDeviceMap, 0);
            ZwClose(RegistryHandleFromDeviceMap);
            v15 = (wchar_t *)(v13 + 64);
            if ( (*((_DWORD *)v13 + 40) & 0x200008) == 0x200008 )
            {
              ++gcNextGlobalVirtualOutputNumber;
              swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAYV%d");
              v9 = 1;
            }
            else
            {
              ++gcNextGlobalPhysicalOutputNumber;
              swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAY%d");
            }
            if ( v18 >= 0 && v9 )
            {
              gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v13;
              DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)v13);
              if ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 )
                DrvAddAdapterLuid(*(struct _LUID *)(v13 + 248));
            }
            else
            {
              if ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 )
                DrvRemoveAdapterLuid(*(struct _LUID *)(v13 + 248));
              DrvCleanupOneGraphicsDevice(v13);
              --gcNextGlobalPhysicalOutputNumber;
            }
          }
        }
      }
      gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
      gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
      gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
      gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
      v16 = WdLogNewEntry5_WdTrace(v6);
      WdLogEvent5_WdTrace(v16);
    }
    return 1LL;
  }
  else
  {
LABEL_2:
    v7 = WdLogNewEntry5_WdTrace(v6);
    WdLogEvent5_WdTrace(v7);
    return 0LL;
  }
}
