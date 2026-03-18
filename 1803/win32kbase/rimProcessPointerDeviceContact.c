/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C0102F30
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00E8014 (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C00EA1F8 (RIMAddToActiveDevices.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C010263C (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C0102A5C (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C0106B18 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0106D7C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmResetContactFrameState @ 0x1C0106E60 (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C01079CC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7)
{
  __int64 v10; // rdi
  struct _HIDP_PREPARSED_DATA *v11; // rbx
  _DWORD *active; // rax
  __int64 v13; // rbx
  int v14; // r14d
  int v15; // r15d
  const GUID *v17; // r9
  int v18; // r10d
  __int64 v19; // rdx
  PalmTelemetry *QuadPart; // rcx
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // rcx
  bool v23; // zf
  int IsContactSuppressed; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  BOOL v27; // esi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v36; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v39; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v40; // [rsp+88h] [rbp-78h] BYREF
  struct _HIDP_PREPARSED_DATA *v41; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  struct _HIDP_PREPARSED_DATA **v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  int v53; // [rsp+F8h] [rbp-8h]
  int v54; // [rsp+FCh] [rbp-4h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]

  v10 = *(_QWORD *)(a2 + 480);
  v11 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  v35 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v44 = 0LL;
  v43 = a2;
  v34 = a5;
  v42 = a7;
  v41 = v11;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x14u,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  *a7 = 0;
  active = (_DWORD *)rimFindOrCreateActiveContact(v10, v11, a3, a4, a5, &v35);
  v13 = (__int64)active;
  if ( active )
  {
    v15 = v35;
    if ( v35 )
    {
      if ( *(_DWORD *)(v10 + 912) == 1 )
        RIMAddToActiveDevices(a1, v10);
    }
    else if ( (active[580] & 2) != 0 )
    {
      LODWORD(pData) = *active;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x16u,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        pData);
      v14 = -1073741823;
      goto LABEL_10;
    }
    v14 = rimPopulateContactFrameData((__int64)a1, v43, a3, a4, a5, a6, v13, v42, &v40, &v39, &v38, &v37, &v44);
    if ( v14 >= 0 )
    {
      if ( *v42 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0x18u,
          (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
      }
      else
      {
        if ( v15 )
        {
          *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 2456);
          *(_QWORD *)(v13 + 56) = *(_QWORD *)(v13 + 2472);
          *(_QWORD *)(v13 + 64) = *(_QWORD *)(v13 + 2432);
          if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 5) <= 1 )
          {
            v36 = 0;
            rimHidP_GetUsageValue(HidP_Input, 0xDu, v34, 0x5Bu, &v36, v41, a3, a4);
            LODWORD(v17) = v36;
            if ( !byte_1C01A6448 || dword_1C01A6444 != v36 )
            {
              if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
              {
                v47 = 1;
                v46 = &v34;
                LODWORD(v41) = (_DWORD)v17;
                LOBYTE(v34) = v18 >= 0;
                v49 = &v41;
                v48 = 0;
                v51 = 0;
                v54 = 0;
                v19 = *(_QWORD *)(v43 + 464);
                v57 = 0;
                v50 = 4;
                v53 = 2;
                v56 = 2;
                v52 = v19 + 110;
                v55 = v19 + 112;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01789FE, 0LL, v17, 6u, &v45);
                LODWORD(v17) = v36;
              }
              byte_1C01A6448 = 1;
              dword_1C01A6444 = (int)v17;
            }
          }
        }
        QuadPart = (PalmTelemetry *)a1[105].QuadPart;
        if ( QuadPart )
          PalmTelemetry::Update(QuadPart, (struct tagHID_POINTER_DEVICE_INFO *)v10, (struct tagHPD_CONTACT *)v13, v15);
        rimApplyPointerDevicePolicies(v10, v13, v15, v40, v39, v38, v37, v44);
        if ( (*(_DWORD *)(v13 + 32) & 0x20) != 0 )
        {
          if ( (a1[9].HighPart & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, *((_QWORD *)&v21 + 1));
          v15 = v35;
          v22 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
          v21 = v22 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
          a1[74] = *(LARGE_INTEGER *)((char *)&v21 + 8);
        }
        v23 = *(_DWORD *)(v13 + 52) == 0;
        *(_QWORD *)(v13 + 72) = *(_QWORD *)(v13 + 2432);
        if ( v23 && (*(_DWORD *)(v13 + 2620) & 4) == 0 && (*(_DWORD *)(v13 + 2404) & 4) != 0 )
        {
          v15 = v35;
          v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v13 + 52) = v22;
        }
        if ( !gDeviceArbitrationType && (*(_DWORD *)(v13 + 8) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, *((_QWORD *)&v21 + 1));
        IsContactSuppressed = RIMCmIsContactSuppressed(v13);
        v27 = IsContactSuppressed && *(_DWORD *)(v10 + 24) == 7 && *(_DWORD *)(v13 + 8) == 16;
        if ( !IsContactSuppressed
          || v27
          || (unsigned int)RIMCmIsContactDeliveringPointerData(v13)
          || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v13) )
        {
          *(_DWORD *)(v13 + 2320) |= 1u;
          if ( v27 )
          {
            if ( (*(_DWORD *)(v13 + 32) & 2) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
            if ( !(unsigned int)RIMCmIsContactSuppressed(v13) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29);
            *(_DWORD *)(v13 + 2404) |= 0x2000000u;
          }
        }
        else
        {
          LODWORD(v33) = *(_DWORD *)(v13 + 2620);
          LODWORD(v32) = *(_DWORD *)(v13 + 8);
          LODWORD(pData) = *(_DWORD *)v13;
          WPP_RECORDER_SF_dDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v25,
            v28,
            0x19u,
            (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
            pData,
            v32,
            v33);
        }
      }
    }
    else
    {
      LODWORD(pData) = *(_DWORD *)v13;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x17u,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        pData);
    }
    if ( v14 >= 0 )
    {
      if ( !*v42 )
      {
        *(_DWORD *)(v13 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_11;
      }
LABEL_55:
      RIMCmDeactivateContact(v10, v13);
      goto LABEL_11;
    }
    if ( v15 )
      goto LABEL_55;
LABEL_10:
    RIMCmResetContactFrameState(v13);
    goto LABEL_11;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x15u,
    0x15u,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  v14 = -1073741823;
LABEL_11:
  LODWORD(pData) = v14;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x1Au,
           (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
           pData);
}
