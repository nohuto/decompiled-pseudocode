/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01102DC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C011073C (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C011178C (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C0117D70 (RIMGetPointerInputType.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0122E84 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0123534 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C012E614 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C012EB74 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  int v6; // r12d
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v9; // r8
  unsigned __int64 v10; // r13
  int v11; // edi
  __int64 active; // rax
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  _DWORD *v18; // rdi
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 ButtonContact; // rdi
  __int64 v24; // rcx
  __int64 v26; // [rsp+28h] [rbp-41h]
  __int128 v27; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+50h] [rbp-19h]
  __int128 v29; // [rsp+58h] [rbp-11h] BYREF
  __int64 v30; // [rsp+68h] [rbp-1h]
  _BYTE v31[80]; // [rsp+70h] [rbp+7h] BYREF
  int v32; // [rsp+D8h] [rbp+6Fh]
  __int64 v34; // [rsp+E8h] [rbp+7Fh]

  v5 = 1;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v34 = *(_QWORD *)(a2 + 808) + 1LL;
  v32 = *(_DWORD *)(a2 + 780) + 1;
  if ( !gDeviceArbitrationType )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(
      0xFFFFF78000000004uLL,
      (LARGE_INTEGER)v7.QuadPart,
      (LARGE_INTEGER)v9.QuadPart);
  v11 = RIMGetPointerInputType(a2);
  if ( v11 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v29, a2);
    v13 = *(_QWORD *)(active + 16);
    v27 = *(_OWORD *)active;
    v28 = v13;
    while ( 1 )
    {
      v14 = RIMCmActiveContactsEnd(v31, a2);
      v15 = *(_OWORD *)v14;
      v16 = *(_QWORD *)(v14 + 16);
      v17 = *(_QWORD *)v14;
      v30 = v16;
      v29 = v15;
      if ( (_QWORD)v27 == v17 && DWORD2(v27) == DWORD2(v29) && v28 == v30 )
        break;
      v18 = (_DWORD *)(v28 - 16);
      if ( (*(_DWORD *)(v28 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v19 = v18[13], (unsigned int)v10 <= v19 + 500)
          || !v19 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v18 + 656, a2, a3, 0) )
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
              v21,
              v20,
              v22,
              16,
              (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids,
              *v18,
              v18[2],
              v18[659]);
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v18, v34, v32, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v27);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed((__int64)a1, a2, v6) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v24, ButtonContact, 1LL);
      if ( !v6 )
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x11u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
          return 0;
        }
        WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x12u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v34, v32, 1);
        goto LABEL_30;
      }
      WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x13u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
    }
    if ( v6 )
    {
LABEL_30:
      v5 = RIMCompletePointerDeviceFrame(a1, *(struct RIMDEV **)(a2 + 16));
      LODWORD(v26) = v5;
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x14u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids, v26);
    }
  }
  return v5;
}
