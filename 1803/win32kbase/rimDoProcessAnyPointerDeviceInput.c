/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00FFE40 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     RIMGetPointerInputType @ 0x1C00ECA34 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00F94A0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_i @ 0x1C010067C (WPP_RECORDER_SF_i.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0100AF4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01015C0 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0102D4C (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C01035FC (rimUpdatePointerDeviceFrameScanTime.c)
 *     RIMCmGetActiveContactsCountNoButton @ 0x1C0106CA0 (RIMCmGetActiveContactsCountNoButton.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCounter; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned __int16 v16; // r9
  __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  LARGE_INTEGER v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  int v27; // [rsp+50h] [rbp-28h] BYREF
  int v28; // [rsp+54h] [rbp-24h] BYREF
  int v29; // [rsp+58h] [rbp-20h] BYREF
  int v30; // [rsp+5Ch] [rbp-1Ch] BYREF
  int v31; // [rsp+60h] [rbp-18h] BYREF
  __int64 v32; // [rsp+68h] [rbp-10h]
  unsigned __int16 v33; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+C8h] [rbp+50h] BYREF
  int v35; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp+60h]

  v2 = *(_QWORD *)(a2 + 464);
  v5 = *(_QWORD *)(a2 + 480);
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *(unsigned __int16 *)(v2 + 44);
  v8 = -__CFSHR__(*(_DWORD *)(a2 + 184), 13);
  v36 = *(_DWORD *)(a2 + 264);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xEu,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  if ( !*(_QWORD *)(v5 + 696) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = RIMGetPointerInputType(v5) - 2;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      v14 = 12LL;
      goto LABEL_9;
    }
    if ( v13 == 1 )
    {
      v14 = 2LL;
      goto LABEL_9;
    }
  }
  v14 = 10LL;
LABEL_9:
  CInputGlobals::UpdateInputGlobals(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v14,
    0LL,
    0,
    v8 != 0 ? 10 : 2);
  v15 = v36 / (unsigned int)v7;
  if ( v36 % (unsigned int)v7 )
  {
    if ( v36 > (unsigned int)v7 )
    {
      LODWORD(v26) = v36;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0xFu,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        v26,
        v7);
      goto LABEL_46;
    }
    v15 = 1;
  }
  if ( v15 )
  {
    v32 = v15;
    do
    {
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v6,
                  v7,
                  (__int64)&v35,
                  (__int64)&v34,
                  (__int64)&v28,
                  (__int64)&v27,
                  (__int64)&v30,
                  (__int64)&v33) >= 0 )
      {
        if ( !v28 )
          goto LABEL_27;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v6, (unsigned int)v7);
        if ( v35 )
        {
          if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
          {
            if ( *(_DWORD *)(v5 + 24) == 7 )
              rimProcessPointerDeviceButtonContact(a1, a2, v6, v7, 0);
LABEL_27:
            RIMStoreRawDataInPointerDeviceFrame(a1, a2, v6, v7, &v29);
            v36 = 0;
            if ( v34 )
            {
              v17 = v33;
              while ( 1 )
              {
                rimProcessPointerDeviceContact(a1, a2, v6, v7, v17, v29, (__int64)&v31);
                if ( v30 )
                {
                  if ( v31 )
                    break;
                }
                if ( (*(_DWORD *)(v5 + 276) & 8) != 0 )
                {
                  v17 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 672) + 24LL) + 8LL * v33 + 4);
                  v33 = v17;
                }
                else
                {
                  if ( v35 != 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
                  if ( v34 != 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
                  v17 = v33;
                }
                if ( ++v36 >= v34 )
                  goto LABEL_39;
              }
              v20 = 1;
              v27 = 1;
            }
            else
            {
LABEL_39:
              v20 = v27;
            }
            if ( v20 )
            {
              RIMAbArbitratePointerDeviceFrame(a1, a2);
              RIMCompletePointerDeviceFrame(a1, a2);
            }
            goto LABEL_42;
          }
          v16 = 18;
        }
        else
        {
          if ( *(_DWORD *)(v5 + 24) == 7 && !(unsigned int)RIMCmGetActiveContactsCountNoButton(v5) )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(a1, a2, v6, v7, PerformanceCounter.QuadPart);
            goto LABEL_42;
          }
          v16 = 17;
        }
      }
      else
      {
        v16 = 16;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        v16,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
LABEL_42:
      v6 += v7;
      --v32;
    }
    while ( v32 );
  }
LABEL_46:
  v21 = KeQueryPerformanceCounter(0LL);
  return WPP_RECORDER_SF_i(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           (unsigned __int64)(1000000 * (v21.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 504),
           v22,
           v23,
           v25);
}
