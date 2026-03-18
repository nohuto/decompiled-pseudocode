/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C012BC0C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C011178C (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C0114DD0 (RIMAddToActiveDevices.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0128D14 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C012ADA8 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C012B2F8 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C012E9F0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C012EBF4 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C012EC20 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmResetContactFrameState @ 0x1C012ED2C (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C012EF74 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  struct _HIDP_PREPARSED_DATA *v11; // rbx
  __int64 v12; // rdi
  _DWORD *active; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // r15d
  int v17; // esi
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rdx
  PalmTelemetry *v22; // rcx
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  int IsContactSuppressed; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  BOOL v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  int v36; // ecx
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+74h] [rbp-8Ch] BYREF
  int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v44; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v45; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v46; // [rsp+88h] [rbp-78h] BYREF
  struct _HIDP_PREPARSED_DATA *v47; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h] BYREF
  int *v51; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  struct _HIDP_PREPARSED_DATA **v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+FCh] [rbp-4h]
  __int64 v59; // [rsp+100h] [rbp+0h]
  int v60; // [rsp+108h] [rbp+8h]
  int v61; // [rsp+10Ch] [rbp+Ch]
  __int64 v62; // [rsp+110h] [rbp+10h]
  int v63; // [rsp+118h] [rbp+18h]
  int v64; // [rsp+11Ch] [rbp+1Ch]

  v11 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  v12 = *(_QWORD *)(a2 + 480);
  v41 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v50 = 0LL;
  v49 = a2;
  v40 = a5;
  v48 = a7;
  v51 = a8;
  v47 = v11;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x14u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  *a7 = 0;
  *a8 = 0;
  active = (_DWORD *)rimFindOrCreateActiveContact(v12, v11, a3, a4, a5, &v41);
  v15 = (__int64)active;
  if ( !active )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x15u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
    v16 = -1073741823;
    goto LABEL_11;
  }
  v17 = v41;
  if ( v41 )
  {
    if ( *(_DWORD *)(v12 + 944) == 1 )
      RIMAddToActiveDevices(a1, v12, v14);
  }
  else if ( (active[585] & 2) != 0 )
  {
    LODWORD(pData) = *active;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x16u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, pData);
    v16 = -1073741823;
    goto LABEL_10;
  }
  v16 = rimPopulateContactFrameData(a1, v49, a3, a4, a5, a6, v15, v48, &v46, &v45, &v44, &v43, &v50);
  if ( v16 >= 0 )
  {
    if ( *v48 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x18u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
    }
    else
    {
      if ( v17 )
      {
        *(_DWORD *)(v15 + 48) = *(_DWORD *)(v15 + 2472);
        *(_QWORD *)(v15 + 56) = *(_QWORD *)(v15 + 2488);
        *(_QWORD *)(v15 + 64) = *(_QWORD *)(v15 + 2448);
        if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
        {
          v42 = 0;
          rimHidP_GetUsageValue(HidP_Input, 0xDu, v40, 0x5Bu, (unsigned int *)&v42, v47, a3, a4);
          v19 = v42;
          if ( !byte_1C01D1EB0 || dword_1C01D1EAC != v42 )
          {
            if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
            {
              v54 = 1;
              v53 = &v40;
              LODWORD(v47) = v19;
              LOBYTE(v40) = v20 >= 0;
              v56 = &v47;
              v55 = 0;
              v58 = 0;
              v61 = 0;
              v21 = *(_QWORD *)(v49 + 464);
              v64 = 0;
              v57 = 4;
              v60 = 2;
              v63 = 2;
              v59 = v21 + 110;
              v62 = v21 + 112;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019FBBF, 0LL, 0LL, 6u, &v52);
              v19 = v42;
            }
            byte_1C01D1EB0 = 1;
            dword_1C01D1EAC = v19;
          }
        }
      }
      v22 = *(PalmTelemetry **)(a1 + 856);
      if ( v22 )
        PalmTelemetry::Update(v22, (struct tagHID_POINTER_DEVICE_INFO *)v12, (struct tagHPD_CONTACT *)v15, v17);
      rimApplyPointerDevicePolicies(v12, v15, v17, v46, v45, v44, v43, v50);
      if ( (*(_DWORD *)(v15 + 32) & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 84) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, *((_QWORD *)&v23 + 1), v25);
        v17 = v41;
        v24 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
        v23 = v24 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        *(_QWORD *)(a1 + 608) = *((_QWORD *)&v23 + 1);
      }
      v26 = *(_DWORD *)(v15 + 52) == 0;
      *(_QWORD *)(v15 + 72) = *(_QWORD *)(v15 + 2448);
      if ( v26 && (*(_DWORD *)(v15 + 2636) & 4) == 0 && (*(_DWORD *)(v15 + 2420) & 4) != 0 )
      {
        v17 = v41;
        v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v15 + 52) = v24;
      }
      if ( !gDeviceArbitrationType && (*(_DWORD *)(v15 + 8) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, *((_QWORD *)&v23 + 1), v25);
      IsContactSuppressed = RIMCmIsContactSuppressed(v15);
      v31 = IsContactSuppressed && *(_DWORD *)(v12 + 24) == 7 && *(_DWORD *)(v15 + 8) == 16;
      if ( !IsContactSuppressed
        || v31
        || (unsigned int)RIMCmIsContactDeliveringPointerData(v15)
        || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v15) )
      {
        *(_DWORD *)(v15 + 2340) |= 1u;
        if ( v31 )
        {
          if ( (*(_DWORD *)(v15 + 32) & 2) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          if ( !(unsigned int)RIMCmIsContactSuppressed(v15) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
          *(_DWORD *)(v15 + 2420) |= 0x2000000u;
        }
      }
      else
      {
        LODWORD(v39) = *(_DWORD *)(v15 + 2636);
        LODWORD(v38) = *(_DWORD *)(v15 + 8);
        LODWORD(pData) = *(_DWORD *)v15;
        WPP_RECORDER_SF_dDD(
          v29,
          v28,
          v30,
          0x19u,
          (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids,
          pData,
          v38,
          v39);
      }
    }
  }
  else
  {
    LODWORD(pData) = *(_DWORD *)v15;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x17u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, pData);
  }
  if ( v16 < 0 )
  {
    if ( v17 )
      goto LABEL_58;
LABEL_10:
    RIMCmResetContactFrameState(v15);
    goto LABEL_11;
  }
  *v51 = v17;
  if ( *v48 )
  {
LABEL_58:
    RIMCmDeactivateContact(v12, v15);
    goto LABEL_11;
  }
  v35 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v15 + 2328) = *(_DWORD *)(v15 + 2420);
  *(_DWORD *)(v15 + 44) = v35;
  v36 = *(_DWORD *)(v12 + 24);
  if ( (unsigned int)(v36 - 1) > 3 )
  {
    if ( (unsigned int)(v36 - 5) <= 1 )
      *(_DWORD *)(v15 + 2336) = *(_DWORD *)(v15 + 2504);
  }
  else
  {
    *(_DWORD *)(v15 + 2332) = *(_DWORD *)(v15 + 2504);
  }
LABEL_11:
  LODWORD(pData) = v16;
  return WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x1Au, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, pData);
}
