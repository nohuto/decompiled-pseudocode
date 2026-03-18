/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0051A08 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0112CA0 (RIMFindMonitorForDigitizer.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00A693C (_wcsnicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     UserLogError @ 0x1C00F46E0 (UserLogError.c)
 *     RIMGetDisplayMonitor @ 0x1C0112E20 (RIMGetDisplayMonitor.c)
 *     RIMGetContainerId @ 0x1C0116D44 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C011777C (RIMGetPanelId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  __int64 v6; // rdi
  wchar_t *v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // r12
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r13
  int v14; // r14d
  int v15; // r11d
  unsigned int v16; // eax
  wchar_t *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int16 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int16 *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  const wchar_t *v37; // rcx
  wchar_t *v38; // rdx
  int v39; // eax
  _DWORD *v40; // rcx
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 result; // rax
  wchar_t *Str2; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-B4h]
  unsigned int v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  _DWORD *v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h]
  _DWORD *v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-50h]
  _DWORD v67[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+D0h] [rbp-30h]
  _WORD v70[134]; // [rsp+164h] [rbp+64h] BYREF

  v64 = a3;
  v3 = a3;
  v6 = 0LL;
  v61 = 0LL;
  if ( !*(_DWORD *)(a1 + 1192) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a2 )
    goto LABEL_84;
  v7 = 0LL;
  v56 = 0LL;
  v8 = 0LL;
  v58 = 0LL;
  v9 = 0LL;
  v60 = 0LL;
  v10 = 0LL;
  v59 = 0LL;
  v11 = 0LL;
  v55 = 0LL;
  v12 = 0LL;
  v52 = 0;
  v13 = 0LL;
  v49 = 0;
  v14 = 0;
  v51 = 0;
  v15 = 0;
  v50 = 0;
  v16 = 0;
  v63 = 0LL;
  v54 = 0;
  if ( *(_DWORD *)a2 )
  {
    v17 = 0LL;
    do
    {
      v18 = 200LL * v16;
      v19 = *(_QWORD *)(a2 + 8);
      v65 = 0LL;
      v20 = 0;
      v66 = 0LL;
      Str2 = 0LL;
      v21 = *(unsigned int *)(v18 + v19 + 28);
      v53 = 0;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64, PVOID *, __int64 *))qword_1C01CDA80)(
                  v18 + v19 + 16,
                  v21,
                  &Object,
                  &v57) >= 0 )
      {
        if ( (int)RIMGetContainerId(v57, &v65, 0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        RIMGetPanelId(v57, &Str2, &v53);
        ObfDereferenceObject(Object);
        v20 = v53;
      }
      v25 = *(_QWORD *)(a2 + 8);
      v68 = *(_QWORD *)(v18 + v25 + 16);
      v69 = *(_DWORD *)(v18 + v25 + 28);
      v67[1] = 420;
      v67[0] = 2;
      if ( (int)DrvDisplayConfigGetDeviceInfo((struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *)v67) >= 0 && v70[0] )
      {
        v26 = v70;
        v27 = a1 + 1468 - (_QWORD)v70;
        do
        {
          v28 = *(unsigned __int16 *)((char *)v26 + v27);
          v29 = *v26 - (unsigned int)v28;
          if ( (_DWORD)v29 )
            break;
          ++v26;
        }
        while ( (_DWORD)v28 );
        if ( !(_DWORD)v29 )
        {
          if ( v17 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v29, v27);
          v17 = (wchar_t *)(v18 + *(_QWORD *)(a2 + 8));
        }
        v30 = v70;
        v31 = a1 + 1212 - (_QWORD)v70;
        do
        {
          v32 = *(unsigned __int16 *)((char *)v30 + v31);
          v33 = *v30 - (unsigned int)v32;
          if ( (_DWORD)v33 )
            break;
          ++v30;
        }
        while ( (_DWORD)v32 );
        if ( !(_DWORD)v33 )
        {
          if ( v56 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v33, v31);
          v56 = v18 + *(_QWORD *)(a2 + 8);
        }
      }
      v34 = *(_QWORD *)(a1 + 1960) - v65;
      if ( !v34 )
        v34 = *(_QWORD *)(a1 + 1968) - v66;
      if ( !v34 )
      {
        v35 = v63 - *(_QWORD *)(a1 + 1960);
        if ( v63 == *(_QWORD *)(a1 + 1960) )
          v35 = v63 - *(_QWORD *)(a1 + 1968);
        if ( v35 )
        {
          v36 = v18 + *(_QWORD *)(a2 + 8);
          ++v51;
          v59 = v36;
        }
      }
      v37 = *(const wchar_t **)(a1 + 1984);
      v38 = Str2;
      if ( v37
        && Str2
        && *(_DWORD *)(a1 + 1992) == v20
        && (v39 = wcsnicmp(v37, Str2, (unsigned __int64)v20 >> 1), v38 = Str2, !v39) )
      {
        v13 = v18 + *(_QWORD *)(a2 + 8);
        ++v50;
        v55 = v13;
      }
      else
      {
        v13 = v55;
      }
      if ( *(_DWORD *)(a1 + 1208) == 6 )
      {
        v40 = (_DWORD *)(v18 + *(_QWORD *)(a2 + 8));
        if ( *(_DWORD *)(a1 + 1724) == v40[4] && *(_DWORD *)(a1 + 1728) == v40[5] && *(_DWORD *)(a1 + 1732) == v40[6] )
          v6 = v18 + *(_QWORD *)(a2 + 8);
      }
      v41 = (_DWORD *)(v18 + *(_QWORD *)(a2 + 8));
      v42 = v41[20];
      if ( v42 == 0x80000000 || v42 == 11 || v42 == 13 )
      {
        ++v52;
        v14 = v49;
        v58 = v41;
      }
      else
      {
        v14 = v49 + 1;
        v60 = v41;
        ++v49;
      }
      if ( !v9 && !v41[29] && !v41[30] )
        v9 = v41;
      if ( v38 )
        Win32FreePool((__int64)v38);
      v16 = v54 + 1;
      v54 = v16;
    }
    while ( v16 < *(_DWORD *)a2 );
    v8 = v56;
    v10 = (__int64)v58;
    v12 = v59;
    v11 = (__int64)v60;
    v15 = v50;
    Str2 = v17;
    v3 = v64;
    v7 = Str2;
  }
  if ( v3 )
  {
    *v3 = 0;
    *v3 = v14 != 0;
  }
  if ( v6 )
    goto LABEL_82;
  if ( v7 )
  {
    v6 = (__int64)v7;
    *(_DWORD *)(a1 + 1208) = 5;
    goto LABEL_82;
  }
  if ( v8 )
  {
    v6 = v8;
    *(_DWORD *)(a1 + 1208) = 1;
    goto LABEL_82;
  }
  if ( v13 && v15 == 1 )
  {
    v6 = v13;
LABEL_78:
    *(_DWORD *)(a1 + 1208) = 2;
    goto LABEL_82;
  }
  if ( v12 && v51 == 1 )
  {
    v6 = v12;
    goto LABEL_78;
  }
  v43 = *(_DWORD *)(a1 + 1976);
  if ( v43 )
  {
    if ( v43 == 1 && v11 && v14 == 1 )
    {
      v6 = v11;
      goto LABEL_78;
    }
  }
  else if ( v10 && v52 == 1 )
  {
    v6 = v10;
    goto LABEL_78;
  }
  if ( !v9 )
    goto LABEL_84;
  *(_DWORD *)(a1 + 1208) = 3;
  v6 = (__int64)v9;
  if ( v3 )
    UserLogError(-2147483385);
LABEL_82:
  if ( (unsigned int)RIMGetDisplayMonitor(v6, (unsigned int *)a2, &v61) )
  {
    *(_QWORD *)(a1 + 1200) = v61;
    *(_QWORD *)(a1 + 1724) = *(_QWORD *)(v6 + 16);
    *(_DWORD *)(a1 + 1736) = *(_DWORD *)(v6 + 28);
    *(_DWORD *)(a1 + 1732) = *(_DWORD *)(v6 + 24);
    goto LABEL_87;
  }
LABEL_84:
  if ( v3 )
    UserLogError(-2147483385);
  *(_QWORD *)(a1 + 1200) = *(_QWORD *)(gpDispInfo + 96);
  *(_DWORD *)(a1 + 1208) = 4;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xBu, (__int64)&WPP_29b2d95337ca3c6b60bf6989ded744e8_Traceguids);
LABEL_87:
  result = 0LL;
  if ( !*(_QWORD *)(a1 + 1200) )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46);
  return result;
}
