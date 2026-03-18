/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C00F3160
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00535D4 (RIMFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     DbgPrintRIM @ 0x1C00DDAEC (DbgPrintRIM.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C00E91F0 (RIMGetMonitorPhysicalSize.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C00E92F0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C00E9364 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMGetDeviceLocationInfo @ 0x1C00EC48C (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C00ECC88 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C00ECF30 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C00ED2E8 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C00EDB24 (RIMRetrieveLinkCollection.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     RIMPopulatePointerDevice @ 0x1C00EFEF4 (RIMPopulatePointerDevice.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIsRunningOnDesktop @ 0x1C00F25F0 (RIMIsRunningOnDesktop.c)
 *     RIMIsRunningOnMobile @ 0x1C00F2610 (RIMIsRunningOnMobile.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C00F27A0 (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C00F2810 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00F2B28 (RIMIDECheckScanTimeSupport.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C010699C (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0106C44 (RIMCmFreePointerDeviceContacts.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0124FE0 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0126148 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0141CFC (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  struct _UNICODE_STRING *v10; // r13
  __int128 v11; // xmm1
  struct _DEVICE_OBJECT *v12; // r12
  char *v13; // rbx
  BOOL v14; // esi
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // r15
  __int64 v19; // rdx
  char *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  void *v29; // rax
  struct _HIDP_PREPARSED_DATA *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r9
  __int128 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  _QWORD *v40; // rbx
  _QWORD *v41; // rdx
  __int64 v42; // [rsp+28h] [rbp-A9h]
  struct _UNICODE_STRING *v44; // [rsp+48h] [rbp-89h] BYREF
  __int64 v45; // [rsp+50h] [rbp-81h]
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-71h] BYREF
  PDEVICE_OBJECT v48[3]; // [rsp+68h] [rbp-69h] BYREF
  _OWORD v49[3]; // [rsp+80h] [rbp-51h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-21h]
  __int64 v51; // [rsp+C0h] [rbp-11h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-1h] BYREF

  v5 = 0;
  v6 = *(_OWORD *)(a4 + 56);
  v49[0] = *(_OWORD *)(a4 + 40);
  v8 = *(_OWORD *)(a4 + 72);
  v49[1] = v6;
  v10 = 0LL;
  v11 = *(_OWORD *)(a4 + 88);
  v12 = 0LL;
  v45 = a3;
  v49[2] = v8;
  v50 = v11;
  *(_QWORD *)&v52 = a5;
  v44 = 0LL;
  Object = 0LL;
  v48[0] = 0LL;
  Handle = 0LL;
  v13 = (char *)Win32AllocPoolZInit(0x4A0uLL, 0x63707352u);
  v14 = v13 == 0LL;
  if ( *(_WORD *)(a4 + 42) == 13 )
  {
    if ( *(_WORD *)(a4 + 40) == 2 && RIMIsRunningOnMobile() && !gbPenOnPhoneFeatureEnabled )
      goto LABEL_5;
    if ( *(_WORD *)(a4 + 40) == 1 && !RIMIsRunningOnDesktop() )
      v14 = 1;
  }
  if ( v14 )
    goto LABEL_6;
  v20 = *(char **)(a2 + 840);
  if ( v20 )
  {
    v21 = RawInputManagerDeviceObjectResolveHandle(v20, 3u, 1, (PVOID *)&v44);
    v10 = v44;
    if ( v21 < 0 )
    {
      *(_QWORD *)(a2 + 840) = 0LL;
LABEL_5:
      v14 = 1;
LABEL_6:
      v15 = a1;
      goto LABEL_7;
    }
    if ( (int)RIMGetDeviceObjectPointer(v44 + 18, v22, v23, &Handle, &Object, v48) < 0 )
      goto LABEL_5;
    v12 = v48[0];
  }
  *((_DWORD *)v13 + 69) |= 0x20u;
  *((_QWORD *)v13 + 104) = v13 + 824;
  *((_QWORD *)v13 + 103) = v13 + 824;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v13, (struct tagHIDDESC *)a4);
  rimIDECheckConfidenceSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  v24 = *((_DWORD *)v13 + 69);
  if ( (*(_DWORD *)(v45 + 12) & 2) != 0 )
  {
    *((_DWORD *)v13 + 69) = v24 | 0x8000;
    RIMIDECheckScanTimeSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v13 + 200) = -1;
    *((_DWORD *)v13 + 69) = v24 | 0x200;
  }
  *((_DWORD *)v13 + 176) = 500;
  *((_QWORD *)v13 + 89) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v10 )
  {
    v25 = *(_QWORD *)&v10[34].Length;
    if ( v25 )
    {
      *(_WORD *)(a4 + 110) = *(_WORD *)(v25 + 110);
      *(_WORD *)(a4 + 112) = *(_WORD *)(*(_QWORD *)&v10[34].Length + 112LL);
      *(_WORD *)(a4 + 114) = *(_WORD *)(*(_QWORD *)&v10[34].Length + 114LL);
    }
    if ( v12 )
      RIMGetDeviceLocationInfo(v12, a2 + 1608);
  }
  v26 = v45;
  *((_DWORD *)v13 + 170) = *(_DWORD *)(v45 + 88);
  *((_QWORD *)v13 + 107) = *(_QWORD *)(v26 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v27 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v13 + 36) = v27;
    if ( v27 )
    {
      *((_WORD *)v13 + 141) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 280), (PCUNICODE_STRING)(a2 + 208));
      v26 = v45;
    }
    else
    {
      v26 = v45;
      v14 = 1;
    }
  }
  v28 = *((_DWORD *)v13 + 6);
  if ( ((v28 - 3) & 0xFFFFFFFA) != 0 || v28 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v13, 0LL, v50, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0xAu,
        (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids);
      v14 = 1;
    }
    if ( v14 )
      goto LABEL_6;
  }
  else
  {
    *((_DWORD *)v13 + 180) = *(_DWORD *)(v26 + 128);
    v29 = Win32AllocPoolZInit(0x28uLL, 0x6A6E6952u);
    *((_QWORD *)v13 + 84) = v29;
    if ( !v29 )
      v14 = 1;
    if ( v14 )
      goto LABEL_6;
    v30 = *(struct _HIDP_PREPARSED_DATA **)(a4 + 16);
    LODWORD(v44) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v13, v30, (unsigned int *)&v44) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(
                            (__int64)v13,
                            *(struct _HIDP_PREPARSED_DATA **)(a4 + 16),
                            (unsigned int)v44) )
      {
LABEL_38:
        v14 = 1;
        goto LABEL_6;
      }
      if ( LOWORD(v49[0]) == 5 )
      {
        if ( WORD1(v49[0]) != 13 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31);
        ++*((_DWORD *)v13 + 170);
        *((_DWORD *)v13 + 6) = 7;
      }
    }
    else
    {
      DbgPrintRIM("Serial Device found!");
      if ( (*((_DWORD *)v13 + 69) & 0x8000) != 0 )
        goto LABEL_38;
    }
  }
  v33 = *((_DWORD *)v13 + 69);
  if ( (v33 & 8) == 0 )
  {
    LODWORD(v42) = *((_DWORD *)v13 + 6);
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0xBu,
      (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids,
      v42,
      -__CFSHR__(v33, 10));
  }
  if ( (int)RIMCmAllocPointerDeviceContacts(v13, 1785620818LL) < 0 )
    goto LABEL_38;
  v15 = a1;
  if ( !(unsigned int)RIMPopulatePointerDevice(
                        a1,
                        (__int64)v13,
                        *(struct _HIDP_PREPARSED_DATA **)(v52 + 32),
                        (__int16 *)v49) )
    v14 = 1;
LABEL_7:
  v18 = RIMGetQDCActivePathsData(&v51);
  if ( v14 )
    goto LABEL_67;
  v19 = v45;
  *(_QWORD *)(a2 + 856) = *(_QWORD *)(v45 + 80);
  if ( *(_QWORD *)(v19 + 80) )
  {
    *(_DWORD *)(a2 + 848) = 1;
  }
  else if ( v10 )
  {
    *(_DWORD *)(a2 + 848) = 1;
    RIMReadDigitizerToMonitorMappings(v10 + 5, a2 + 848);
    rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v18, 0LL, v34);
  }
  if ( (*((_DWORD *)v13 + 69) & 0x8000) == 0 )
  {
    if ( *(_DWORD *)(a2 + 848) )
      v35 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v52, *(_QWORD *)(a2 + 856));
    else
      v35 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v48);
    v52 = *v35;
    *(_OWORD *)(v13 + 140) = v52;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v13, 0, (__int64)v18);
  if ( (unsigned int)(*((_DWORD *)v13 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone()
    || LOWORD(v49[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13) < 0 )
  {
    v14 = 1;
LABEL_67:
    if ( v13 )
    {
      v36 = *((_QWORD *)v13 + 84);
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 24);
        if ( v37 )
          Win32FreePool(v37);
      }
      RIMCmFreePointerDeviceContacts(v13, v16, v17);
      v38 = *((_QWORD *)v13 + 36);
      if ( v38 )
        Win32FreePool(v38);
      if ( *((_QWORD *)v13 + 120) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13);
      Win32FreePool((__int64)v13);
    }
    goto LABEL_76;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_QWORD *)v13 + 87) = -1LL;
  ApiSetUpdatePointerDeviceSystemMetrics(v13);
  *((_QWORD *)v13 + 2) = a2;
  *(_QWORD *)(a2 + 480) = v13;
  v40 = v13 + 824;
  v41 = *(_QWORD **)(v15 + 424);
  if ( *v41 != v15 + 416 )
    __fastfail(3u);
  *v40 = v15 + 416;
  v40[1] = v41;
  *v41 = v40;
  *(_QWORD *)(v15 + 424) = v40;
LABEL_76:
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData(v18);
  LOBYTE(v5) = !v14;
  return v5;
}
