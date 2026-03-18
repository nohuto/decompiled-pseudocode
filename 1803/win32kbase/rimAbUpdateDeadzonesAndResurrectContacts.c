/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00586E4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C00E65D8 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C00E670C (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C00E6958 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C00E6D9C (rimAbRemoveGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00E8014 (WPP_RECORDER_SF_dDD.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0106D7C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C0106D9C (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0106DCC (RIMCmRemoveContactSuppressionReasons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 active; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm2
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  bool result; // al
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int128 v28; // [rsp+48h] [rbp-29h] BYREF
  __int64 v29; // [rsp+58h] [rbp-19h]
  __int128 v30; // [rsp+60h] [rbp-11h]
  __int64 v31; // [rsp+70h] [rbp-1h]
  __int128 v32; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v33[24]; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v34[24]; // [rsp+A0h] [rbp+2Fh] BYREF

  v3 = *(_QWORD *)(a2 + 480);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  active = RIMCmActiveContactsBegin((__int64)v33, v3);
  v6 = *(_QWORD *)(active + 16);
  v28 = *(_OWORD *)active;
  v29 = v6;
  while ( 1 )
  {
    v7 = RIMCmActiveContactsEnd((__int64)v34, v3);
    v10 = *(_OWORD *)v7;
    v11 = *(_QWORD *)(v7 + 16);
    v12 = *(_QWORD *)v7;
    v31 = v11;
    v30 = v10;
    result = (_QWORD)v28 != v12 || DWORD2(v28) != DWORD2(v30) || v29 != v31;
    if ( !result )
      return result;
    v14 = v29 - 16;
    if ( (*(_DWORD *)(v29 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    if ( (*(_DWORD *)(v14 + 2320) & 1) != 0 )
    {
      v15 = *(unsigned int *)(v3 + 24);
      if ( (unsigned int)(v15 - 5) > 1 )
      {
        if ( (unsigned int)(v15 - 1) <= 3 )
        {
          if ( (*(_DWORD *)(v14 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v8);
          v16 = *(_QWORD *)(v14 + 72);
          v32 = *(_OWORD *)(*(_QWORD *)(a2 + 480) + 176LL);
          if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v32, v16) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x15u,
              0x16u,
              (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
            if ( !*(_DWORD *)(a1 + 476) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
            *(_DWORD *)(a1 + 488) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                  + 250;
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v14 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v8);
        if ( (*(_DWORD *)(v14 + 2404) & 2) != 0 )
        {
          if ( *(_DWORD *)(a1 + 476) )
          {
            rimAbRemoveGlobalPenDeadzone(a1, v8);
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x15u,
              0x15u,
              (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(a1, *(_QWORD *)(v14 + 72));
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v14) )
      {
        v22 = *(unsigned int *)(v14 + 2404);
        if ( (v22 & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v14) && (*(_DWORD *)(v14 + 32) & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v19);
LABEL_40:
          WPP_RECORDER_SF_dDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            v21,
            24,
            (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
            *(_DWORD *)v14,
            *(_DWORD *)(v14 + 8),
            *(_DWORD *)(v14 + 2620));
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v14) && (*(_DWORD *)(v14 + 32) & 4) == 0 )
LABEL_46:
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
          *(_DWORD *)(v14 + 2320) &= ~1u;
          goto LABEL_48;
        }
        if ( (unsigned int)(*(_DWORD *)(v3 + 24) - 5) > 1 )
          goto LABEL_40;
        if ( (v22 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v14 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v19);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v3, v14 + 2392) )
            goto LABEL_40;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x15u,
            0x17u,
            (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
        }
        RIMCmRemoveContactSuppressionReasons(v3, v14, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v14) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v20)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v14)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v14) )
      {
        goto LABEL_46;
      }
    }
LABEL_48:
    RIMCmActiveContactsNext(v3, &v28);
  }
}
