/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00E69E4
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C00E6958 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x1C00E6BF4 (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_SF_dDdddDdd @ 0x1C00E820C (WPP_RECORDER_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C00ECA34 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0106D7C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int128 v13; // xmm2
  __int64 v14; // xmm1_8
  __int64 v15; // rax
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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v31, a3);
    v9 = *(_QWORD *)(active + 16);
    v29 = *(_OWORD *)active;
    v30 = v9;
    while ( 1 )
    {
      v10 = RIMCmActiveContactsEnd((__int64)v38, a3);
      v12 = v30;
      v13 = *(_OWORD *)v10;
      v14 = *(_QWORD *)(v10 + 16);
      v15 = *(_QWORD *)v10;
      v32 = v14;
      v31 = v13;
      if ( (_QWORD)v29 == v15 && DWORD2(v29) == DWORD2(v31) && v30 == v32 )
        return 0LL;
      v17 = *(_DWORD *)(v30 + 16);
      v18 = a4 != 0 ? 2608LL : 2392LL;
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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11);
        v17 = *(_DWORD *)(v12 + 16);
      }
      if ( (v17 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11);
      if ( (unsigned int)RIMCmIsContactSuppressed(v12 - 16) )
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12 - 16) )
        {
          goto LABEL_22;
        }
        v22 = *(_QWORD *)(v12 + 56);
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
        v24 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 276), 6);
        v38[0] = *(_OWORD *)(a3 + 176);
        if ( (unsigned int)rimAbIsPointerSuppressedByPointer(v38, a1, v33, v24) )
        {
          WPP_RECORDER_SF_dDdddDdd(WPP_GLOBAL_Control->DeviceExtension, v25, v26, v27);
          return 1LL;
        }
      }
LABEL_22:
      RIMCmActiveContactsNext(a3, &v29);
    }
  }
  return 0LL;
}
