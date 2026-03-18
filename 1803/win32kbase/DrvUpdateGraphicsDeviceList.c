/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C0042270
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0042224 (UpdateGraphicsDeviceList.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A26F0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A34A0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvInitConsole @ 0x1C00D52B8 (DrvInitConsole.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00424C0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0042578 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?FillMonitorDataFromMonitorDevice@@YAXPEAUtagPER_MONITOR_DATA@@PEAUtagVIDEO_MONITOR_DEVICE@@_N@Z @ 0x1C0052D14 (-FillMonitorDataFromMonitorDevice@@YAXPEAUtagPER_MONITOR_DATA@@PEAUtagVIDEO_MONITOR_DEVICE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00741E4 (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00CC738 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CC81C (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00CEF64 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00CF1DC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00D08E8 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D12B8 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00D3A50 (DrvCleanupOneGraphicsDevice.c)
 *     bSetDeviceSessionUsage @ 0x1C00D68C0 (bSetDeviceSessionUsage.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0142114 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rax
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v11; // rax
  int v12; // eax
  struct tagGRAPHICS_DEVICE *v13; // rsi
  wchar_t *v14; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v16; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  char *v18; // rbx
  int v19; // r14d
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  struct _DEVICE_OBJECT *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edi
  struct _DEVICE_OBJECT *v28; // r13
  __int64 v29; // rsi
  void *v30; // rax
  __int64 v31; // r14
  struct _DEVICE_OBJECT *v32; // rcx
  HANDLE RegistryHandleFromDeviceMap; // rax
  unsigned __int16 *v34; // rax
  HANDLE v35; // rax
  wchar_t *v36; // rcx
  int PruneFlag; // eax
  int v38; // ecx
  unsigned int v39; // ecx
  __int64 *v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // eax
  bool v44; // zf
  wchar_t *v45; // rcx
  unsigned int v46; // r8d
  int v47; // edx
  unsigned int v48; // edx
  wchar_t *v49; // rdx
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  wchar_t *i; // rcx
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v57; // [rsp+50h] [rbp-B0h]
  _BYTE v58[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v59; // [rsp+54h] [rbp-ACh]
  NTSTATUS v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v61; // [rsp+5Ch] [rbp-A4h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+6Ch] [rbp-94h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h] BYREF
  PVOID v67; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  _QWORD InputBuffer[5]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v70[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+118h] [rbp+18h]
  int v76; // [rsp+120h] [rbp+20h]
  _BYTE v77[40]; // [rsp+128h] [rbp+28h] BYREF

  v2 = 0LL;
  v3 = a1;
  v4 = a2;
  v59 = a1;
  v63 = 0;
  DeviceObject = 0LL;
  v64 = 1;
  DeviceRegKey = 0LL;
  v5 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v5 + 24) = v3;
  *(_QWORD *)(v5 + 32) = v4;
  WdLogEvent5_WdEvent(v5);
  v57 = 0;
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcLocalNextGlobalVirtualOutputNumber;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.EntryContext = &v63;
    QueryTable.DefaultData = &v61;
    v61 = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v75 = 0LL;
    v76 = 0;
    memset(v77, 0, sizeof(v77));
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcRemoteNextGlobalVirtualOutputNumber;
    if ( gProtocolType != -1 )
      v63 = gRemoteContext - 1;
    if ( dword_1C01A1750 && (int)DrvUpdateRemoteAdapterInfo(0LL) < 0 )
      return 0LL;
  }
  while ( 2 )
  {
    if ( gProtocolType != -1 && gcNextGlobalDeviceNumber <= v63 )
    {
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v4 )
        {
          v12 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\Video%d");
        }
        else
        {
          LODWORD(Environment) = gcNextGlobalDeviceNumber;
          v12 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C01A1748, Environment);
        }
        if ( v12 >= 0 )
        {
          v13 = gpRemoteGraphicsDeviceListLast;
          v14 = gpGraphicsDeviceList;
          if ( (_DWORD)v4 )
            v13 = gpLocalGraphicsDeviceListLast;
          while ( v14 )
          {
            if ( !wcsncmp((const wchar_t *)&QueryTable, v14, 0x40uLL) )
              goto LABEL_48;
            if ( v14 == (wchar_t *)v13 )
              break;
            v14 = (wchar_t *)*((_QWORD *)v14 + 16);
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
          v16 = DeviceObjectPointer;
          if ( DeviceObjectPointer < 0 )
          {
            if ( (_DWORD)v4 || gRemoteContext != 1 )
            {
              v23 = WdLogNewEntry5_WdTrace();
              *(_QWORD *)(v23 + 24) = v16;
              WdLogEvent5_WdTrace(v23);
LABEL_48:
              ++gcNextGlobalDeviceNumber;
LABEL_49:
              v6 = v57;
LABEL_51:
              LODWORD(v3) = v59;
              continue;
            }
            FileObject = ::FileObject;
            if ( !::FileObject
              || (RelatedDeviceObject = IoGetRelatedDeviceObject(::FileObject),
                  DeviceObject = RelatedDeviceObject,
                  !FileObject)
              || !RelatedDeviceObject )
            {
              v6 = v57;
LABEL_121:
              v45 = gpGraphicsDeviceList;
              v46 = 0;
              while ( v45 )
              {
                v47 = *((_DWORD *)v45 + 40);
                if ( (v47 & 0x4000000) != 0 )
                {
                  v48 = v47 & 0xFFFFFFFB;
                  *((_DWORD *)v45 + 40) = v48;
                  *((_DWORD *)v45 + 65) = v46 < gRemoteContext;
                  if ( v46 == dword_1C01A1714 )
                    *((_DWORD *)v45 + 40) = v48 | 4;
                  ++v46;
                }
                v45 = (wchar_t *)*((_QWORD *)v45 + 16);
              }
              goto LABEL_6;
            }
            FileObject = 0LL;
          }
          v6 = v57;
          v18 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
          LODWORD(v3) = v59;
          if ( !v18 )
            continue;
          *((_DWORD *)v18 + 54) = 0;
          *((_QWORD *)v18 + 28) = 0LL;
          *((_QWORD *)v18 + 17) = DeviceObject;
          *((_WORD *)v18 + 110) = gProtocolType;
          *((_QWORD *)v18 + 34) = 0LL;
          if ( !(_DWORD)v4 )
            *((_DWORD *)v18 + 40) |= 0x4000000u;
          *((_QWORD *)v18 + 29) = FileObject;
          if ( (_DWORD)v4 )
            *((_DWORD *)v18 + 65) = 0;
          v19 = 0;
          if ( (_DWORD)v4 )
          {
            memset(InputBuffer, 0, sizeof(InputBuffer));
            InputBuffer[1] = VideoPortCallout;
            InputBuffer[0] = v18;
            v20 = GreDeviceIoControlImpl(
                    *((PDEVICE_OBJECT *)v18 + 17),
                    0x23201Fu,
                    InputBuffer,
                    0x28u,
                    InputBuffer,
                    0x28u,
                    &v61,
                    1u,
                    1);
            v21 = v20;
            if ( v20 < 0 )
            {
              v22 = WdLogNewEntry5_WdTrace();
              *(_QWORD *)(v22 + 24) = v21;
LABEL_56:
              WdLogEvent5_WdTrace(v22);
LABEL_57:
              DrvCleanupOneGraphicsDevice(v18);
              goto LABEL_48;
            }
            if ( LODWORD(InputBuffer[2]) )
              *((_DWORD *)v18 + 40) |= 0x40000000u;
            if ( (InputBuffer[4] & 0xC0000001) != 0 )
            {
              v22 = WdLogNewEntry5_WdTrace();
              *(_QWORD *)(v22 + 24) = LODWORD(InputBuffer[4]);
              *(_QWORD *)(v22 + 32) = -1073741637LL;
              goto LABEL_56;
            }
            if ( (InputBuffer[4] & 0x20000000) != 0 )
              *((_DWORD *)v18 + 40) |= 0x100000u;
            v24 = (struct _DEVICE_OBJECT *)*((_QWORD *)v18 + 17);
            *((_QWORD *)v18 + 18) = InputBuffer[3];
            *((_DWORD *)v18 + 64) = 0;
            if ( (int)GreDeviceIoControlImpl(v24, 0x232033u, 0LL, 0, v70, 0x18u, &v61, 1u, 1) >= 0 )
            {
              if ( v70[0] != 2 )
              {
                v25 = ((__int64 (*)(void))WdLogNewEntry5_WdAssertion)();
                WdLogEvent5_WdAssertion(v25);
              }
              v26 = v71;
              if ( !v71 )
                goto LABEL_57;
              *((_DWORD *)v18 + 40) |= 0x800000u;
              *((_QWORD *)v18 + 30) = v26;
              *((_DWORD *)v18 + 64) = v70[1];
              *((_QWORD *)v18 + 31) = v72;
            }
          }
          else
          {
            *((_QWORD *)v18 + 31) = 0xFFFFFFFFLL;
            *((_DWORD *)v18 + 64) = gcNextGlobalDeviceNumber;
            *((_QWORD *)v18 + 30) = 0LL;
          }
          v60 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
          v27 = v60;
          if ( v60 < 0 )
          {
            if ( (*((_DWORD *)v18 + 40) & 0x20000000) != 0 )
            {
              v32 = (struct _DEVICE_OBJECT *)*((_QWORD *)v18 + 18);
              if ( v32 )
              {
                v60 = IoOpenDeviceRegistryKey(v32, 2u, 0x2000000u, &DeviceRegKey);
                v27 = v60;
                if ( v60 >= 0 )
                {
                  DrvGetDeviceConfigurationInformation(v18, (PCWSTR)DeviceRegKey, 1);
                  ZwClose(DeviceRegKey);
                }
              }
            }
          }
          else
          {
            v28 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
            ExFreePoolWithTag(P, 0);
            v60 = IoOpenDeviceRegistryKey(v28, 2u, 0x2000000u, &DeviceRegKey);
            v27 = v60;
            if ( v60 >= 0 )
            {
              v67 = 0LL;
              v29 = 0LL;
              if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v67, 8u, &v61, 1u, 1) >= 0 )
              {
                if ( v67 )
                {
                  v29 = 0LL;
                  v19 = 1;
                  if ( (*(_DWORD *)v67 & 0x20000000) != 0 )
                  {
                    do
                      v29 = (unsigned int)(v29 + 1);
                    while ( (*((_DWORD *)v67 + 5 * v29) & 0x20000000) != 0 );
                  }
                }
              }
              DrvGetDeviceConfigurationInformation(v18, (PCWSTR)DeviceRegKey, 1);
              if ( v19 )
              {
                if ( (_DWORD)v29 )
                {
                  *((_DWORD *)v18 + 54) = v29;
                  v30 = PALLOCMEM2((unsigned int)(32 * v29), 0x76646747u, 1);
                  *((_QWORD *)v18 + 28) = v30;
                  if ( !v30 )
                    *((_DWORD *)v18 + 54) = 0;
                  v31 = 0LL;
                  do
                  {
                    FillMonitorDataFromMonitorDevice(
                      (struct tagPER_MONITOR_DATA *)(v31 + *((_QWORD *)v18 + 28)),
                      (struct tagVIDEO_MONITOR_DEVICE *)((char *)v67 + v2),
                      1);
                    v2 += 20LL;
                    v31 += 32LL;
                    --v29;
                  }
                  while ( v29 );
                  v2 = 0LL;
                }
                ExFreePoolWithTag(v67, 0);
              }
              ZwClose(DeviceRegKey);
            }
            ObfDereferenceObject(v28);
          }
          swprintf_s((wchar_t *)v18, 0x20uLL, (const wchar_t *)&QueryTable);
          ++gcNextGlobalDeviceNumber;
          if ( v27 < 0 )
          {
            RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                            (unsigned __int16 *)v18,
                                            0,
                                            0LL,
                                            0LL,
                                            0,
                                            &v60,
                                            gProtocolType);
            v27 = v60;
            DeviceRegKey = RegistryHandleFromDeviceMap;
            if ( v60 < 0 )
              goto LABEL_95;
            DrvGetDeviceConfigurationInformation(v18, (PCWSTR)RegistryHandleFromDeviceMap, 0);
            ZwClose(DeviceRegKey);
          }
          if ( !*((_QWORD *)v18 + 26) )
          {
            v34 = (unsigned __int16 *)PALLOCMEM2(0x20uLL, 0x73726447u, 0);
            *((_QWORD *)v18 + 26) = v34;
            if ( v34 )
            {
              v35 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v18, 0, 0LL, v34, 0x10u, &v60, gProtocolType);
              DeviceRegKey = v35;
              if ( v35 )
                ZwClose(v35);
              v27 = v60;
            }
            else
            {
              v27 = -1073741670;
            }
          }
LABEL_95:
          v36 = (wchar_t *)(v18 + 64);
          if ( (*((_DWORD *)v18 + 40) & 8) != 0 )
          {
            ++gcNextGlobalVirtualOutputNumber;
            swprintf_s(v36, 0x20uLL, L"\\\\.\\DISPLAYV%d");
          }
          else
          {
            ++gcNextGlobalPhysicalOutputNumber;
            swprintf_s(v36, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v18);
          v38 = *((_DWORD *)v18 + 40);
          if ( PruneFlag )
            v39 = v38 & 0xFFF7FFFF;
          else
            v39 = v38 | 0x80000;
          *((_DWORD *)v18 + 40) = v39;
          if ( (unsigned int)bSetDeviceSessionUsage(v18, 1LL) )
          {
            if ( (_DWORD)v4 )
              goto LABEL_115;
          }
          else if ( (_DWORD)v4 )
          {
            DrvCleanupOneGraphicsDevice(v18);
            goto LABEL_49;
          }
          *((_QWORD *)v18 + 35) = 0LL;
          v40 = (__int64 *)(v18 + 296);
          if ( dword_1C01A1750 )
            v41 = qword_1C01A1754;
          else
            v41 = 0LL;
          *v40 = v41;
          *((_QWORD *)v18 + 38) = 0LL;
          v58[0] = 0;
          if ( (int)((__int64 (__fastcall *)(char *, __int64 *, char *, char *, _BYTE *))qword_1C01A1B90)(
                      v18 + 280,
                      v40,
                      v18 + 304,
                      v18 + 288,
                      v58) >= 0 )
          {
            v42 = *((_DWORD *)v18 + 41);
            if ( v58[0] )
              v43 = v42 | 4;
            else
              v43 = v42 & 0xFFFFFFFB;
            *((_DWORD *)v18 + 41) = v43;
            DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v18);
          }
          if ( v27 < 0 )
          {
            DrvCleanupOneGraphicsDevice(v18);
            --gcNextGlobalPhysicalOutputNumber;
            v6 = v57;
            v64 = 0;
            goto LABEL_51;
          }
LABEL_115:
          if ( gpGraphicsDeviceList )
            *((_QWORD *)gpGraphicsDeviceListLast + 16) = v18;
          else
            gpGraphicsDeviceList = (wchar_t *)v18;
          v44 = (*((_DWORD *)v18 + 40) & 0x800000) == 0;
          gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v18;
          if ( !v44 )
            DrvAddAdapterLuid(*(struct _LUID *)(v18 + 248));
          v6 = 1;
          v57 = 1;
          goto LABEL_51;
        }
      }
      else
      {
        v11 = WdLogNewEntry5_WdTrace();
        WdLogEvent5_WdTrace(v11);
      }
      return 0LL;
    }
    break;
  }
  if ( !(_DWORD)v4 )
    goto LABEL_121;
LABEL_6:
  DrvSetDisconnectedGraphicsDevice(v4);
  v7 = WdLogNewEntry5_WdTrace();
  WdLogEvent5_WdTrace(v7);
  if ( v6 )
    DrvSortGraphicsDeviceList();
  if ( (_DWORD)v4 )
  {
    gcLocalNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v49 = gpGraphicsDeviceList;
    v50 = 0LL;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v51 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v49 )
    {
      if ( (*((_DWORD *)v49 + 40) & 0x4000000) != 0 )
      {
        v52 = *((unsigned int *)v49 + 64);
        v50 = (unsigned int)(v50 + 1);
        if ( (unsigned int)v52 > 0x10 || ((1 << v52) & (unsigned int)v51) != 0 )
          goto LABEL_137;
        v51 = (1 << v52) | (unsigned int)v51;
      }
      v49 = (wchar_t *)*((_QWORD *)v49 + 16);
    }
    v52 = (unsigned int)v50;
    if ( (_DWORD)v51 == (1 << v50) - 1 )
      goto LABEL_10;
LABEL_137:
    v53 = WdLogNewEntry5_WdAssertion(v52, v49, v51, v50);
    WdLogEvent5_WdAssertion(v53);
  }
LABEL_10:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v54 = WdLogNewEntry5_WdEvent();
      WdLogEvent5_WdEvent(v54);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      {
        for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
        {
          if ( (*((_DWORD *)i + 40) & 8) != 0 )
            *((_DWORD *)i + 65) = 0;
        }
      }
    }
  }
  v8 = WdLogNewEntry5_WdTrace();
  v9 = v64;
  *(_QWORD *)(v8 + 24) = v64;
  WdLogEvent5_WdTrace(v8);
  return v9;
}
