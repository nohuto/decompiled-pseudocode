/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMFreeQDCActivePathsData @ 0x1C003DCC0 (RIMFreeQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C003F0A0 (DrvGetWDDMAdapterInfo.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     DbgPrintRIM @ 0x1C00517C4 (DbgPrintRIM.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C008BE30 (RIMGetVirtualDesktopPhysicalSize.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0112F40 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C011303C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetDeviceLocationInfo @ 0x1C0117140 (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C0118004 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01182A8 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C01186B4 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C0118EA0 (RIMRetrieveLinkCollection.c)
 *     RIMPopulatePointerDevice @ 0x1C011B37C (RIMPopulatePointerDevice.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C011D200 (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C011D270 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C011D5A0 (RIMIDECheckScanTimeSupport.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C012E874 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C012EB18 (RIMCmFreePointerDeviceContacts.c)
 *     RIMIsRunningOnDesktop @ 0x1C012FA7C (RIMIsRunningOnDesktop.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A480 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014BB20 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C016541C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  char *v10; // r13
  __int128 v11; // xmm1
  struct _DEVICE_OBJECT *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  BOOL v18; // esi
  char *v19; // rcx
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // ecx
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int128 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v41; // rbx
  _QWORD *v42; // rdx
  __int64 v43; // [rsp+28h] [rbp-B9h]
  char *v45; // [rsp+48h] [rbp-99h] BYREF
  __int64 v46; // [rsp+50h] [rbp-91h]
  PVOID Object; // [rsp+58h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-81h] BYREF
  PDEVICE_OBJECT v49[3]; // [rsp+68h] [rbp-79h] BYREF
  _OWORD v50[3]; // [rsp+80h] [rbp-61h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-31h]
  __int64 v52; // [rsp+C0h] [rbp-21h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-11h] BYREF

  v5 = 0;
  v6 = *(_OWORD *)(a4 + 56);
  v50[0] = *(_OWORD *)(a4 + 40);
  v8 = *(_OWORD *)(a4 + 72);
  v50[1] = v6;
  v10 = 0LL;
  v11 = *(_OWORD *)(a4 + 88);
  v12 = 0LL;
  v46 = a3;
  v50[2] = v8;
  v51 = v11;
  *(_QWORD *)&v53 = a5;
  v45 = 0LL;
  Object = 0LL;
  v49[0] = 0LL;
  Handle = 0LL;
  v15 = (char *)Win32AllocPoolZInit(0x4C0uLL, 0x63707352u);
  v18 = v15 == 0LL;
  if ( *(_DWORD *)(a4 + 40) == 851969 && !(unsigned int)RIMIsRunningOnDesktop(v14, v13, v16, v17) )
    v18 = 1;
  if ( v18 )
    goto LABEL_9;
  v19 = *(char **)(a2 + 1184);
  if ( v19 )
  {
    v20 = RawInputManagerDeviceObjectResolveHandle(v19, 3u, 1, (PVOID *)&v45);
    v10 = v45;
    if ( v20 < 0 )
    {
      *(_QWORD *)(a2 + 1184) = 0LL;
LABEL_8:
      v18 = 1;
LABEL_9:
      v21 = a1;
      goto LABEL_10;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v45 + 296), v13, v16, &Handle, &Object, v49) < 0 )
      goto LABEL_8;
    v12 = v49[0];
  }
  *((_DWORD *)v15 + 77) |= 0x20u;
  *((_QWORD *)v15 + 108) = v15 + 856;
  *((_QWORD *)v15 + 107) = v15 + 856;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v15, (struct tagHIDDESC *)a4, v16);
  rimIDECheckConfidenceSupport((__int64)v15, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  v27 = *((_DWORD *)v15 + 77);
  if ( (*(_DWORD *)(v46 + 12) & 2) != 0 )
  {
    *((_DWORD *)v15 + 77) = v27 | 0x8000;
    RIMIDECheckScanTimeSupport((__int64)v15, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v15 + 208) = -1;
    *((_DWORD *)v15 + 77) = v27 | 0x200;
  }
  *((_DWORD *)v15 + 184) = 500;
  *((_QWORD *)v15 + 93) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v10 )
  {
    v28 = *((_QWORD *)v10 + 69);
    if ( v28 )
    {
      *(_WORD *)(a4 + 110) = *(_WORD *)(v28 + 110);
      *(_WORD *)(a4 + 112) = *(_WORD *)(*((_QWORD *)v10 + 69) + 112LL);
      *(_WORD *)(a4 + 114) = *(_WORD *)(*((_QWORD *)v10 + 69) + 114LL);
    }
    if ( v12 )
      RIMGetDeviceLocationInfo(v12, (_DWORD *)(a2 + 1960));
  }
  v29 = v46;
  *((_DWORD *)v15 + 178) = *(_DWORD *)(v46 + 88);
  *((_QWORD *)v15 + 111) = *(_QWORD *)(v29 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v30 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v15 + 40) = v30;
    if ( v30 )
    {
      *((_WORD *)v15 + 157) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 312), (PCUNICODE_STRING)(a2 + 208));
      v29 = v46;
    }
    else
    {
      v29 = v46;
      v18 = 1;
    }
  }
  v31 = *((_DWORD *)v15 + 6);
  if ( ((v31 - 3) & 0xFFFFFFFA) != 0 || v31 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v15, 0LL, v51, *(_QWORD *)(a4 + 16)) )
    {
      WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0xAu, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids);
      v18 = 1;
    }
    if ( v18 )
      goto LABEL_9;
  }
  else
  {
    *((_DWORD *)v15 + 188) = *(_DWORD *)(v29 + 128);
    v32 = Win32AllocPoolZInit(0x28uLL, 0x6A6E6952u);
    *((_QWORD *)v15 + 88) = v32;
    if ( !v32 )
      v18 = 1;
    if ( v18 )
      goto LABEL_9;
    v33 = *(_QWORD *)(a4 + 16);
    LODWORD(v45) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v15, v33, (unsigned int *)&v45) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(
                            (__int64)v15,
                            *(struct _HIDP_PREPARSED_DATA **)(a4 + 16),
                            (unsigned int)v45) )
      {
LABEL_34:
        v18 = 1;
        goto LABEL_9;
      }
      if ( LOWORD(v50[0]) == 5 )
      {
        if ( WORD1(v50[0]) != 13 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v13, v16);
        ++*((_DWORD *)v15 + 178);
        *((_DWORD *)v15 + 6) = 7;
      }
    }
    else
    {
      DbgPrintRIM("Serial Device found!");
      if ( (*((_DWORD *)v15 + 77) & 0x8000) != 0 )
        goto LABEL_34;
    }
  }
  v35 = *((_DWORD *)v15 + 77);
  if ( (v35 & 8) == 0 )
  {
    LODWORD(v43) = *((_DWORD *)v15 + 6);
    WPP_RECORDER_SF_dd(
      gRimLog,
      3u,
      0x16u,
      0xBu,
      (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids,
      v43,
      -__CFSHR__(v35, 10));
  }
  if ( (int)RIMCmAllocPointerDeviceContacts(v15, 1785620818LL) < 0 )
    goto LABEL_34;
  v21 = a1;
  if ( !(unsigned int)RIMPopulatePointerDevice(a1, (__int64)v15, *(_QWORD *)(v53 + 32), (__int16 *)v50) )
    v18 = 1;
LABEL_10:
  v24 = RIMGetQDCActivePathsData(&v52, v13, v16);
  if ( v18 )
    goto LABEL_69;
  v25 = v46;
  if ( (unsigned int)(*((_DWORD *)v15 + 6) - 6) > 1 )
  {
    v26 = *(_QWORD *)(v46 + 80);
  }
  else
  {
    *(_QWORD *)(v46 + 80) = 0LL;
    v26 = 0LL;
  }
  *(_QWORD *)(a2 + 1200) = v26;
  if ( *(_QWORD *)(v25 + 80) )
  {
    *(_DWORD *)(a2 + 1192) = 1;
    *(_DWORD *)(a2 + 1208) = 6;
    DrvGetWDDMAdapterInfo(
      *(_QWORD *)(*(_QWORD *)(v25 + 80) + 240LL),
      1,
      (struct _LUID *)(a2 + 1724),
      (_DWORD *)(a2 + 1732));
LABEL_56:
    rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v24, 0LL);
    goto LABEL_57;
  }
  if ( v10 )
  {
    *(_DWORD *)(a2 + 1192) = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v10 + 88), a2 + 1192, v23);
    goto LABEL_56;
  }
LABEL_57:
  if ( (*((_DWORD *)v15 + 77) & 0x8000) == 0
    || *((_DWORD *)v15 + 37) - *((_DWORD *)v15 + 35) <= 1
    || *((_DWORD *)v15 + 38) - *((_DWORD *)v15 + 36) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1192) )
      v36 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v53, *(_QWORD *)(a2 + 1200));
    else
      v36 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v49);
    v53 = *v36;
    *(_OWORD *)(v15 + 140) = v53;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v15, 0, (__int64)v24);
  if ( (unsigned int)(*((_DWORD *)v15 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone()
    || LOWORD(v50[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15) < 0 )
  {
    v18 = 1;
LABEL_69:
    if ( v15 )
    {
      v37 = *((_QWORD *)v15 + 88);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 24);
        if ( v38 )
          Win32FreePool(v38);
      }
      RIMCmFreePointerDeviceContacts(v15, v22, v23);
      v39 = *((_QWORD *)v15 + 40);
      if ( v39 )
        Win32FreePool(v39);
      if ( *((_QWORD *)v15 + 124) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15);
      Win32FreePool((__int64)v15);
    }
    goto LABEL_78;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_QWORD *)v15 + 91) = -1LL;
  ApiSetUpdatePointerDeviceSystemMetrics(v15);
  *((_QWORD *)v15 + 2) = a2;
  *(_QWORD *)(a2 + 480) = v15;
  v41 = v15 + 856;
  v42 = *(_QWORD **)(v21 + 440);
  if ( *v42 != v21 + 432 )
    __fastfail(3u);
  *v41 = v21 + 432;
  v41[1] = v42;
  *v42 = v41;
  *(_QWORD *)(v21 + 440) = v41;
LABEL_78:
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData(v24);
  LOBYTE(v5) = !v18;
  return v5;
}
