/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C010FF6C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01101B8 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0110250 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C011073C (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C011178C (WPP_RECORDER_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C01192B0 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C0128414 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C0128468 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C012E614 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C012EB74 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // r12d
  unsigned __int64 v7; // r14
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  int v14; // eax
  struct tagHPD_CONTACT *v15; // rbx
  int v16; // ecx
  __int64 v17; // r8
  int IsContactDeliveringPointerData; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v30; // ebx
  __int64 v31; // rcx
  __int128 v32; // [rsp+48h] [rbp-19h] BYREF
  __int64 v33; // [rsp+58h] [rbp-9h]
  __int128 v34; // [rsp+60h] [rbp-1h] BYREF
  __int64 v35; // [rsp+70h] [rbp+Fh]
  _BYTE v36[32]; // [rsp+78h] [rbp+17h] BYREF
  int v37; // [rsp+D0h] [rbp+6Fh]

  v4 = *(_QWORD *)(a2 + 808);
  v37 = *(_DWORD *)(a2 + 780);
  v5 = 0;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3);
  active = RIMCmActiveContactsBeginNoButton(&v34, a2);
  v9 = *(_QWORD *)(active + 16);
  v32 = *(_OWORD *)active;
  v33 = v9;
  while ( 1 )
  {
    v10 = RIMCmActiveContactsEnd(v36, a2);
    v11 = *(_OWORD *)v10;
    v12 = *(_QWORD *)(v10 + 16);
    v13 = *(_QWORD *)v10;
    v35 = v12;
    v34 = v11;
    if ( (_QWORD)v32 == v13 && DWORD2(v32) == DWORD2(v34) && v33 == v35 )
      break;
    v14 = *(_DWORD *)(v33 + 16);
    v15 = (struct tagHPD_CONTACT *)(v33 - 16);
    if ( (v14 & 2) == 0 )
      __int2c();
    if ( (v14 & 4) != 0 )
      __int2c();
    if ( (*((_DWORD *)v15 + 585) & 1) != 0 && (*((_DWORD *)v15 + 605) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v16 = *((_DWORD *)v15 + 13), (unsigned int)v7 <= v16 + 500)
        || !v16 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, (__int64)v15 + 2408)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, (__int64)v15 + 2408)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, v15, v17) )
        {
          RIMCmAddContactSuppressionReasons(a2, v15, 1LL);
          IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v15);
          v19 = *(_DWORD *)v15;
          v20 = *((_DWORD *)v15 + 659);
          v21 = *((_DWORD *)v15 + 2);
          if ( IsContactDeliveringPointerData )
          {
            WPP_RECORDER_SF_dDD(
              v19,
              v20,
              v21,
              25,
              (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids,
              v19,
              v21,
              *((_DWORD *)v15 + 659));
            RIMSetContactEndState(a2, (_DWORD)v15, v4, v37, 1);
          }
          else
          {
            WPP_RECORDER_SF_dDD(
              v19,
              v20,
              v21,
              26,
              (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids,
              v19,
              v21,
              *((_DWORD *)v15 + 659));
            *((_DWORD *)v15 + 585) &= ~1u;
            if ( (*((_DWORD *)v15 + 8) & 8) != 0 )
            {
              if ( *(struct tagHPD_CONTACT **)(a2 + 952) != v15 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
              RIMResetPointerDevicePrimaryContact(a2);
              if ( (*(_DWORD *)(a2 + 308) & 4) != 0 )
              {
                if ( *(_QWORD *)(a1 + 480) != a2 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
          v5 = 1;
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v32);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v30 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v31, ButtonContact, 1LL);
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x1Bu, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v30, v4, v37, 1);
  }
  return result;
}
