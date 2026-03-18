/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C010FEC0 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C010FFF0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0110250 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C011067C (rimAbRemoveGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C011178C (WPP_RECORDER_SF_dDD.c)
 *     RIMCmActiveContactsBegin @ 0x1C012E594 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C012EBF4 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C012EC20 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C012EC40 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C012EC70 (RIMCmRemoveContactSuppressionReasons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 v32; // [rsp+48h] [rbp-29h] BYREF
  __int64 v33; // [rsp+58h] [rbp-19h]
  __int128 v34; // [rsp+60h] [rbp-11h]
  __int64 v35; // [rsp+70h] [rbp-1h]
  __int128 v36; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v37[24]; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v38[24]; // [rsp+A0h] [rbp+2Fh] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  active = RIMCmActiveContactsBegin(v37, v4);
  v7 = *(_QWORD *)(active + 16);
  v32 = *(_OWORD *)active;
  v33 = v7;
  while ( 1 )
  {
    v8 = RIMCmActiveContactsEnd(v38, v4);
    v12 = *(_OWORD *)v8;
    v13 = *(_QWORD *)(v8 + 16);
    v14 = *(_QWORD *)v8;
    v35 = v13;
    v34 = v12;
    if ( (_QWORD)v32 == v14 )
    {
      result = DWORD2(v34);
      if ( DWORD2(v32) == DWORD2(v34) && v33 == v35 )
        return result;
    }
    v16 = v33 - 16;
    if ( (*(_DWORD *)(v33 + 16) & 2) == 0 )
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
          v18 = *(_QWORD *)(v16 + 72);
          v36 = *(_OWORD *)(*(_QWORD *)(a2 + 480) + 176LL);
          if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v36, v18) )
          {
            WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x16u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
            if ( !*(_DWORD *)(a1 + 492) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
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
            WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x15u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(a1, *(_QWORD *)(v16 + 72), v11);
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v16) )
      {
        v25 = *(unsigned int *)(v16 + 2420);
        if ( (v25 & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) && (*(_DWORD *)(v16 + 32) & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v22, v24);
LABEL_37:
          WPP_RECORDER_SF_dDD(
            v25,
            v22,
            v24,
            24,
            (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids,
            *(_DWORD *)v16,
            *(_DWORD *)(v16 + 8),
            *(_DWORD *)(v16 + 2636));
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) && (*(_DWORD *)(v16 + 32) & 4) == 0 )
LABEL_43:
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
          *(_DWORD *)(v16 + 2340) &= ~1u;
          goto LABEL_45;
        }
        if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 5) > 1 )
          goto LABEL_37;
        if ( (v25 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v16 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v22, v24);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v4, v16 + 2408) )
            goto LABEL_37;
          WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x17u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
        }
        RIMCmRemoveContactSuppressionReasons(v4, v16, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v23)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v16)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v16) )
      {
        goto LABEL_43;
      }
    }
LABEL_45:
    RIMCmActiveContactsNext(v4, &v32);
  }
}
