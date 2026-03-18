/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C013B20C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C013B180 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C013B7D4 (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C013B414 (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_SF_dDdddDdd @ 0x1C013CAEC (WPP_RECORDER_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C0140480 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C015B5FC (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C015B690 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C015B6E4 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactSuppressed @ 0x1C015BBDC (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C015BC08 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // r9
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  __int128 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h]
  __int128 v31; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-68h]
  _OWORD v33[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-40h]
  __int128 v35; // [rsp+D8h] [rbp-30h]
  __int128 v36; // [rsp+E8h] [rbp-20h]
  __int128 v37; // [rsp+F8h] [rbp-10h]
  _OWORD v38[2]; // [rsp+108h] [rbp+0h] BYREF

  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v31, a3);
    v9 = *(_QWORD *)(active + 16);
    v29 = *(_OWORD *)active;
    v30 = v9;
    while ( 1 )
    {
      v10 = RIMCmActiveContactsEnd(v38, a3);
      v13 = v30;
      v14 = *(_OWORD *)v10;
      v15 = *(_QWORD *)(v10 + 16);
      v16 = *(_QWORD *)v10;
      v32 = v15;
      v31 = v14;
      if ( (_QWORD)v29 == v16 && DWORD2(v29) == DWORD2(v31) && v30 == v32 )
        return 0LL;
      v17 = *(_DWORD *)(v30 + 16);
      v18 = a4 != 0 ? 2648LL : 2408LL;
      v19 = *(_OWORD *)(v18 + v30);
      v33[0] = *(_OWORD *)(v18 + v30 - 16);
      v33[1] = v19;
      v20 = *(_OWORD *)(v18 + v30 + 32);
      v34 = *(_OWORD *)(v18 + v30 + 16);
      v35 = v20;
      v21 = *(_OWORD *)(v18 + v30 + 64);
      v36 = *(_OWORD *)(v18 + v30 + 48);
      v37 = v21;
      if ( (v17 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11, v12);
        v17 = *(_DWORD *)(v13 + 16);
      }
      if ( (v17 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11, v12);
      if ( (unsigned int)RIMCmIsContactSuppressed(v13 - 16) )
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v13 - 16) )
        {
          goto LABEL_19;
        }
        v22 = *(_QWORD *)(v13 + 56);
        v23 = BYTE12(v33[0]) | 2;
        HIDWORD(v33[0]) |= 2u;
        LODWORD(v33[0]) = 3;
        *((_QWORD *)&v34 + 1) = v22;
      }
      else
      {
        v23 = BYTE12(v33[0]);
      }
      if ( (v23 & 2) != 0 )
      {
        v24 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 312), 4);
        v38[0] = *(_OWORD *)(a3 + 176);
        if ( (unsigned int)rimAbIsPointerSuppressedByPointer(v38, a1, v33, v24) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDdddDdd(*a1, v25, v26, v27);
          return 1LL;
        }
      }
LABEL_19:
      RIMCmActiveContactsNext(a3, &v29);
    }
  }
  return 0LL;
}
