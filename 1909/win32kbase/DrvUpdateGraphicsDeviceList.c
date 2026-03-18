/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C003C300
 * Callers:
 *     DrvSetGraphicsDevices @ 0x1C0005E20 (DrvSetGraphicsDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C003C2AC (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C0063C08 (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01047F0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0010424 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0012318 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C003CF80 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C003D540 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0098014 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     bSetDeviceSessionUsage @ 0x1C00A0A10 (bSetDeviceSessionUsage.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00A1094 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00A14A0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00A4CE8 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00A5DFC (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHKK@Z @ 0x1C00B3B28 (-DrvAddMirrorDriversToRemoteList@@YAHKK@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00B3E50 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B77CC (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUnattachMirrorDriversInSession @ 0x1C00B79E0 (DrvUnattachMirrorDriversInSession.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00B855C (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  char *v4; // rbx
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  char v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v18; // eax
  struct tagGRAPHICS_DEVICE *v19; // rsi
  wchar_t *v20; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdi
  char *v25; // rax
  int v26; // r14d
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // esi
  struct _DEVICE_OBJECT *v35; // r15
  wchar_t *v36; // rcx
  int PruneFlag; // eax
  int v38; // ecx
  unsigned int v39; // ecx
  bool v40; // zf
  wchar_t *v41; // rdx
  unsigned int v42; // r9d
  __int64 v43; // r8
  __int64 v44; // rax
  wchar_t *v45; // rcx
  unsigned int v46; // r8d
  int v47; // edx
  unsigned int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // r8
  PVOID v52; // rdx
  HANDLE RegistryHandleFromDeviceMap; // rax
  char *v54; // rax
  HANDLE v55; // rax
  __int64 *v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  unsigned int v59; // eax
  int updated; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  struct _DEVICE_OBJECT *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v69; // [rsp+50h] [rbp-B0h]
  char v70[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v71; // [rsp+54h] [rbp-ACh]
  NTSTATUS v72; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v73; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID v74; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v75; // [rsp+68h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-88h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v79; // [rsp+88h] [rbp-78h]
  _BYTE InputBuffer[40]; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v83[4]; // [rsp+D0h] [rbp-30h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v85; // [rsp+128h] [rbp+28h]
  int v86; // [rsp+130h] [rbp+30h]
  _BYTE v87[40]; // [rsp+138h] [rbp+38h] BYREF

  v2 = a1;
  v3 = a2;
  v71 = a1;
  v73 = 0;
  v4 = 0LL;
  DeviceObject = 0LL;
  DeviceRegKey = 0LL;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v5 = 1;
  v9 = WdLogNewEntry5_WdEvent(v7, v6, v8);
  *(_QWORD *)(v9 + 24) = v2;
  *(_QWORD *)(v9 + 32) = v3;
  WdLogEvent5_WdEvent(v9);
  v69 = 0;
  v10 = 0;
  if ( (_DWORD)v3 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    v11 = gcLocalNextGlobalVirtualOutputNumber;
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    v11 = gcRemoteNextGlobalVirtualOutputNumber;
  }
  gcNextGlobalVirtualOutputNumber = v11;
  if ( (unsigned int)((__int64 (*)(void))UserIsWddmConnectedSession)() )
  {
    v75 = 0;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.QueryRoutine = 0LL;
    QueryTable.EntryContext = &v73;
    QueryTable.Flags = 288;
    QueryTable.DefaultData = &v75;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v85 = 0LL;
    v86 = 0;
    memset(v87, 0, sizeof(v87));
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else
  {
    if ( gProtocolType != -1 )
      v73 = gRemoteContext - 1;
    if ( dword_1C0212BA0 )
    {
      updated = DrvUpdateRemoteAdapterInfo(0LL);
      if ( updated < 0 )
        return 0LL;
    }
  }
  v79 = gcNextGlobalDeviceNumber;
  while ( gProtocolType != -1 )
  {
    v12 = gcNextGlobalDeviceNumber;
    if ( gcNextGlobalDeviceNumber > v73 )
      break;
    if ( !(_DWORD)v2 )
    {
      v66 = WdLogNewEntry5_WdTrace(0xFFFFLL);
      WdLogEvent5_WdTrace(v66);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession(0xFFFFLL) )
    {
      v18 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\Video%d", v12);
    }
    else
    {
      LODWORD(Environment) = v12;
      v18 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C0212B98, Environment);
    }
    if ( v18 < 0 )
      return 0LL;
    v19 = gpRemoteGraphicsDeviceListLast;
    v20 = gpGraphicsDeviceList;
    if ( (_DWORD)v3 )
      v19 = gpLocalGraphicsDeviceListLast;
    while ( v20 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, v20, 0x40uLL) )
        goto LABEL_77;
      if ( v20 == (wchar_t *)v19 )
        break;
      v20 = (wchar_t *)*((_QWORD *)v20 + 16);
    }
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    v23 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      if ( (_DWORD)v3 || gRemoteSessionUseWddm || gRemoteContext != 1 )
      {
        v44 = WdLogNewEntry5_WdTrace(v22);
        *(_QWORD *)(v44 + 24) = v23;
        WdLogEvent5_WdTrace(v44);
LABEL_77:
        ++gcNextGlobalDeviceNumber;
LABEL_70:
        LODWORD(v2) = v71;
        continue;
      }
      LODWORD(v24) = 0;
      FileObject = ::FileObject;
      if ( !::FileObject )
        goto LABEL_79;
      RelatedDeviceObject = IoGetRelatedDeviceObject(::FileObject);
      DeviceObject = RelatedDeviceObject;
      if ( !FileObject || !RelatedDeviceObject )
        goto LABEL_78;
      FileObject = 0LL;
    }
    else
    {
      LODWORD(v24) = 0;
    }
    if ( !v4 )
    {
      v25 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
      LODWORD(v2) = v71;
      v4 = v25;
      if ( !v25 )
        continue;
    }
    *((_DWORD *)v4 + 54) = 0;
    *((_QWORD *)v4 + 28) = 0LL;
    *((_QWORD *)v4 + 17) = DeviceObject;
    *((_WORD *)v4 + 110) = gProtocolType;
    *((_QWORD *)v4 + 34) = 0LL;
    if ( !(_DWORD)v3 )
      *((_DWORD *)v4 + 40) |= 0x4000000u;
    *((_QWORD *)v4 + 29) = FileObject;
    if ( (_DWORD)v3 || gRemoteSessionUseWddm )
      *((_DWORD *)v4 + 65) = 0;
    v26 = 0;
    if ( !(_DWORD)v3 && !gRemoteSessionUseWddm )
    {
      *((_QWORD *)v4 + 31) = 0xFFFFFFFFLL;
      *((_DWORD *)v4 + 64) = gcNextGlobalDeviceNumber;
      *((_QWORD *)v4 + 30) = 0LL;
      goto LABEL_46;
    }
    *(_QWORD *)&InputBuffer[8] = VideoPortCallout;
    memset(&InputBuffer[16], 0, 24);
    *(_QWORD *)InputBuffer = v4;
    v27 = GreDeviceIoControlImpl(
            *((PDEVICE_OBJECT *)v4 + 17),
            0x23201Fu,
            InputBuffer,
            0x28u,
            InputBuffer,
            0x28u,
            &v75,
            1u,
            1);
    v29 = v27;
    if ( v27 < 0 )
    {
      v62 = WdLogNewEntry5_WdTrace(v28);
      *(_QWORD *)(v62 + 24) = v29;
      WdLogEvent5_WdTrace(v62);
      DrvCleanupOneGraphicsDevice(v4);
      goto LABEL_148;
    }
    LODWORD(v24) = 0;
    if ( *(_DWORD *)&InputBuffer[16] )
      *((_DWORD *)v4 + 40) |= 0x40000000u;
    if ( (*(_DWORD *)&InputBuffer[32] & 0xC0000001) != 0 )
    {
      v63 = WdLogNewEntry5_WdTrace(v28);
      *(_QWORD *)(v63 + 24) = *(unsigned int *)&InputBuffer[32];
      *(_QWORD *)(v63 + 32) = -1073741637LL;
      WdLogEvent5_WdTrace(v63);
      goto LABEL_147;
    }
    if ( (*(_DWORD *)&InputBuffer[32] & 0x20000000) != 0 )
      *((_DWORD *)v4 + 40) |= 0x100000u;
    *((_QWORD *)v4 + 18) = *(_QWORD *)&InputBuffer[24];
    *((_DWORD *)v4 + 64) = 0;
    memset(v83, 0, sizeof(v83));
    if ( (int)GreDeviceIoControlImpl(*((PDEVICE_OBJECT *)v4 + 17), 0x232033u, 0LL, 0, v83, 0x20u, &v75, 1u, 1) >= 0 )
    {
      if ( LODWORD(v83[0]) != 2 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v31, v30, v32);
        WdLogEvent5_WdAssertion(v64);
      }
      if ( gRemoteTerminalLuid == v83[3] )
      {
        v33 = v83[1];
        if ( v83[1] )
        {
          *((_DWORD *)v4 + 40) |= 0x800000u;
          *((_QWORD *)v4 + 30) = v33;
          *((_DWORD *)v4 + 64) = HIDWORD(v83[0]);
          *((_QWORD *)v4 + 31) = v83[2];
          goto LABEL_46;
        }
      }
LABEL_147:
      DrvCleanupOneGraphicsDevice(v4);
LABEL_148:
      ++gcNextGlobalDeviceNumber;
LABEL_162:
      v10 = v69;
LABEL_69:
      v4 = 0LL;
      goto LABEL_70;
    }
    if ( gRemoteSessionUseWddm )
      goto LABEL_147;
LABEL_46:
    v72 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
    v34 = v72;
    if ( v72 < 0 )
    {
      if ( (*((_DWORD *)v4 + 40) & 0x20000000) != 0 )
      {
        v65 = (struct _DEVICE_OBJECT *)*((_QWORD *)v4 + 18);
        if ( v65 )
        {
          v72 = IoOpenDeviceRegistryKey(v65, 2u, 0x2000000u, &DeviceRegKey);
          v34 = v72;
          if ( v72 >= 0 )
          {
            DrvGetDeviceConfigurationInformation(v4, (PCWSTR)DeviceRegKey, 1);
            ZwClose(DeviceRegKey);
          }
        }
      }
    }
    else
    {
      v35 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
      ExFreePoolWithTag(P, 0);
      v72 = IoOpenDeviceRegistryKey(v35, 2u, 0x2000000u, &DeviceRegKey);
      v34 = v72;
      if ( v72 >= 0 )
      {
        v74 = 0LL;
        if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v74, 8u, &v75, 1u, 1) >= 0 )
        {
          if ( v74 )
          {
            LODWORD(v24) = 0;
            v26 = 1;
            if ( (*(_DWORD *)v74 & 0x20000000) != 0 )
            {
              do
                v24 = (unsigned int)(v24 + 1);
              while ( (*((_DWORD *)v74 + 5 * v24) & 0x20000000) != 0 );
            }
          }
        }
        DrvGetDeviceConfigurationInformation(v4, (PCWSTR)DeviceRegKey, 1);
        if ( v26 )
        {
          if ( (_DWORD)v24 )
          {
            *((_DWORD *)v4 + 54) = v24;
            *((_QWORD *)v4 + 28) = PALLOCMEM2((unsigned int)(20 * v24), 0x76646747u, 1);
            v50 = (unsigned int)v24;
            v51 = 0LL;
            do
            {
              *(_DWORD *)(v51 + *((_QWORD *)v4 + 28)) = 0;
              v52 = v74;
              if ( (*(_DWORD *)((_BYTE *)v74 + v51) & 1) != 0 )
              {
                *(_DWORD *)(v51 + *((_QWORD *)v4 + 28)) |= 1u;
                v52 = v74;
              }
              if ( (*(_DWORD *)((_BYTE *)v52 + v51) & 2) == 0 )
              {
                *(_DWORD *)(v51 + *((_QWORD *)v4 + 28)) |= 2u;
                v52 = v74;
              }
              if ( *(int *)((char *)v52 + v51) >= 0 )
              {
                *(_DWORD *)(v51 + *((_QWORD *)v4 + 28)) |= 0x80000000;
                v52 = v74;
              }
              if ( (*(_DWORD *)((_BYTE *)v52 + v51) & 0x40000000) == 0 )
              {
                *(_DWORD *)(v51 + *((_QWORD *)v4 + 28)) |= 0x40000000u;
                v52 = v74;
              }
              *(_DWORD *)(v51 + *((_QWORD *)v4 + 28) + 4) = *(_DWORD *)((char *)v52 + v51 + 4);
              *(_QWORD *)(v51 + *((_QWORD *)v4 + 28) + 8) = *(_QWORD *)((char *)v74 + v51 + 8);
              *(_BYTE *)(v51 + *((_QWORD *)v4 + 28) + 16) = *((_BYTE *)v74 + v51 + 16);
              v51 += 20LL;
              --v50;
            }
            while ( v50 );
          }
          ExFreePoolWithTag(v74, 0);
        }
        ZwClose(DeviceRegKey);
      }
      ObfDereferenceObject(v35);
    }
    swprintf_s((wchar_t *)v4, 0x20uLL, (const wchar_t *)&QueryTable);
    ++gcNextGlobalDeviceNumber;
    if ( v34 < 0 )
    {
      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, 0LL, 0, &v72);
      v34 = v72;
      DeviceRegKey = RegistryHandleFromDeviceMap;
      if ( v72 >= 0 )
      {
        DrvGetDeviceConfigurationInformation(v4, (PCWSTR)RegistryHandleFromDeviceMap, 0);
        ZwClose(DeviceRegKey);
        goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( !*((_QWORD *)v4 + 26) )
      {
        v54 = (char *)PALLOCMEM2(0x20uLL, 0x73726447u, 0);
        *((_QWORD *)v4 + 26) = v54;
        if ( v54 )
        {
          v55 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, v54, 0x10u, &v72);
          DeviceRegKey = v55;
          if ( v55 )
            ZwClose(v55);
          v34 = v72;
        }
        else
        {
          v34 = -1073741670;
        }
      }
    }
    v36 = (wchar_t *)(v4 + 64);
    if ( (*((_DWORD *)v4 + 40) & 8) != 0 )
    {
      ++gcNextGlobalVirtualOutputNumber;
      swprintf_s(v36, 0x20uLL, L"\\\\.\\DISPLAYV%d");
    }
    else
    {
      ++gcNextGlobalPhysicalOutputNumber;
      swprintf_s(v36, 0x20uLL, L"\\\\.\\DISPLAY%d");
    }
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v4);
    v38 = *((_DWORD *)v4 + 40);
    if ( PruneFlag )
      v39 = v38 & 0xFFF7FFFF;
    else
      v39 = v38 | 0x80000;
    *((_DWORD *)v4 + 40) = v39;
    if ( (unsigned int)bSetDeviceSessionUsage(v4, 1LL) )
    {
      if ( !(_DWORD)v3 && !gRemoteSessionUseWddm )
        goto LABEL_122;
    }
    else
    {
      if ( (_DWORD)v3 || gRemoteSessionUseWddm )
      {
        DrvCleanupOneGraphicsDevice(v4);
        goto LABEL_162;
      }
LABEL_122:
      *((_QWORD *)v4 + 35) = 0LL;
      v56 = (__int64 *)(v4 + 296);
      if ( dword_1C0212BA0 )
        v57 = qword_1C0212BA4;
      else
        v57 = 0LL;
      *v56 = v57;
      *((_QWORD *)v4 + 38) = 0LL;
      v70[0] = 0;
      if ( (int)((__int64 (__fastcall *)(char *, __int64 *, char *, char *, char *))qword_1C0212198)(
                  v4 + 280,
                  v56,
                  v4 + 304,
                  v4 + 288,
                  v70) >= 0 )
      {
        v58 = *((_DWORD *)v4 + 41);
        if ( v70[0] )
          v59 = v58 | 4;
        else
          v59 = v58 & 0xFFFFFFFB;
        *((_DWORD *)v4 + 41) = v59;
        DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v4);
      }
      if ( !gRemoteSessionUseWddm && v34 < 0 )
      {
        DrvCleanupOneGraphicsDevice(v4);
        --gcNextGlobalPhysicalOutputNumber;
        v5 = 0;
        goto LABEL_162;
      }
    }
    if ( gpGraphicsDeviceList )
      *((_QWORD *)gpGraphicsDeviceListLast + 16) = v4;
    else
      gpGraphicsDeviceList = (wchar_t *)v4;
    v40 = (*((_DWORD *)v4 + 40) & 0x800000) == 0;
    gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v4;
    if ( !v40 )
      DrvAddAdapterLuid(*(struct _LUID *)(v4 + 248));
    v10 = 1;
    v69 = 1;
    goto LABEL_69;
  }
  if ( !(_DWORD)v3 )
  {
LABEL_78:
    if ( !gRemoteSessionUseWddm )
    {
LABEL_79:
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
          if ( v46 == dword_1C0212B64 )
            *((_DWORD *)v45 + 40) = v48 | 4;
          ++v46;
        }
        v45 = (wchar_t *)*((_QWORD *)v45 + 16);
      }
    }
  }
  DrvSetDisconnectedGraphicsDevice(v3);
  v14 = WdLogNewEntry5_WdTrace(v13);
  WdLogEvent5_WdTrace(v14);
  if ( v10 )
    DrvSortGraphicsDeviceList();
  if ( (_DWORD)v3 )
  {
    gcLocalNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v41 = gpGraphicsDeviceList;
    v42 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v43 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v41 )
    {
      if ( (*((_DWORD *)v41 + 40) & 0x4000000) != 0 )
      {
        v49 = *((unsigned int *)v41 + 64);
        ++v42;
        if ( (unsigned int)v49 > 0x10 || ((1 << v49) & (unsigned int)v43) != 0 )
          goto LABEL_165;
        v43 = (1 << v49) | (unsigned int)v43;
      }
      v41 = (wchar_t *)*((_QWORD *)v41 + 16);
    }
    v49 = v42;
    if ( (_DWORD)v43 == (1 << v42) - 1 )
      goto LABEL_13;
LABEL_165:
    v67 = WdLogNewEntry5_WdAssertion(v49, v41, v43);
    WdLogEvent5_WdAssertion(v67);
  }
LABEL_13:
  v15 = 65533LL;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( gRemoteSessionUseWddm )
    {
      DrvAddMirrorDriversToRemoteList(v79, v73);
    }
    else
    {
      DrvAddMirrorDriversToRemoteList(0, v73);
      if ( !gbVideoInitialized )
        DrvUnattachMirrorDriversInSession();
    }
  }
  v16 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v16 + 24) = v5;
  WdLogEvent5_WdTrace(v16);
  return (unsigned int)v5;
}
