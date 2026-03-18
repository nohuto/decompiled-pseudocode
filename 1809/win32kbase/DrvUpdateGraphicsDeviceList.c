/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C00161E0
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0016194 (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C00997E8 (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1610 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2074 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015460 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001554C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     bSetDeviceSessionUsage @ 0x1C00413D0 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004149C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0061A2C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0061B10 (DrvCleanupOneGraphicsDevice.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008E21C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C008F3C8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C0091A28 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4A18 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A6108 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00A69AC (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // r13d
  __int64 v7; // rax
  char v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 i; // rcx
  __int64 v13; // rax
  int v15; // r9d
  int v16; // eax
  struct tagGRAPHICS_DEVICE *v17; // rsi
  wchar_t *v18; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  struct _DEVICE_OBJECT *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // esi
  struct _DEVICE_OBJECT *v33; // r15
  __int64 v34; // rdi
  wchar_t *v35; // rcx
  int PruneFlag; // eax
  int v37; // ecx
  unsigned int v38; // ecx
  bool v39; // zf
  wchar_t *v40; // rdx
  unsigned int v41; // r9d
  __int64 v42; // r8
  __int64 v43; // rax
  wchar_t *v44; // rcx
  unsigned int v45; // r8d
  int v46; // edx
  unsigned int v47; // edx
  __int64 v48; // r9
  __int64 v49; // r8
  PVOID v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  void *RegistryHandleFromDeviceMap; // rax
  __int64 v55; // rax
  void *v56; // rax
  __int64 *v57; // rdx
  __int64 v58; // rax
  int v59; // eax
  unsigned int v60; // eax
  int updated; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  struct _DEVICE_OBJECT *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  int v69; // [rsp+30h] [rbp-D0h]
  char v70; // [rsp+50h] [rbp-B0h]
  _BYTE v71[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v72; // [rsp+54h] [rbp-ACh]
  NTSTATUS v73; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v74; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v75; // [rsp+68h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-80h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  _QWORD InputBuffer[5]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v82[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-38h]
  __int64 v84; // [rsp+D0h] [rbp-30h]
  __int64 v85; // [rsp+D8h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v88; // [rsp+128h] [rbp+28h]
  int v89; // [rsp+130h] [rbp+30h]
  _BYTE v90[40]; // [rsp+138h] [rbp+38h] BYREF

  v3 = (int)a1;
  v4 = (int)a2;
  v5 = 0LL;
  v72 = a1;
  v77 = 0;
  DeviceObject = 0LL;
  v6 = 1;
  DeviceRegKey = 0LL;
  v7 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v7 + 24) = v3;
  *(_QWORD *)(v7 + 32) = v4;
  WdLogEvent5_WdEvent(v7);
  v70 = 0;
  v8 = 0;
  if ( (_DWORD)v4 )
  {
    gcNextGlobalDeviceNumber = WPP_MAIN_CB.DeviceLock.Header.SignalState;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    v9 = gcLocalNextGlobalVirtualOutputNumber;
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    v9 = gcRemoteNextGlobalVirtualOutputNumber;
  }
  gcNextGlobalVirtualOutputNumber = v9;
  if ( (unsigned int)((__int64 (*)(void))UserIsWddmConnectedSession)() )
  {
    v75 = 0;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v77;
    QueryTable.DefaultData = &v75;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v88 = 0LL;
    v89 = 0;
    memset(v90, 0, sizeof(v90));
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( gProtocolType != -1 )
    v77 = gRemoteContext - 1;
  if ( dword_1C01CE2F0 )
  {
    updated = DrvUpdateRemoteAdapterInfo(0LL);
    if ( updated < 0 )
      return 0LL;
  }
LABEL_5:
  while ( gProtocolType != -1 && gcNextGlobalDeviceNumber <= v77 )
  {
    if ( !(_DWORD)v3 )
    {
      v66 = WdLogNewEntry5_WdTrace(0xFFFFLL);
      WdLogEvent5_WdTrace(v66);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession(0xFFFFLL) )
    {
      v16 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\Video%d");
    }
    else
    {
      LODWORD(Environment) = v15;
      v16 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C01CE2E8, Environment);
    }
    if ( v16 < 0 )
      return 0LL;
    v17 = gpRemoteGraphicsDeviceListLast;
    v18 = gpGraphicsDeviceList;
    if ( (_DWORD)v4 )
      v17 = gpLocalGraphicsDeviceListLast;
    while ( v18 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, v18, 0x40uLL) )
        goto LABEL_75;
      if ( v18 == (wchar_t *)v17 )
        break;
      v18 = (wchar_t *)*((_QWORD *)v18 + 16);
    }
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    v21 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      if ( (_DWORD)v4 || gRemoteSessionUseWddm || gRemoteContext != 1 )
      {
        v43 = WdLogNewEntry5_WdTrace(v20);
        *(_QWORD *)(v43 + 24) = v21;
        WdLogEvent5_WdTrace(v43);
LABEL_75:
        ++gcNextGlobalDeviceNumber;
        goto LABEL_68;
      }
      FileObject = ::FileObject;
      if ( !::FileObject )
        goto LABEL_77;
      RelatedDeviceObject = IoGetRelatedDeviceObject(::FileObject);
      DeviceObject = RelatedDeviceObject;
      if ( !FileObject || !RelatedDeviceObject )
        goto LABEL_76;
      FileObject = 0LL;
    }
    if ( !v5 )
    {
      v22 = PALLOCMEM2(0x138uLL);
      LODWORD(v3) = v72;
      v5 = v22;
      if ( !v22 )
        continue;
    }
    *(_DWORD *)(v5 + 216) = 0;
    *(_QWORD *)(v5 + 224) = 0LL;
    *(_QWORD *)(v5 + 136) = DeviceObject;
    *(_WORD *)(v5 + 220) = gProtocolType;
    *(_QWORD *)(v5 + 272) = 0LL;
    if ( !(_DWORD)v4 )
      *(_DWORD *)(v5 + 160) |= 0x4000000u;
    *(_QWORD *)(v5 + 232) = FileObject;
    if ( (_DWORD)v4 || gRemoteSessionUseWddm )
      *(_DWORD *)(v5 + 260) = 0;
    v23 = 0;
    if ( (_DWORD)v4 || gRemoteSessionUseWddm )
    {
      memset(InputBuffer, 0, sizeof(InputBuffer));
      InputBuffer[1] = VideoPortCallout;
      InputBuffer[0] = v5;
      v24 = GreDeviceIoControlImpl(
              *(PDEVICE_OBJECT *)(v5 + 136),
              0x23201Fu,
              InputBuffer,
              0x28u,
              InputBuffer,
              0x28u,
              &v75,
              1u,
              1);
      v26 = v24;
      if ( v24 < 0 )
      {
        v63 = WdLogNewEntry5_WdTrace(v25);
        *(_QWORD *)(v63 + 24) = v26;
LABEL_148:
        WdLogEvent5_WdTrace(v63);
LABEL_149:
        DrvCleanupOneGraphicsDevice(v5);
        v8 = v70;
        v5 = 0LL;
        goto LABEL_75;
      }
      if ( LODWORD(InputBuffer[2]) )
        *(_DWORD *)(v5 + 160) |= 0x40000000u;
      if ( (InputBuffer[4] & 0xC0000001) != 0 )
      {
        v63 = WdLogNewEntry5_WdTrace(v25);
        *(_QWORD *)(v63 + 24) = LODWORD(InputBuffer[4]);
        *(_QWORD *)(v63 + 32) = -1073741637LL;
        goto LABEL_148;
      }
      if ( (InputBuffer[4] & 0x20000000) != 0 )
        *(_DWORD *)(v5 + 160) |= 0x100000u;
      v27 = *(struct _DEVICE_OBJECT **)(v5 + 136);
      *(_QWORD *)(v5 + 144) = InputBuffer[3];
      *(_DWORD *)(v5 + 256) = 0;
      if ( (int)GreDeviceIoControlImpl(v27, 0x232033u, 0LL, 0, v82, 0x20u, &v75, 1u, 1) >= 0 )
      {
        if ( v82[0] != 2 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v29, v28, v30);
          WdLogEvent5_WdAssertion(v64);
        }
        if ( gRemoteTerminalLuid != v85 )
          goto LABEL_149;
        v31 = v83;
        if ( !v83 )
          goto LABEL_149;
        *(_DWORD *)(v5 + 160) |= 0x800000u;
        *(_QWORD *)(v5 + 240) = v31;
        *(_DWORD *)(v5 + 256) = v82[1];
        *(_QWORD *)(v5 + 248) = v84;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 248) = 0xFFFFFFFFLL;
      *(_DWORD *)(v5 + 256) = gcNextGlobalDeviceNumber;
      *(_QWORD *)(v5 + 240) = 0LL;
    }
    v73 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
    v32 = v73;
    if ( v73 < 0 )
    {
      if ( (*(_DWORD *)(v5 + 160) & 0x20000000) != 0 )
      {
        v65 = *(struct _DEVICE_OBJECT **)(v5 + 144);
        if ( v65 )
        {
          v73 = IoOpenDeviceRegistryKey(v65, 2u, 0x2000000u, &DeviceRegKey);
          v32 = v73;
          if ( v73 >= 0 )
          {
            DrvGetDeviceConfigurationInformation((PVOID)v5, (PCWSTR)DeviceRegKey, 1);
            ZwClose(DeviceRegKey);
          }
        }
      }
    }
    else
    {
      v33 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
      ExFreePoolWithTag(P, 0);
      v73 = IoOpenDeviceRegistryKey(v33, 2u, 0x2000000u, &DeviceRegKey);
      v32 = v73;
      if ( v73 >= 0 )
      {
        v74 = 0LL;
        LODWORD(v34) = 0;
        if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v74, 8u, &v75, 1u, 1) >= 0 )
        {
          if ( v74 )
          {
            v23 = 1;
            if ( (*(_DWORD *)v74 & 0x20000000) != 0 )
            {
              do
                v34 = (unsigned int)(v34 + 1);
              while ( (*((_DWORD *)v74 + 5 * v34) & 0x20000000) != 0 );
            }
          }
        }
        DrvGetDeviceConfigurationInformation((PVOID)v5, (PCWSTR)DeviceRegKey, 1);
        if ( v23 )
        {
          if ( (_DWORD)v34 )
          {
            *(_DWORD *)(v5 + 216) = v34;
            *(_QWORD *)(v5 + 224) = PALLOCMEM2((unsigned int)(20 * v34));
            v48 = (unsigned int)v34;
            v49 = 0LL;
            do
            {
              *(_DWORD *)(v49 + *(_QWORD *)(v5 + 224)) = 0;
              v50 = v74;
              if ( (*(_DWORD *)((_BYTE *)v74 + v49) & 1) != 0 )
              {
                *(_DWORD *)(v49 + *(_QWORD *)(v5 + 224)) |= 1u;
                v50 = v74;
              }
              if ( (*(_DWORD *)((_BYTE *)v50 + v49) & 2) == 0 )
              {
                *(_DWORD *)(v49 + *(_QWORD *)(v5 + 224)) |= 2u;
                v50 = v74;
              }
              if ( *(int *)((char *)v50 + v49) >= 0 )
              {
                *(_DWORD *)(v49 + *(_QWORD *)(v5 + 224)) |= 0x80000000;
                v50 = v74;
              }
              if ( (*(_DWORD *)((_BYTE *)v50 + v49) & 0x40000000) == 0 )
              {
                *(_DWORD *)(v49 + *(_QWORD *)(v5 + 224)) |= 0x40000000u;
                v50 = v74;
              }
              *(_DWORD *)(v49 + *(_QWORD *)(v5 + 224) + 4) = *(_DWORD *)((char *)v50 + v49 + 4);
              *(_QWORD *)(v49 + *(_QWORD *)(v5 + 224) + 8) = *(_QWORD *)((char *)v74 + v49 + 8);
              *(_BYTE *)(v49 + *(_QWORD *)(v5 + 224) + 16) = *((_BYTE *)v74 + v49 + 16);
              v49 += 20LL;
              --v48;
            }
            while ( v48 );
          }
          ExFreePoolWithTag(v74, 0);
        }
        ZwClose(DeviceRegKey);
      }
      ObfDereferenceObject(v33);
    }
    swprintf_s((wchar_t *)v5, 0x20uLL, (const wchar_t *)&QueryTable);
    ++gcNextGlobalDeviceNumber;
    if ( v32 < 0 )
    {
      LOWORD(v69) = gProtocolType;
      RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(v5, 0LL, 0LL, 0LL, 0, &v73, v69);
      v32 = v73;
      DeviceRegKey = RegistryHandleFromDeviceMap;
      if ( v73 < 0 )
        goto LABEL_56;
      DrvGetDeviceConfigurationInformation((PVOID)v5, (PCWSTR)RegistryHandleFromDeviceMap, 0);
      ZwClose(DeviceRegKey);
    }
    if ( !*(_QWORD *)(v5 + 208) )
    {
      v55 = PALLOCMEM2(0x20uLL);
      *(_QWORD *)(v5 + 208) = v55;
      if ( v55 )
      {
        LOWORD(v69) = gProtocolType;
        v56 = (void *)DrvGetRegistryHandleFromDeviceMap(v5, 0LL, 0LL, v55, 16, &v73, v69);
        DeviceRegKey = v56;
        if ( v56 )
          ZwClose(v56);
        v32 = v73;
      }
      else
      {
        v32 = -1073741670;
      }
    }
LABEL_56:
    v35 = (wchar_t *)(v5 + 64);
    if ( (*(_DWORD *)(v5 + 160) & 8) != 0 )
    {
      ++gcNextGlobalVirtualOutputNumber;
      swprintf_s(v35, 0x20uLL, L"\\\\.\\DISPLAYV%d");
    }
    else
    {
      ++gcNextGlobalPhysicalOutputNumber;
      swprintf_s(v35, 0x20uLL, L"\\\\.\\DISPLAY%d");
    }
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v5);
    v37 = *(_DWORD *)(v5 + 160);
    if ( PruneFlag )
      v38 = v37 & 0xFFF7FFFF;
    else
      v38 = v37 | 0x80000;
    *(_DWORD *)(v5 + 160) = v38;
    if ( (unsigned int)bSetDeviceSessionUsage(v5, 1LL) )
    {
      if ( (_DWORD)v4 )
        goto LABEL_62;
LABEL_126:
      *(_QWORD *)(v5 + 280) = 0LL;
      v57 = (__int64 *)(v5 + 296);
      if ( dword_1C01CE2F0 )
        v58 = qword_1C01CE2F4;
      else
        v58 = 0LL;
      *v57 = v58;
      *(_QWORD *)(v5 + 304) = 0LL;
      v71[0] = 0;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, _BYTE *))qword_1C01CDA30)(
                  v5 + 280,
                  v57,
                  v5 + 304,
                  v5 + 288,
                  v71) >= 0 )
      {
        v59 = *(_DWORD *)(v5 + 164);
        if ( v71[0] )
          v60 = v59 | 4;
        else
          v60 = v59 & 0xFFFFFFFB;
        *(_DWORD *)(v5 + 164) = v60;
        DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v5);
      }
      if ( gRemoteSessionUseWddm || v32 >= 0 )
      {
LABEL_62:
        if ( gpGraphicsDeviceList )
          *((_QWORD *)gpGraphicsDeviceListLast + 16) = v5;
        else
          gpGraphicsDeviceList = (wchar_t *)v5;
        v39 = (*(_DWORD *)(v5 + 160) & 0x800000) == 0;
        gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v5;
        if ( !v39 )
          DrvAddAdapterLuid(*(struct _LUID *)(v5 + 248));
        v8 = 1;
        v70 = 1;
      }
      else
      {
        DrvCleanupOneGraphicsDevice(v5);
        --gcNextGlobalPhysicalOutputNumber;
        v6 = 0;
        v8 = v70;
      }
      v5 = 0LL;
LABEL_68:
      LODWORD(v3) = v72;
      continue;
    }
    if ( !(_DWORD)v4 && !gRemoteSessionUseWddm )
      goto LABEL_126;
    DrvCleanupOneGraphicsDevice(v5);
    v8 = v70;
    v5 = 0LL;
    LODWORD(v3) = v72;
  }
  if ( !(_DWORD)v4 )
  {
LABEL_76:
    if ( !gRemoteSessionUseWddm )
    {
LABEL_77:
      v44 = gpGraphicsDeviceList;
      v45 = 0;
      while ( v44 )
      {
        v46 = *((_DWORD *)v44 + 40);
        if ( (v46 & 0x4000000) != 0 )
        {
          v47 = v46 & 0xFFFFFFFB;
          *((_DWORD *)v44 + 40) = v47;
          *((_DWORD *)v44 + 65) = v45 < gRemoteContext;
          if ( v45 == dword_1C01CE2B4 )
            *((_DWORD *)v44 + 40) = v47 | 4;
          ++v45;
        }
        v44 = (wchar_t *)*((_QWORD *)v44 + 16);
      }
    }
  }
  DrvSetDisconnectedGraphicsDevice(v4);
  v11 = WdLogNewEntry5_WdTrace(v10);
  WdLogEvent5_WdTrace(v11);
  if ( v8 )
    DrvSortGraphicsDeviceList();
  if ( (_DWORD)v4 )
  {
    WPP_MAIN_CB.DeviceLock.Header.SignalState = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v40 = gpGraphicsDeviceList;
    v41 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v42 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v40 )
    {
      if ( (*((_DWORD *)v40 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v40 + 64);
        ++v41;
        if ( (unsigned int)i > 0x10 || ((1 << i) & (unsigned int)v42) != 0 )
          goto LABEL_163;
        v42 = (1 << i) | (unsigned int)v42;
      }
      v40 = (wchar_t *)*((_QWORD *)v40 + 16);
    }
    i = v41;
    if ( (_DWORD)v42 == (1 << v41) - 1 )
      goto LABEL_12;
LABEL_163:
    v67 = WdLogNewEntry5_WdAssertion(i, v40, v42);
    WdLogEvent5_WdAssertion(v67);
  }
LABEL_12:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v53 = WdLogNewEntry5_WdEvent(i, v51, v52);
      WdLogEvent5_WdEvent(v53);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      {
        for ( i = (unsigned __int64)gpGraphicsDeviceList; i; i = *(_QWORD *)(i + 128) )
        {
          if ( (*(_DWORD *)(i + 160) & 8) != 0 )
            *(_DWORD *)(i + 260) = 0;
        }
      }
    }
  }
  v13 = WdLogNewEntry5_WdTrace(i);
  *(_QWORD *)(v13 + 24) = v6;
  WdLogEvent5_WdTrace(v13);
  return (unsigned int)v6;
}
