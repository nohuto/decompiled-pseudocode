/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C004F0F0
 * Callers:
 *     DrvSetGraphicsDevices @ 0x1C0006E60 (DrvSetGraphicsDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C004F09C (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C0076AE8 (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0107160 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0108170 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C001497C (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00493E4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x1C004AA40 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004C5E4 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C004D920 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C004FD70 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00A2120 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00A26E0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00A5D38 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00A6CCC (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHKK@Z @ 0x1C00B6608 (-DrvAddMirrorDriversToRemoteList@@YAHKK@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00B6930 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BA88C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUnattachMirrorDriversInSession @ 0x1C00BAA44 (DrvUnattachMirrorDriversInSession.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00BB5BC (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v21; // eax
  struct tagGRAPHICS_DEVICE *v22; // rsi
  wchar_t *v23; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdi
  void *v28; // rax
  int v29; // r14d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // esi
  struct _DEVICE_OBJECT *v38; // r15
  wchar_t *v39; // rcx
  int PruneFlag; // eax
  int v41; // ecx
  unsigned int v42; // ecx
  bool v43; // zf
  wchar_t *v44; // rdx
  unsigned int v45; // r9d
  __int64 v46; // r8
  __int64 v47; // rax
  wchar_t *v48; // rcx
  unsigned int v49; // r8d
  int v50; // edx
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // r8
  PVOID v55; // rdx
  HANDLE RegistryHandleFromDeviceMap; // rax
  unsigned __int16 *v57; // rax
  HANDLE v58; // rax
  __int64 *v59; // rdx
  __int64 v60; // rax
  int v61; // eax
  unsigned int v62; // eax
  int updated; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  struct _DEVICE_OBJECT *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v72; // [rsp+50h] [rbp-B0h]
  _BYTE v73[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v74; // [rsp+54h] [rbp-ACh]
  NTSTATUS v75; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v76; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID v77; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v78; // [rsp+68h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-88h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v82; // [rsp+88h] [rbp-78h]
  _BYTE InputBuffer[40]; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v86[4]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v88; // [rsp+128h] [rbp+28h]
  int v89; // [rsp+130h] [rbp+30h]
  _BYTE v90[40]; // [rsp+138h] [rbp+38h] BYREF

  v2 = a1;
  v3 = a2;
  v74 = a1;
  v76 = 0;
  v4 = 0LL;
  DeviceObject = 0LL;
  DeviceRegKey = 0LL;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v5 = 1;
  v9 = WdLogNewEntry5_WdEvent(v7, v6, v8);
  *(_QWORD *)(v9 + 24) = v2;
  *(_QWORD *)(v9 + 32) = v3;
  WdLogEvent5_WdEvent(v9);
  v72 = 0;
  v12 = 0;
  if ( (_DWORD)v3 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    v13 = gcLocalNextGlobalVirtualOutputNumber;
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    v13 = gcRemoteNextGlobalVirtualOutputNumber;
  }
  gcNextGlobalVirtualOutputNumber = v13;
  if ( (unsigned int)UserIsWddmConnectedSession(v11, v10) )
  {
    v78 = 0;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.QueryRoutine = 0LL;
    QueryTable.EntryContext = &v76;
    QueryTable.Flags = 288;
    QueryTable.DefaultData = &v78;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v88 = 0LL;
    v89 = 0;
    memset(v90, 0, sizeof(v90));
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else
  {
    if ( gProtocolType != -1 )
      v76 = gRemoteContext - 1;
    if ( dword_1C0215BA0 )
    {
      updated = DrvUpdateRemoteAdapterInfo(0LL);
      if ( updated < 0 )
        return 0LL;
    }
  }
  v82 = gcNextGlobalDeviceNumber;
  while ( gProtocolType != -1 )
  {
    v15 = gcNextGlobalDeviceNumber;
    if ( gcNextGlobalDeviceNumber > v76 )
      break;
    if ( !(_DWORD)v2 )
    {
      v69 = WdLogNewEntry5_WdTrace(0xFFFFLL);
      WdLogEvent5_WdTrace(v69);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession(0xFFFFLL, v14) )
    {
      v21 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\Video%d", v15);
    }
    else
    {
      LODWORD(Environment) = v15;
      v21 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C0215B98, Environment);
    }
    if ( v21 < 0 )
      return 0LL;
    v22 = gpRemoteGraphicsDeviceListLast;
    v23 = gpGraphicsDeviceList;
    if ( (_DWORD)v3 )
      v22 = gpLocalGraphicsDeviceListLast;
    while ( v23 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, v23, 0x40uLL) )
        goto LABEL_77;
      if ( v23 == (wchar_t *)v22 )
        break;
      v23 = (wchar_t *)*((_QWORD *)v23 + 16);
    }
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    v26 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      if ( (_DWORD)v3 || gRemoteSessionUseWddm || gRemoteContext != 1 )
      {
        v47 = WdLogNewEntry5_WdTrace(v25);
        *(_QWORD *)(v47 + 24) = v26;
        WdLogEvent5_WdTrace(v47);
LABEL_77:
        ++gcNextGlobalDeviceNumber;
LABEL_70:
        LODWORD(v2) = v74;
        continue;
      }
      LODWORD(v27) = 0;
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
      LODWORD(v27) = 0;
    }
    if ( !v4 )
    {
      v28 = PALLOCMEM2(0x138uLL, 0x76646747u, 1);
      LODWORD(v2) = v74;
      v4 = (__int64)v28;
      if ( !v28 )
        continue;
    }
    *(_DWORD *)(v4 + 216) = 0;
    *(_QWORD *)(v4 + 224) = 0LL;
    *(_QWORD *)(v4 + 136) = DeviceObject;
    *(_WORD *)(v4 + 220) = gProtocolType;
    *(_QWORD *)(v4 + 272) = 0LL;
    if ( !(_DWORD)v3 )
      *(_DWORD *)(v4 + 160) |= 0x4000000u;
    *(_QWORD *)(v4 + 232) = FileObject;
    if ( (_DWORD)v3 || gRemoteSessionUseWddm )
      *(_DWORD *)(v4 + 260) = 0;
    v29 = 0;
    if ( !(_DWORD)v3 && !gRemoteSessionUseWddm )
    {
      *(_QWORD *)(v4 + 248) = 0xFFFFFFFFLL;
      *(_DWORD *)(v4 + 256) = gcNextGlobalDeviceNumber;
      *(_QWORD *)(v4 + 240) = 0LL;
      goto LABEL_46;
    }
    *(_QWORD *)&InputBuffer[8] = VideoPortCallout;
    memset(&InputBuffer[16], 0, 24);
    *(_QWORD *)InputBuffer = v4;
    v30 = GreDeviceIoControlImpl(
            *(PDEVICE_OBJECT *)(v4 + 136),
            0x23201Fu,
            InputBuffer,
            0x28u,
            InputBuffer,
            0x28u,
            &v78,
            1u,
            1);
    v32 = v30;
    if ( v30 < 0 )
    {
      v65 = WdLogNewEntry5_WdTrace(v31);
      *(_QWORD *)(v65 + 24) = v32;
      WdLogEvent5_WdTrace(v65);
      DrvCleanupOneGraphicsDevice(v4);
      goto LABEL_148;
    }
    LODWORD(v27) = 0;
    if ( *(_DWORD *)&InputBuffer[16] )
      *(_DWORD *)(v4 + 160) |= 0x40000000u;
    if ( (*(_DWORD *)&InputBuffer[32] & 0xC0000001) != 0 )
    {
      v66 = WdLogNewEntry5_WdTrace(v31);
      *(_QWORD *)(v66 + 24) = *(unsigned int *)&InputBuffer[32];
      *(_QWORD *)(v66 + 32) = -1073741637LL;
      WdLogEvent5_WdTrace(v66);
      goto LABEL_147;
    }
    if ( (*(_DWORD *)&InputBuffer[32] & 0x20000000) != 0 )
      *(_DWORD *)(v4 + 160) |= 0x100000u;
    *(_QWORD *)(v4 + 144) = *(_QWORD *)&InputBuffer[24];
    *(_DWORD *)(v4 + 256) = 0;
    memset(v86, 0, sizeof(v86));
    if ( (int)GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)(v4 + 136), 0x232033u, 0LL, 0, v86, 0x20u, &v78, 1u, 1) >= 0 )
    {
      if ( LODWORD(v86[0]) != 2 )
      {
        v67 = WdLogNewEntry5_WdAssertion(v34, v33, v35);
        WdLogEvent5_WdAssertion(v67);
      }
      if ( gRemoteTerminalLuid == v86[3] )
      {
        v36 = v86[1];
        if ( v86[1] )
        {
          *(_DWORD *)(v4 + 160) |= 0x800000u;
          *(_QWORD *)(v4 + 240) = v36;
          *(_DWORD *)(v4 + 256) = HIDWORD(v86[0]);
          *(_QWORD *)(v4 + 248) = v86[2];
          goto LABEL_46;
        }
      }
LABEL_147:
      DrvCleanupOneGraphicsDevice(v4);
LABEL_148:
      ++gcNextGlobalDeviceNumber;
LABEL_162:
      v12 = v72;
LABEL_69:
      v4 = 0LL;
      goto LABEL_70;
    }
    if ( gRemoteSessionUseWddm )
      goto LABEL_147;
LABEL_46:
    v75 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
    v37 = v75;
    if ( v75 < 0 )
    {
      if ( (*(_DWORD *)(v4 + 160) & 0x20000000) != 0 )
      {
        v68 = *(struct _DEVICE_OBJECT **)(v4 + 144);
        if ( v68 )
        {
          v75 = IoOpenDeviceRegistryKey(v68, 2u, 0x2000000u, &DeviceRegKey);
          v37 = v75;
          if ( v75 >= 0 )
          {
            DrvGetDeviceConfigurationInformation((__int64 *)v4, (WCHAR *)DeviceRegKey, 1);
            ZwClose(DeviceRegKey);
          }
        }
      }
    }
    else
    {
      v38 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
      ExFreePoolWithTag(P, 0);
      v75 = IoOpenDeviceRegistryKey(v38, 2u, 0x2000000u, &DeviceRegKey);
      v37 = v75;
      if ( v75 >= 0 )
      {
        v77 = 0LL;
        if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v77, 8u, &v78, 1u, 1) >= 0 )
        {
          if ( v77 )
          {
            LODWORD(v27) = 0;
            v29 = 1;
            if ( (*(_DWORD *)v77 & 0x20000000) != 0 )
            {
              do
                v27 = (unsigned int)(v27 + 1);
              while ( (*((_DWORD *)v77 + 5 * v27) & 0x20000000) != 0 );
            }
          }
        }
        DrvGetDeviceConfigurationInformation((__int64 *)v4, (WCHAR *)DeviceRegKey, 1);
        if ( v29 )
        {
          if ( (_DWORD)v27 )
          {
            *(_DWORD *)(v4 + 216) = v27;
            *(_QWORD *)(v4 + 224) = PALLOCMEM2((unsigned int)(20 * v27), 0x76646747u, 1);
            v53 = (unsigned int)v27;
            v54 = 0LL;
            do
            {
              *(_DWORD *)(v54 + *(_QWORD *)(v4 + 224)) = 0;
              v55 = v77;
              if ( (*(_DWORD *)((_BYTE *)v77 + v54) & 1) != 0 )
              {
                *(_DWORD *)(v54 + *(_QWORD *)(v4 + 224)) |= 1u;
                v55 = v77;
              }
              if ( (*(_DWORD *)((_BYTE *)v55 + v54) & 2) == 0 )
              {
                *(_DWORD *)(v54 + *(_QWORD *)(v4 + 224)) |= 2u;
                v55 = v77;
              }
              if ( *(int *)((char *)v55 + v54) >= 0 )
              {
                *(_DWORD *)(v54 + *(_QWORD *)(v4 + 224)) |= 0x80000000;
                v55 = v77;
              }
              if ( (*(_DWORD *)((_BYTE *)v55 + v54) & 0x40000000) == 0 )
              {
                *(_DWORD *)(v54 + *(_QWORD *)(v4 + 224)) |= 0x40000000u;
                v55 = v77;
              }
              *(_DWORD *)(v54 + *(_QWORD *)(v4 + 224) + 4) = *(_DWORD *)((char *)v55 + v54 + 4);
              *(_QWORD *)(v54 + *(_QWORD *)(v4 + 224) + 8) = *(_QWORD *)((char *)v77 + v54 + 8);
              *(_BYTE *)(v54 + *(_QWORD *)(v4 + 224) + 16) = *((_BYTE *)v77 + v54 + 16);
              v54 += 20LL;
              --v53;
            }
            while ( v53 );
          }
          ExFreePoolWithTag(v77, 0);
        }
        ZwClose(DeviceRegKey);
      }
      ObfDereferenceObject(v38);
    }
    swprintf_s((wchar_t *)v4, 0x20uLL, (const wchar_t *)&QueryTable);
    ++gcNextGlobalDeviceNumber;
    if ( v37 < 0 )
    {
      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, 0LL, 0, &v75);
      v37 = v75;
      DeviceRegKey = RegistryHandleFromDeviceMap;
      if ( v75 >= 0 )
      {
        DrvGetDeviceConfigurationInformation((__int64 *)v4, (WCHAR *)RegistryHandleFromDeviceMap, 0);
        ZwClose(DeviceRegKey);
        goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( !*(_QWORD *)(v4 + 208) )
      {
        v57 = (unsigned __int16 *)PALLOCMEM2(0x20uLL, 0x73726447u, 0);
        *(_QWORD *)(v4 + 208) = v57;
        if ( v57 )
        {
          v58 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, v57, 0x10u, &v75);
          DeviceRegKey = v58;
          if ( v58 )
            ZwClose(v58);
          v37 = v75;
        }
        else
        {
          v37 = -1073741670;
        }
      }
    }
    v39 = (wchar_t *)(v4 + 64);
    if ( (*(_DWORD *)(v4 + 160) & 8) != 0 )
    {
      ++gcNextGlobalVirtualOutputNumber;
      swprintf_s(v39, 0x20uLL, L"\\\\.\\DISPLAYV%d");
    }
    else
    {
      ++gcNextGlobalPhysicalOutputNumber;
      swprintf_s(v39, 0x20uLL, L"\\\\.\\DISPLAY%d");
    }
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v4);
    v41 = *(_DWORD *)(v4 + 160);
    if ( PruneFlag )
      v42 = v41 & 0xFFF7FFFF;
    else
      v42 = v41 | 0x80000;
    *(_DWORD *)(v4 + 160) = v42;
    if ( (unsigned int)bSetDeviceSessionUsage(v4, 1) )
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
      *(_QWORD *)(v4 + 280) = 0LL;
      v59 = (__int64 *)(v4 + 296);
      if ( dword_1C0215BA0 )
        v60 = qword_1C0215BA4;
      else
        v60 = 0LL;
      *v59 = v60;
      *(_QWORD *)(v4 + 304) = 0LL;
      v73[0] = 0;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, _BYTE *))qword_1C0215198)(
                  v4 + 280,
                  v59,
                  v4 + 304,
                  v4 + 288,
                  v73) >= 0 )
      {
        v61 = *(_DWORD *)(v4 + 164);
        if ( v73[0] )
          v62 = v61 | 4;
        else
          v62 = v61 & 0xFFFFFFFB;
        *(_DWORD *)(v4 + 164) = v62;
        DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v4);
      }
      if ( !gRemoteSessionUseWddm && v37 < 0 )
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
    v43 = (*(_DWORD *)(v4 + 160) & 0x800000) == 0;
    gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v4;
    if ( !v43 )
      DrvAddAdapterLuid(*(struct _LUID *)(v4 + 248));
    v12 = 1;
    v72 = 1;
    goto LABEL_69;
  }
  if ( !(_DWORD)v3 )
  {
LABEL_78:
    if ( !gRemoteSessionUseWddm )
    {
LABEL_79:
      v48 = gpGraphicsDeviceList;
      v49 = 0;
      while ( v48 )
      {
        v50 = *((_DWORD *)v48 + 40);
        if ( (v50 & 0x4000000) != 0 )
        {
          v51 = v50 & 0xFFFFFFFB;
          *((_DWORD *)v48 + 40) = v51;
          *((_DWORD *)v48 + 65) = v49 < gRemoteContext;
          if ( v49 == dword_1C0215B64 )
            *((_DWORD *)v48 + 40) = v51 | 4;
          ++v49;
        }
        v48 = (wchar_t *)*((_QWORD *)v48 + 16);
      }
    }
  }
  DrvSetDisconnectedGraphicsDevice(v3);
  v17 = WdLogNewEntry5_WdTrace(v16);
  WdLogEvent5_WdTrace(v17);
  if ( v12 )
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
    v44 = gpGraphicsDeviceList;
    v45 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v46 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v44 )
    {
      if ( (*((_DWORD *)v44 + 40) & 0x4000000) != 0 )
      {
        v52 = *((unsigned int *)v44 + 64);
        ++v45;
        if ( (unsigned int)v52 > 0x10 || ((1 << v52) & (unsigned int)v46) != 0 )
          goto LABEL_165;
        v46 = (1 << v52) | (unsigned int)v46;
      }
      v44 = (wchar_t *)*((_QWORD *)v44 + 16);
    }
    v52 = v45;
    if ( (_DWORD)v46 == (1 << v45) - 1 )
      goto LABEL_13;
LABEL_165:
    v70 = WdLogNewEntry5_WdAssertion(v52, v44, v46);
    WdLogEvent5_WdAssertion(v70);
  }
LABEL_13:
  v18 = 65533LL;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( gRemoteSessionUseWddm )
    {
      DrvAddMirrorDriversToRemoteList(v82, v76);
    }
    else
    {
      DrvAddMirrorDriversToRemoteList(0, v76);
      if ( !gbVideoInitialized )
        DrvUnattachMirrorDriversInSession();
    }
  }
  v19 = WdLogNewEntry5_WdTrace(v18);
  *(_QWORD *)(v19 + 24) = v5;
  WdLogEvent5_WdTrace(v19);
  return (unsigned int)v5;
}
