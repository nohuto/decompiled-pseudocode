/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0054E10 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00E9050 (RIMFindMonitorForDigitizer.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0042B10 (DrvDisplayConfigGetDeviceInfo.c)
 *     RIMGetDisplayMonitor @ 0x1C00547E8 (RIMGetDisplayMonitor.c)
 *     RIMGetContainerId @ 0x1C0054960 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C0054A08 (RIMGetPanelId.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x1C0054BA0 (DrvDxgkGetMonitorDeviceObject.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C0074174 (_wcsnicmp.c)
 *     UserLogError @ 0x1C00BCF40 (UserLogError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // r13d
  _DWORD *v5; // r15
  __int64 v6; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r9
  _DWORD *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r11
  int v15; // r10d
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  const wchar_t *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int16 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int16 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  const wchar_t *v31; // rcx
  char v32; // dl
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 result; // rax
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // [rsp+34h] [rbp-CCh]
  int v43; // [rsp+38h] [rbp-C8h]
  int v44; // [rsp+3Ch] [rbp-C4h]
  int v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h]
  _DWORD *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h]
  int v60[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+D0h] [rbp-30h]
  _WORD v63[134]; // [rsp+164h] [rbp+64h] BYREF

  v4 = 0;
  v57 = (_DWORD *)a3;
  v5 = (_DWORD *)a3;
  v6 = a2;
  v54 = 0LL;
  if ( !*(_DWORD *)(a1 + 848) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !v6 )
    goto LABEL_85;
  v8 = 0;
  v49 = 0LL;
  a2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v48 = 0LL;
  v13 = 0LL;
  v53 = 0LL;
  v14 = 0LL;
  v52 = 0LL;
  v15 = 0;
  v43 = 0;
  a3 = 0LL;
  v42 = 0;
  v45 = 0;
  v44 = 0;
  v56 = 0LL;
  v47 = 0;
  if ( *(_DWORD *)v6 )
  {
    v16 = 0LL;
    do
    {
      v17 = 200LL * v8;
      v18 = *(_QWORD *)(v6 + 8);
      v58 = 0LL;
      v19 = 0LL;
      v59 = 0LL;
      v51 = 0LL;
      v20 = *(unsigned int *)(v17 + v18 + 28);
      LODWORD(v46) = 0;
      if ( (int)DrvDxgkGetMonitorDeviceObject(v17 + v18 + 16, v20, &Object, &v50) >= 0 )
      {
        if ( (int)RIMGetContainerId(v50, &v58, 0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
        RIMGetPanelId(v50, &v51, &v46);
        ObfDereferenceObject(Object);
        v19 = v51;
      }
      v23 = *(_QWORD *)(v6 + 8);
      v61 = *(_QWORD *)(v17 + v23 + 16);
      v62 = *(_DWORD *)(v17 + v23 + 28);
      v60[1] = 420;
      v60[0] = 2;
      if ( (int)DrvDisplayConfigGetDeviceInfo(v60) >= 0 && v63[0] )
      {
        v24 = v63;
        do
        {
          v25 = *(unsigned __int16 *)((char *)v24 + a1 + 1124 - (_QWORD)v63);
          v26 = *v24 - (unsigned int)v25;
          if ( (_DWORD)v26 )
            break;
          ++v24;
        }
        while ( (_DWORD)v25 );
        if ( !(_DWORD)v26 )
        {
          if ( v9 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v26);
          v9 = v17 + *(_QWORD *)(v6 + 8);
        }
        v27 = v63;
        do
        {
          v28 = *(unsigned __int16 *)((char *)v27 + a1 + 868 - (_QWORD)v63);
          v29 = *v27 - (unsigned int)v28;
          if ( (_DWORD)v29 )
            break;
          ++v27;
        }
        while ( (_DWORD)v28 );
        if ( !(_DWORD)v29 )
        {
          if ( v49 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v29);
          v49 = v17 + *(_QWORD *)(v6 + 8);
        }
      }
      v30 = *(_QWORD *)(a1 + 1608) - v58;
      if ( !v30 )
        v30 = *(_QWORD *)(a1 + 1616) - v59;
      if ( !v30 )
      {
        v40 = v56 - *(_QWORD *)(a1 + 1608);
        if ( v56 == *(_QWORD *)(a1 + 1608) )
          v40 = v56 - *(_QWORD *)(a1 + 1616);
        if ( v40 )
        {
          ++v45;
          v53 = v17 + *(_QWORD *)(v6 + 8);
        }
      }
      v31 = *(const wchar_t **)(a1 + 1632);
      if ( v31 && v19 && *(_DWORD *)(a1 + 1640) == (_DWORD)v46 )
      {
        v41 = wcsnicmp(v31, v19, (unsigned __int64)(unsigned int)v46 >> 1);
        v32 = 1;
        if ( !v41 )
        {
          ++v44;
          v52 = v17 + *(_QWORD *)(v6 + 8);
        }
      }
      else
      {
        v32 = 1;
      }
      v33 = (_DWORD *)(v17 + *(_QWORD *)(v6 + 8));
      v34 = v33[20];
      if ( v34 != 0x80000000 && v34 != 11 && v34 != 13 )
        v32 = 0;
      a3 = v42;
      if ( !v32 )
      {
        v16 = v17 + *(_QWORD *)(v6 + 8);
        a3 = v42 + 1;
      }
      v35 = v43 + 1;
      if ( !v32 )
        v35 = v43;
      v42 = a3;
      v15 = v35;
      v43 = v35;
      v36 = v17 + *(_QWORD *)(v6 + 8);
      if ( !v32 )
        v36 = v48;
      v48 = v36;
      a2 = v36;
      if ( !v11 && !v33[29] && !v33[30] )
        v11 = v33;
      if ( v19 )
      {
        Win32FreePool((__int64)v19);
        a3 = v42;
        a2 = v48;
        v15 = v43;
      }
      v8 = v47 + 1;
      v47 = v8;
    }
    while ( v8 < *(_DWORD *)v6 );
    v10 = v49;
    v14 = v52;
    v13 = v53;
    v4 = v44;
    v46 = v16;
    v5 = v57;
    v12 = v46;
  }
  if ( v5 )
  {
    *v5 = 0;
    *v5 = a3 != 0;
  }
  if ( v9 )
  {
    *(_DWORD *)(a1 + 864) = 5;
    goto LABEL_54;
  }
  if ( v10 )
  {
    v9 = v10;
    *(_DWORD *)(a1 + 864) = 1;
    goto LABEL_54;
  }
  a4 = 1LL;
  if ( v14 && v4 == 1 )
  {
    v9 = v14;
    *(_DWORD *)(a1 + 864) = 2;
    goto LABEL_54;
  }
  if ( v13 && v45 == 1 )
  {
    v9 = v13;
LABEL_84:
    *(_DWORD *)(a1 + 864) = 2;
    goto LABEL_54;
  }
  v37 = *(_DWORD *)(a1 + 1624);
  if ( v37 )
  {
    if ( v37 == 1 && v12 && (_DWORD)a3 == 1 )
    {
      v9 = v12;
      goto LABEL_84;
    }
  }
  else if ( a2 && v15 == 1 )
  {
    v9 = a2;
    goto LABEL_84;
  }
  if ( !v11 )
    goto LABEL_85;
  *(_DWORD *)(a1 + 864) = 3;
  v9 = (__int64)v11;
  if ( v5 )
    UserLogError(2147483911LL, a2, a3, 1LL);
LABEL_54:
  if ( (unsigned int)RIMGetDisplayMonitor(v9, v6, &v54) )
  {
    *(_QWORD *)(a1 + 856) = v54;
    *(_QWORD *)(a1 + 1380) = *(_QWORD *)(v9 + 16);
    result = *(unsigned int *)(v9 + 28);
    *(_DWORD *)(a1 + 1388) = result;
    goto LABEL_56;
  }
LABEL_85:
  if ( v5 )
    UserLogError(2147483911LL, a2, a3, a4);
  *(_QWORD *)(a1 + 856) = *(_QWORD *)(gpDispInfo + 96);
  *(_DWORD *)(a1 + 864) = 4;
  result = WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x13u,
             0xBu,
             (__int64)&WPP_938c38feb455315d552f88149bc6281f_Traceguids);
LABEL_56:
  if ( !*(_QWORD *)(a1 + 856) )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, a2);
  return result;
}
