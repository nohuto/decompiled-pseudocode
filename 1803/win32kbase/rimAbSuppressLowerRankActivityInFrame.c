/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C00E6688 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C00E68B4 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C00E6958 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00E6E60 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00E8014 (WPP_RECORDER_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00EDF20 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C00FFF94 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C00FFFE8 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0106CD0 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // r12d
  unsigned __int64 v6; // r15
  __int64 active; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int128 v10; // xmm2
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  int v14; // eax
  struct tagHPD_CONTACT *v15; // rbx
  int v16; // ecx
  int IsContactDeliveringPointerData; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v27; // ebx
  __int64 v28; // rcx
  __int128 v29; // [rsp+48h] [rbp-29h] BYREF
  __int64 v30; // [rsp+58h] [rbp-19h]
  __int128 v31; // [rsp+60h] [rbp-11h]
  __int64 v32; // [rsp+70h] [rbp-1h]
  _BYTE v33[24]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v34[24]; // [rsp+90h] [rbp+1Fh] BYREF
  int v35; // [rsp+E0h] [rbp+6Fh]

  v3 = *(_QWORD *)(a2 + 776);
  v35 = *(_DWORD *)(a2 + 748);
  v4 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2);
  active = RIMCmActiveContactsBeginNoButton(v33, a2);
  v8 = *(_QWORD *)(active + 16);
  v29 = *(_OWORD *)active;
  v30 = v8;
  while ( 1 )
  {
    v9 = RIMCmActiveContactsEnd((__int64)v34, a2);
    v10 = *(_OWORD *)v9;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = *(_QWORD *)v9;
    v32 = v11;
    v31 = v10;
    if ( (_QWORD)v29 == v12 && DWORD2(v29) == DWORD2(v31) && v30 == v32 )
      break;
    v14 = *(_DWORD *)(v30 + 16);
    v15 = (struct tagHPD_CONTACT *)(v30 - 16);
    if ( (v14 & 2) == 0 )
      __int2c();
    if ( (v14 & 4) != 0 )
      __int2c();
    if ( (*((_DWORD *)v15 + 580) & 1) != 0 && (*((_DWORD *)v15 + 601) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v16 = *((_DWORD *)v15 + 13), (unsigned int)v6 <= v16 + 500)
        || !v16 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, (__int64)v15 + 2392)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, (__int64)v15 + 2392)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, v15) )
        {
          RIMCmAddContactSuppressionReasons(a2, v15, 1LL);
          IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v15);
          v18 = *(_DWORD *)v15;
          v19 = *((_DWORD *)v15 + 655);
          v20 = *((_DWORD *)v15 + 2);
          if ( IsContactDeliveringPointerData )
          {
            WPP_RECORDER_SF_dDD(
              WPP_GLOBAL_Control->DeviceExtension,
              v19,
              v20,
              25,
              (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
              v18,
              v20,
              *((_DWORD *)v15 + 655));
            RIMSetContactEndState(a2, (_DWORD)v15, v3, v35, 1);
          }
          else
          {
            WPP_RECORDER_SF_dDD(
              WPP_GLOBAL_Control->DeviceExtension,
              v19,
              v20,
              26,
              (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
              v18,
              v20,
              *((_DWORD *)v15 + 655));
            *((_DWORD *)v15 + 580) &= ~1u;
            if ( (*((_DWORD *)v15 + 8) & 8) != 0 )
            {
              if ( *(struct tagHPD_CONTACT **)(a2 + 920) != v15 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
              RIMResetPointerDevicePrimaryContact(a2);
              if ( (*(_DWORD *)(a2 + 276) & 4) != 0 )
              {
                if ( *(_QWORD *)(a1 + 464) != a2 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
          v4 = 1;
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v29);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v4);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v27 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v28, ButtonContact, 1LL);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x1Bu,
      (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v27, v3, v35, 1);
  }
  return result;
}
