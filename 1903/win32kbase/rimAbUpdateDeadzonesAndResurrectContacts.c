/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013BEAC
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C013C218 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C013ADD4 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C013AF10 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C013B180 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C013B5BC (rimAbRemoveGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C013C8DC (WPP_RECORDER_SF_dDD.c)
 *     RIMCmActiveContactsBegin @ 0x1C015B578 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C015B690 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C015B6E4 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C015BBB0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C015BBDC (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C015BC08 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C015BC28 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C015BC58 (RIMCmRemoveContactSuppressionReasons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int128 v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 v34; // [rsp+58h] [rbp-19h]
  __int128 v35; // [rsp+60h] [rbp-11h]
  __int64 v36; // [rsp+70h] [rbp-1h]
  __int128 v37; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v38[24]; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v39[24]; // [rsp+A0h] [rbp+2Fh] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  active = RIMCmActiveContactsBegin(v38, v4);
  v7 = *(_QWORD *)(active + 16);
  v33 = *(_OWORD *)active;
  v34 = v7;
  while ( 1 )
  {
    v8 = RIMCmActiveContactsEnd(v39, v4);
    v12 = *(_OWORD *)v8;
    v13 = *(_QWORD *)(v8 + 16);
    v14 = *(_QWORD *)v8;
    v36 = v13;
    v35 = v12;
    if ( (_QWORD)v33 == v14 )
    {
      result = DWORD2(v35);
      if ( DWORD2(v33) == DWORD2(v35) && v34 == v36 )
        return result;
    }
    v16 = v34 - 16;
    if ( (*(_DWORD *)(v34 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( (*(_DWORD *)(v16 + 2340) & 1) != 0 )
    {
      v17 = *(unsigned int *)(v4 + 24);
      if ( (unsigned int)(v17 - 5) > 1 )
      {
        if ( (unsigned int)(v17 - 1) <= 3 )
        {
          if ( (*(_DWORD *)(v16 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v9, v11);
          v19 = *(_QWORD *)(v16 + 72);
          v37 = *(_OWORD *)(*(_QWORD *)(a2 + 480) + 176LL);
          if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v37, v19) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 22, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
            }
            if ( !*(_DWORD *)(a1 + 492) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
            *(_DWORD *)(a1 + 504) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                  + 250;
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v16 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v9, v11);
        if ( (*(_DWORD *)(v16 + 2420) & 2) != 0 )
        {
          if ( *(_DWORD *)(a1 + 492) )
          {
            rimAbRemoveGlobalPenDeadzone(a1, v9, v11);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 21, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
            }
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(a1, *(_QWORD *)(v16 + 72), v11);
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v16) )
      {
        v26 = *(unsigned int *)(v16 + 2420);
        if ( (v26 & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) && (*(_DWORD *)(v16 + 32) & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v23, v25);
LABEL_41:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 4;
            WPP_RECORDER_SF_dDD(
              v26,
              v23,
              v25,
              24,
              (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids,
              *(_DWORD *)v16,
              *(_DWORD *)(v16 + 8),
              *(_DWORD *)(v16 + 2660));
          }
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) && (*(_DWORD *)(v16 + 32) & 4) == 0 )
LABEL_49:
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
          *(_DWORD *)(v16 + 2340) &= ~1u;
          goto LABEL_51;
        }
        if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 5) > 1 )
          goto LABEL_41;
        if ( (v26 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v16 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v23, v25);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v4, v16 + 2408) )
            goto LABEL_41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 23, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
          }
        }
        RIMCmRemoveContactSuppressionReasons(v4, v16, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v24)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v16)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v16) )
      {
        goto LABEL_49;
      }
    }
LABEL_51:
    RIMCmActiveContactsNext(v4, &v33);
  }
}
