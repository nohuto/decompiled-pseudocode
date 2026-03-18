/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4A18
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004149C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0061A2C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0061B10 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0061BC0 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008E21C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0101314 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v8; // r14d
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  char *v13; // rdi
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  NTSTATUS v18; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B8h] [rbp-50h]
  _BYTE v27[40]; // [rsp+C0h] [rbp-48h] BYREF
  WCHAR SourceString[40]; // [rsp+E8h] [rbp-20h] BYREF

  v19 = 0;
  DeviceObject = 0LL;
  v3 = 0;
  LODWORD(v20) = 0;
  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  WdLogEvent5_WdEvent(v4);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.Flags = 288;
  QueryTable.EntryContext = &v19;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = &v20;
  QueryTable.DefaultLength = 4;
  v25 = 0LL;
  v26 = 0;
  memset(v27, 0, sizeof(v27));
  v5 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
  {
LABEL_2:
    v6 = WdLogNewEntry5_WdTrace(v5);
    WdLogEvent5_WdTrace(v6);
    return 0LL;
  }
  if ( !gpRemoteMirrorGraphicsDevice )
  {
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    while ( 1 )
    {
      v8 = 0;
      if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", v3) < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      v11 = DeviceObjectPointer;
      v18 = DeviceObjectPointer;
      if ( DeviceObjectPointer < 0 )
      {
        v17 = WdLogNewEntry5_WdTrace(v10);
        *(_QWORD *)(v17 + 24) = v11;
        WdLogEvent5_WdTrace(v17);
        ++v3;
      }
      else
      {
        v13 = (char *)PALLOCMEM2(0x138uLL, 1986291527LL, 1);
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
          swprintf_s((wchar_t *)v13, 0x20uLL, L"\\Device\\Video%d", v3++);
          RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v13,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &v18,
                                                   0);
          DrvGetDeviceConfigurationInformation((__int64 *)v13, RegistryHandleFromDeviceMap, 0);
          ZwClose(RegistryHandleFromDeviceMap);
          v15 = (wchar_t *)(v13 + 64);
          if ( (*((_DWORD *)v13 + 40) & 0x200008) == 0x200008 )
          {
            ++gcNextGlobalVirtualOutputNumber;
            swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAYV%d");
            v8 = 1;
          }
          else
          {
            ++gcNextGlobalPhysicalOutputNumber;
            swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          if ( v18 >= 0 && v8 )
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
            DrvCleanupOneGraphicsDevice((__int64)v13);
            --gcNextGlobalPhysicalOutputNumber;
          }
        }
      }
      if ( v3 > v19 )
      {
        gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
        gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
        gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
        gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
        v16 = WdLogNewEntry5_WdTrace(v12);
        *(_QWORD *)(v16 + 24) = 1LL;
        WdLogEvent5_WdTrace(v16);
        return 1LL;
      }
    }
    goto LABEL_2;
  }
  return 1LL;
}
