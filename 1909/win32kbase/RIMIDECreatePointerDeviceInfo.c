/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C01468E8
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C0146468 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C0031C04 (RIMIsRunningOnDesktop.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C003F580 (DrvGetWDDMAdapterInfo.c)
 *     RIMGetQDCActivePathsData @ 0x1C0046020 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0051738 (RIMFreeQDCActivePathsData.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C005CC40 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMGetDeviceObjectPointer @ 0x1C005CE10 (RIMGetDeviceObjectPointer.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C009E8B0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A56B8 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     RIMGetDeviceLocationInfo @ 0x1C013D2F0 (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C013E0D4 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C013E398 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C013E7D4 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C013F010 (RIMRetrieveLinkCollection.c)
 *     RIMPopulatePointerDevice @ 0x1C01415E4 (RIMPopulatePointerDevice.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0143D70 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0143E7C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0144A88 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C0145DD8 (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C0145EF8 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C0146250 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C014A9E8 (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0159664 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0159908 (RIMCmFreePointerDeviceContacts.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0177C9C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0179980 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // edi
  __int128 v7; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  char *v12; // r13
  struct _DEVICE_OBJECT *v13; // r12
  __int64 v14; // rdx
  char *v15; // rbx
  __int64 v16; // r8
  BOOL v17; // esi
  char *v18; // rcx
  int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int128 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v42; // rbx
  _QWORD *v43; // rdx
  char *v45; // [rsp+48h] [rbp-99h] BYREF
  __int64 v46; // [rsp+50h] [rbp-91h]
  PVOID Object; // [rsp+58h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-81h] BYREF
  PDEVICE_OBJECT v49[2]; // [rsp+68h] [rbp-79h] BYREF
  _QWORD v50[3]; // [rsp+78h] [rbp-69h] BYREF
  _OWORD v51[3]; // [rsp+90h] [rbp-51h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-21h]
  __int128 v53; // [rsp+D0h] [rbp-11h] BYREF

  v5 = *(_OWORD *)(a4 + 40);
  v6 = 0;
  v7 = *(_OWORD *)(a4 + 56);
  *(_QWORD *)&v53 = a5;
  v51[0] = v5;
  v9 = *(_OWORD *)(a4 + 72);
  v51[1] = v7;
  v10 = *(_OWORD *)(a4 + 88);
  v46 = a3;
  v51[2] = v9;
  v12 = 0LL;
  v52 = v10;
  v13 = 0LL;
  v45 = 0LL;
  Object = 0LL;
  v49[0] = 0LL;
  Handle = 0LL;
  v50[0] = 0LL;
  v50[1] = 0LL;
  v15 = (char *)Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  v17 = v15 == 0LL;
  if ( *(_DWORD *)(a4 + 40) == 851969 && !RIMIsRunningOnDesktop() )
    v17 = 1;
  if ( v17 )
    goto LABEL_9;
  v18 = *(char **)(a2 + 1328);
  if ( v18 )
  {
    v19 = RawInputManagerDeviceObjectResolveHandle(v18, 3u, 1, (PVOID *)&v45);
    v12 = v45;
    if ( v19 < 0 )
    {
      *(_QWORD *)(a2 + 1328) = 0LL;
LABEL_8:
      v17 = 1;
LABEL_9:
      v20 = a1;
      goto LABEL_10;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v45 + 296), v14, v16, &Handle, &Object, v49) < 0 )
      goto LABEL_8;
    v13 = v49[0];
  }
  *((_DWORD *)v15 + 78) |= 8u;
  *((_QWORD *)v15 + 109) = v15 + 864;
  *((_QWORD *)v15 + 108) = v15 + 864;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v15, (struct tagHIDDESC *)a4, v16);
  rimIDECheckConfidenceSupport((__int64)v15, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  v26 = *((_DWORD *)v15 + 78);
  if ( (*(_DWORD *)(v46 + 12) & 2) != 0 )
  {
    *((_DWORD *)v15 + 78) = v26 | 0x2000;
    RIMIDECheckScanTimeSupport((__int64)v15, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v15 + 210) = -1;
    *((_DWORD *)v15 + 78) = v26 | 0x80;
  }
  *((_DWORD *)v15 + 186) = 500;
  *((_QWORD *)v15 + 94) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v12 )
  {
    v27 = *((_QWORD *)v12 + 69);
    if ( v27 )
    {
      *(_WORD *)(a4 + 110) = *(_WORD *)(v27 + 110);
      *(_WORD *)(a4 + 112) = *(_WORD *)(*((_QWORD *)v12 + 69) + 112LL);
      *(_WORD *)(a4 + 114) = *(_WORD *)(*((_QWORD *)v12 + 69) + 114LL);
    }
    if ( v13 )
      RIMGetDeviceLocationInfo(v13, (_DWORD *)(a2 + 2104));
  }
  v28 = v46;
  *((_DWORD *)v15 + 180) = *(_DWORD *)(v46 + 88);
  *((_QWORD *)v15 + 112) = *(_QWORD *)(v28 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v29 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v15 + 41) = v29;
    if ( v29 )
    {
      *((_WORD *)v15 + 161) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)v15 + 20, (PCUNICODE_STRING)(a2 + 208));
      v28 = v46;
    }
    else
    {
      v28 = v46;
      v17 = 1;
    }
  }
  v30 = *((_DWORD *)v15 + 6);
  if ( ((v30 - 3) & 0xFFFFFFFA) != 0 || v30 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v15, 0, v52, *(_QWORD *)(a4 + 16)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 10, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
      }
      v17 = 1;
    }
    if ( v17 )
      goto LABEL_9;
  }
  else
  {
    *((_DWORD *)v15 + 190) = *(_DWORD *)(v28 + 128);
    v31 = Win32AllocPoolZInit(0x28uLL, 1785620818LL);
    *((_QWORD *)v15 + 89) = v31;
    if ( !v31 )
      v17 = 1;
    if ( v17 )
      goto LABEL_9;
    v32 = *(_QWORD *)(a4 + 16);
    LODWORD(v45) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v15, v32, (unsigned int *)&v45) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(
                            (__int64)v15,
                            *(struct _HIDP_PREPARSED_DATA **)(a4 + 16),
                            (unsigned int)v45) )
      {
LABEL_37:
        v17 = 1;
        goto LABEL_9;
      }
      if ( LOWORD(v51[0]) == 5 )
      {
        if ( WORD1(v51[0]) != 13 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v14, v16);
        ++*((_DWORD *)v15 + 180);
        *((_DWORD *)v15 + 6) = 7;
      }
    }
    else
    {
      DbgPrintWarning("Serial Device found!");
      if ( (*((_DWORD *)v15 + 78) & 0x2000) != 0 )
        goto LABEL_37;
    }
  }
  v34 = *((_DWORD *)v15 + 78);
  if ( (v34 & 2) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gRimLog,
      v14,
      1,
      11,
      (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
      *((_DWORD *)v15 + 6),
      -__CFSHR__(v34, 8));
  }
  if ( (int)RIMCmAllocPointerDeviceContacts(v15, 1785620818LL) < 0 )
    goto LABEL_37;
  v20 = a1;
  if ( !(unsigned int)RIMPopulatePointerDevice(a1, (__int64)v15, *(_QWORD *)(v53 + 32), (__int16 *)v51) )
    v17 = 1;
LABEL_10:
  v23 = RIMGetQDCActivePathsData((unsigned int *)v50, v14, v16);
  if ( v17 )
    goto LABEL_74;
  v24 = v46;
  if ( (unsigned int)(*((_DWORD *)v15 + 6) - 6) <= 1 )
  {
    *(_QWORD *)(v46 + 80) = 0LL;
LABEL_13:
    v25 = 0LL;
    goto LABEL_14;
  }
  v35 = *(__int64 **)(v46 + 80);
  if ( !v35 )
    goto LABEL_13;
  v25 = *v35;
LABEL_14:
  *(_QWORD *)(a2 + 1344) = v25;
  if ( *(_QWORD *)(v24 + 80) )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    *(_DWORD *)(a2 + 1352) = 6;
    DrvGetWDDMAdapterInfo(
      *(_QWORD *)(*(_QWORD *)(v24 + 80) + 240LL),
      1,
      (struct _LUID *)(a2 + 1868),
      (_DWORD *)(a2 + 1876));
LABEL_61:
    rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v23, 0LL);
    goto LABEL_62;
  }
  if ( v12 )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v12 + 88), a2 + 1336);
    goto LABEL_61;
  }
LABEL_62:
  if ( (*((_DWORD *)v15 + 78) & 0x2000) == 0
    || *((_DWORD *)v15 + 37) - *((_DWORD *)v15 + 35) <= 1
    || *((_DWORD *)v15 + 38) - *((_DWORD *)v15 + 36) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1336) )
    {
      v36 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344), v24, v22);
      v37 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v53, v36);
    }
    else
    {
      v37 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v49);
    }
    v53 = *v37;
    *(_OWORD *)(v15 + 140) = v53;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v15, 0, (__int64)v23);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, v15);
  if ( (unsigned int)(*((_DWORD *)v15 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone()
    || LOWORD(v51[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15) < 0 )
  {
    v17 = 1;
LABEL_74:
    if ( v15 )
    {
      v38 = *((_QWORD *)v15 + 89);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 24);
        if ( v39 )
          Win32FreePool(v39);
      }
      RIMCmFreePointerDeviceContacts(v15, v21, v22);
      v40 = *((_QWORD *)v15 + 41);
      if ( v40 )
        Win32FreePool(v40);
      if ( *((_QWORD *)v15 + 125) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15);
      Win32FreePool((__int64)v15);
    }
    goto LABEL_83;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_QWORD *)v15 + 92) = -1LL;
  *((_QWORD *)v15 + 2) = a2;
  *(_QWORD *)(a2 + 480) = v15;
  v42 = v15 + 864;
  v43 = *(_QWORD **)(v20 + 440);
  if ( *v43 != v20 + 432 )
    __fastfail(3u);
  *v42 = v20 + 432;
  v42[1] = v43;
  *v43 = v42;
  *(_QWORD *)(v20 + 440) = v42;
LABEL_83:
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData(v23);
  LOBYTE(v6) = !v17;
  return v6;
}
