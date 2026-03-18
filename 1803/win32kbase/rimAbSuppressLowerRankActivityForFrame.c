/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00588C0 (RIMAbandonPointerDeviceFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00E69E4 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00E6E60 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00E8014 (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C00ECA34 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0106CD0 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  int v6; // r12d
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v9; // r13
  int v10; // edi
  __int64 active; // rax
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int128 v14; // xmm2
  __int64 v15; // xmm1_8
  __int64 v16; // rax
  _DWORD *v18; // rdi
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  __int64 ButtonContact; // rdi
  __int64 v23; // rcx
  int v24; // edx
  __int128 v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+50h] [rbp-29h]
  __int128 v28; // [rsp+58h] [rbp-21h]
  __int64 v29; // [rsp+68h] [rbp-11h]
  _BYTE v30[24]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v31[72]; // [rsp+88h] [rbp+Fh] BYREF
  int v32; // [rsp+E8h] [rbp+6Fh]
  __int64 v34; // [rsp+F8h] [rbp+7Fh]

  v5 = 1;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v34 = *(_QWORD *)(a2 + 776) + 1LL;
  v32 = *(_DWORD *)(a2 + 748) + 1;
  if ( !gDeviceArbitrationType )
    ((void (__fastcall *)(_QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(
      0xFFFFF78000000004uLL,
      (LARGE_INTEGER)v7.QuadPart);
  v10 = RIMGetPointerInputType(a2);
  if ( v10 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(v30, a2);
    v12 = *(_QWORD *)(active + 16);
    v26 = *(_OWORD *)active;
    v27 = v12;
    while ( 1 )
    {
      v13 = RIMCmActiveContactsEnd((__int64)v31, a2);
      v14 = *(_OWORD *)v13;
      v15 = *(_QWORD *)(v13 + 16);
      v16 = *(_QWORD *)v13;
      v29 = v15;
      v28 = v14;
      if ( (_QWORD)v26 == v16 && DWORD2(v26) == DWORD2(v28) && v27 == v29 )
        break;
      v18 = (_DWORD *)(v27 - 16);
      if ( (*(_DWORD *)(v27 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v19 = v18[13], (unsigned int)v9 <= v19 + 500)
          || !v19 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v18 + 652, a2, a3, 0) )
          {
            if ( !v6 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v6 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v18, 1LL);
            WPP_RECORDER_SF_dDD(
              WPP_GLOBAL_Control->DeviceExtension,
              v20,
              v21,
              16,
              (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
              *v18,
              v18[2],
              v18[655]);
            RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), (_DWORD)v18, v34, v32, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v26);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed(a1, a2, v6) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v23, ButtonContact, 1LL);
      if ( !v6 )
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x15u,
            0x11u,
            (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
          return 0;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0x12u,
          (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
        RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), ButtonContact, v34, v32, 1);
        goto LABEL_32;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x13u,
        (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
    }
    if ( v6 )
    {
LABEL_32:
      v5 = RIMCompletePointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
      LOBYTE(v24) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v24,
        21,
        20,
        (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
        v5);
    }
  }
  return v5;
}
