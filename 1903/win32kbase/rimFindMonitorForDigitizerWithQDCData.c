/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C01470F8
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0068E58 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0146150 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004E650 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00BB54C (_wcsnicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     UserLogError @ 0x1C01205F0 (UserLogError.c)
 *     RIMGetContainerId @ 0x1C013F558 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C013FF5C (RIMGetPanelId.c)
 *     RIMGetDisplayMonitor @ 0x1C01462C8 (RIMGetDisplayMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r13
  int *v4; // r15
  __int64 v5; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  wchar_t *v9; // rcx
  int *v10; // r12
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // r14d
  int v14; // r11d
  wchar_t *v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  ULONG v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int16 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int16 *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  const wchar_t *v35; // rcx
  wchar_t *v36; // rdx
  int v37; // eax
  _DWORD *v38; // rcx
  int *v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 *v43; // rcx
  __int64 v44; // rcx
  __int64 result; // rax
  wchar_t *Str2; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+38h] [rbp-C8h]
  int v48; // [rsp+3Ch] [rbp-C4h]
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  ULONG v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v52; // [rsp+4Ch] [rbp-B4h]
  __int64 v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  struct _DEVICE_OBJECT *v56; // [rsp+68h] [rbp-98h] BYREF
  int *v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  int *v59; // [rsp+80h] [rbp-80h]
  __int64 *v60; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h]
  int *v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h]
  _QWORD v66[54]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = 0LL;
  v63 = a3;
  v4 = a3;
  v5 = a2;
  v7 = 0LL;
  v60 = 0LL;
  if ( !*(_DWORD *)(a1 + 1320) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v54 = 1;
  if ( !v5 )
    goto LABEL_86;
  v8 = 0;
  v57 = 0LL;
  a2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v55 = 0LL;
  a3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v59 = 0LL;
  v13 = 0;
  v58 = 0LL;
  v14 = 0;
  v53 = 0LL;
  v50 = 0;
  v47 = 0;
  v49 = 0;
  v48 = 0;
  v62 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)v5 )
  {
    v15 = 0LL;
    do
    {
      v16 = 200LL * v8;
      v17 = *(_QWORD *)(v5 + 8);
      v64 = 0LL;
      v18 = 0;
      v65 = 0LL;
      Str2 = 0LL;
      v19 = *(unsigned int *)(v16 + v17 + 28);
      v51 = 0;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64, PVOID *, struct _DEVICE_OBJECT **))qword_1C02151D8)(
                  v16 + v17 + 16,
                  v19,
                  &Object,
                  &v56) >= 0 )
      {
        if ( (int)RIMGetContainerId(v56, &v64, 0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
        RIMGetPanelId(v56, &Str2, &v51);
        ObfDereferenceObject(Object);
        v18 = v51;
      }
      memset(v66, 0, 0x1A4uLL);
      v23 = *(_QWORD *)(v5 + 8);
      v66[1] = *(_QWORD *)(v16 + v23 + 16);
      LODWORD(v66[2]) = *(_DWORD *)(v16 + v23 + 28);
      v66[0] = 0x1A400000002LL;
      if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v66) >= 0 && WORD2(v66[20]) )
      {
        v24 = (unsigned __int16 *)&v66[20] + 2;
        v25 = a1 + 1596 - ((_QWORD)&v66[20] + 4);
        do
        {
          v26 = *(unsigned __int16 *)((char *)v24 + v25);
          v27 = *v24 - (unsigned int)v26;
          if ( (_DWORD)v27 )
            break;
          ++v24;
        }
        while ( (_DWORD)v26 );
        if ( !(_DWORD)v27 )
        {
          if ( v15 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v27, v25);
          v15 = (wchar_t *)(v16 + *(_QWORD *)(v5 + 8));
        }
        v28 = (unsigned __int16 *)&v66[20] + 2;
        v29 = a1 + 1340 - ((_QWORD)&v66[20] + 4);
        do
        {
          v30 = *(unsigned __int16 *)((char *)v28 + v29);
          v31 = *v28 - (unsigned int)v30;
          if ( (_DWORD)v31 )
            break;
          ++v28;
        }
        while ( (_DWORD)v30 );
        if ( !(_DWORD)v31 )
        {
          if ( v55 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v31, v29);
          v55 = v16 + *(_QWORD *)(v5 + 8);
        }
      }
      v32 = *(_QWORD *)(a1 + 2088) - v64;
      if ( !v32 )
        v32 = *(_QWORD *)(a1 + 2096) - v65;
      if ( !v32 )
      {
        v33 = v62 - *(_QWORD *)(a1 + 2088);
        if ( v62 == *(_QWORD *)(a1 + 2088) )
          v33 = v62 - *(_QWORD *)(a1 + 2096);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v5 + 8);
          ++v49;
          v58 = v16 + v34;
        }
      }
      v35 = *(const wchar_t **)(a1 + 2112);
      v36 = Str2;
      if ( v35
        && Str2
        && *(_DWORD *)(a1 + 2120) == v18
        && (v37 = wcsnicmp(v35, Str2, (unsigned __int64)v18 >> 1), v36 = Str2, !v37) )
      {
        v3 = v16 + *(_QWORD *)(v5 + 8);
        ++v48;
        v53 = v3;
      }
      else
      {
        v3 = v53;
      }
      if ( *(_DWORD *)(a1 + 1336) == 6 )
      {
        v38 = (_DWORD *)(v16 + *(_QWORD *)(v5 + 8));
        if ( *(_DWORD *)(a1 + 1852) == v38[4] && *(_DWORD *)(a1 + 1856) == v38[5] && *(_DWORD *)(a1 + 1860) == v38[6] )
          v7 = v16 + *(_QWORD *)(v5 + 8);
      }
      v39 = (int *)(v16 + *(_QWORD *)(v5 + 8));
      v40 = v39[20];
      if ( v40 == 0x80000000 || v40 == 11 || v40 == 13 )
      {
        ++v50;
        v13 = v47;
        v57 = v39;
      }
      else
      {
        v13 = v47 + 1;
        v59 = v39;
        ++v47;
      }
      if ( !v10 && !v39[29] && !v39[30] )
        v10 = v39;
      if ( v36 )
        Win32FreePool((__int64)v36);
      v8 = v52 + 1;
      v52 = v8;
    }
    while ( v8 < *(_DWORD *)v5 );
    a2 = v55;
    a3 = v57;
    v12 = v58;
    v11 = (__int64)v59;
    v14 = v48;
    Str2 = v15;
    v4 = v63;
    v9 = Str2;
  }
  v41 = 0;
  if ( v4 )
  {
    *v4 = 0;
    if ( v13 )
      v41 = v54;
    *v4 = v41;
  }
  if ( v7 )
    goto LABEL_90;
  if ( v9 )
  {
    v7 = (__int64)v9;
    *(_DWORD *)(a1 + 1336) = 5;
    goto LABEL_90;
  }
  if ( a2 )
  {
    v7 = a2;
    *(_DWORD *)(a1 + 1336) = 1;
    goto LABEL_90;
  }
  if ( v3 && v14 == 1 )
  {
    v7 = v3;
    *(_DWORD *)(a1 + 1336) = 2;
    goto LABEL_90;
  }
  if ( v12 && v49 == 1 )
  {
    v7 = v12;
LABEL_81:
    *(_DWORD *)(a1 + 1336) = 2;
    goto LABEL_90;
  }
  v42 = *(_DWORD *)(a1 + 2104);
  if ( v42 )
  {
    if ( v42 == 1 && v11 && v13 == 1 )
    {
      v7 = v11;
      goto LABEL_81;
    }
  }
  else if ( a3 && v50 == 1 )
  {
    v7 = (__int64)a3;
    goto LABEL_81;
  }
  if ( !v10 )
    goto LABEL_86;
  *(_DWORD *)(a1 + 1336) = 3;
  v7 = (__int64)v10;
  if ( v4 )
    UserLogError(-2147483385);
LABEL_90:
  if ( (unsigned int)RIMGetDisplayMonitor(v7, (unsigned int *)v5, &v60) )
  {
    if ( v60 )
      v44 = *v60;
    else
      v44 = 0LL;
    *(_QWORD *)(a1 + 1328) = v44;
    *(_QWORD *)(a1 + 1852) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(a1 + 1864) = *(_DWORD *)(v7 + 28);
    result = *(unsigned int *)(v7 + 24);
    *(_DWORD *)(a1 + 1860) = result;
    goto LABEL_98;
  }
LABEL_86:
  if ( v4 )
    UserLogError(-2147483385);
  v43 = *(__int64 **)(gpDispInfo + 96);
  if ( v43 )
    v44 = *v43;
  else
    v44 = 0LL;
  *(_QWORD *)(a1 + 1328) = v44;
  *(_DWORD *)(a1 + 1336) = 4;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    result = WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 11, (__int64)&WPP_4ed64263eadd3b9e029ca4902ad1e489_Traceguids);
    v44 = *(_QWORD *)(a1 + 1328);
  }
LABEL_98:
  if ( !v44 )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  return result;
}
