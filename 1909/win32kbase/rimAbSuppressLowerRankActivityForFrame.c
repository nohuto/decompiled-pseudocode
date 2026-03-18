/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0139BA8 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0138B9C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C013901C (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C013A26C (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C013DE10 (RIMGetPointerInputType.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C014CBD0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C014CCB0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C014D3B0 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0152AF4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C0152C3C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0159404 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C0159498 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01594EC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0159590 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0159964 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01599B8 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v25; // edx
  int v26; // edx
  int v28; // edx
  __int128 v29; // [rsp+40h] [rbp-29h] BYREF
  __int64 v30; // [rsp+50h] [rbp-19h]
  __int128 v31; // [rsp+58h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1h]
  _BYTE v33[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+6Fh]
  __int64 v36; // [rsp+E8h] [rbp+7Fh]

  v5 = 1;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v36 = *(_QWORD *)(a2 + 816) + 1LL;
  v34 = *(_DWORD *)(a2 + 788) + 1;
  if ( !gDeviceArbitrationType )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(
      0xFFFFF78000000004uLL,
      (LARGE_INTEGER)v7.QuadPart,
      (LARGE_INTEGER)v9.QuadPart);
  v11 = RIMGetPointerInputType(a2);
  if ( v11 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v31, a2);
    v13 = *(_QWORD *)(active + 16);
    v29 = *(_OWORD *)active;
    v30 = v13;
    while ( 1 )
    {
      v14 = RIMCmActiveContactsEnd(v33, a2);
      v15 = *(_OWORD *)v14;
      v16 = *(_QWORD *)(v14 + 16);
      v17 = *(_QWORD *)v14;
      v32 = v16;
      v31 = v15;
      if ( (_QWORD)v29 == v17 && DWORD2(v29) == DWORD2(v31) && v30 == v32 )
        break;
      v18 = (_DWORD *)(v30 - 16);
      if ( (*(_DWORD *)(v30 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v19 = v18[13], (unsigned int)v10 <= v19 + 500)
          || !v19 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v18 + 662, a2, a3, 0) )
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
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 4;
              WPP_RECORDER_SF_dDD(
                v21,
                v20,
                v22,
                16,
                (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids,
                *v18,
                v18[2],
                v18[665]);
            }
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v18, v36, v34, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v29);
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
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v26, 1, 17, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
          }
          return 0;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v26, 1, 18, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v36, v34, 1);
LABEL_36:
        RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v36, v34);
        v5 = RIMCompletePointerDeviceFrame(a1, *(struct RIMDEV **)(a2 + 16));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_D((_DWORD)gRimLog, v28, 1, 20, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids, v5);
        }
        return v5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v25, 1, 19, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
      }
    }
    if ( !v6 )
      return v5;
    goto LABEL_36;
  }
  return v5;
}
