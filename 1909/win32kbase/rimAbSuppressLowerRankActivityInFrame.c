/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C013951C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0139BA8 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C013881C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0138A68 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0138B10 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C013901C (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C013A26C (WPP_RECORDER_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C013F450 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0152AF4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C0152F34 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C0152F88 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0159404 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C0159498 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01594EC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0159590 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0159964 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01599B8 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // r12d
  unsigned __int64 v7; // r15
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v26; // edi
  __int64 v27; // rcx
  int v28; // edx
  __int128 v29; // [rsp+48h] [rbp-19h] BYREF
  __int64 v30; // [rsp+58h] [rbp-9h]
  __int128 v31; // [rsp+60h] [rbp-1h] BYREF
  __int64 v32; // [rsp+70h] [rbp+Fh]
  _BYTE v33[32]; // [rsp+78h] [rbp+17h] BYREF
  int v34; // [rsp+D0h] [rbp+6Fh]

  v4 = *(_QWORD *)(a2 + 816);
  v34 = *(_DWORD *)(a2 + 788);
  v5 = 0;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3);
  active = RIMCmActiveContactsBeginNoButton(&v31, a2);
  v9 = *(_QWORD *)(active + 16);
  v29 = *(_OWORD *)active;
  v30 = v9;
  while ( 1 )
  {
    v10 = RIMCmActiveContactsEnd(v33, a2);
    v11 = *(_OWORD *)v10;
    v12 = *(_QWORD *)(v10 + 16);
    v13 = *(_QWORD *)v10;
    v32 = v12;
    v31 = v11;
    if ( (_QWORD)v29 == v13 && DWORD2(v29) == DWORD2(v31) && v30 == v32 )
      break;
    v14 = *(_DWORD *)(v30 + 16);
    v15 = v30 - 16;
    if ( (v14 & 2) == 0 )
      __int2c();
    if ( (v14 & 4) != 0 )
      __int2c();
    if ( (*(_DWORD *)(v15 + 2340) & 1) != 0 && (*(_DWORD *)(v15 + 2420) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v16 = *(_DWORD *)(v15 + 52), (unsigned int)v7 <= v16 + 500)
        || !v16 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, v15 + 2408)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, v15 + 2408)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v15, v17) )
        {
          RIMCmAddContactSuppressionReasons(a2, v15, 1LL);
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v15) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 4;
              WPP_RECORDER_SF_dDD(
                v19,
                v18,
                v20,
                25,
                (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids,
                *(_DWORD *)v15,
                *(_DWORD *)(v15 + 8),
                *(_DWORD *)(v15 + 2660));
            }
            RIMSetContactEndState(a2, v15, v4, v34, 1);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 4;
              WPP_RECORDER_SF_dDD(
                v19,
                v18,
                v20,
                26,
                (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids,
                *(_DWORD *)v15,
                *(_DWORD *)(v15 + 8),
                *(_DWORD *)(v15 + 2660));
            }
            *(_DWORD *)(v15 + 2340) &= ~1u;
            if ( (*(_DWORD *)(v15 + 32) & 8) != 0 )
            {
              if ( *(_QWORD *)(a2 + 960) != v15 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
              RIMResetPointerDevicePrimaryContact(a2);
              if ( (*(_DWORD *)(a2 + 312) & 1) != 0 )
              {
                if ( *(_QWORD *)(a1 + 480) != a2 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
          v5 = 1;
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v29);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v26 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v27, ButtonContact, 1LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v28, 1, 27, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v26, v4, v34, 1);
  }
  return result;
}
