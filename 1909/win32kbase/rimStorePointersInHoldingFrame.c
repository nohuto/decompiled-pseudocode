/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C014DDDC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C014CCB0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C005C344 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0159404 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C0159498 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01594EC (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C0159964 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  __int64 v10; // r8
  void *v11; // rax
  bool v13; // zf
  __int64 v14; // rdx
  __int64 ButtonContact; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  _OWORD *v18; // rax
  _OWORD *v19; // rax
  int v20; // ecx
  int v21; // edx
  __int64 active; // rax
  __int64 v23; // xmm1_8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int128 v29; // xmm1
  __int64 v30; // xmm0_8
  __int64 v31; // rax
  int v32; // eax
  _OWORD *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  _OWORD *v36; // rax
  _OWORD *v37; // rsi
  __int128 v38; // [rsp+48h] [rbp-9h] BYREF
  __int64 v39; // [rsp+58h] [rbp+7h]
  __int128 v40; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+70h] [rbp+1Fh]
  _BYTE v42[32]; // [rsp+78h] [rbp+27h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !(_DWORD)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( (_DWORD)v6 && (v8 = 192 * v6, (unsigned __int64)(192 * v6) <= 0xFFFFFFFF) && (_DWORD)v8 )
    v11 = Win32AllocPoolZInit((unsigned int)v8, 1701868370LL);
  else
    v11 = 0LL;
  HoldingFrame[9] = v11;
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 47, (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
    }
    return 0LL;
  }
  v13 = *((_DWORD *)HoldingFrame + 11) == 0;
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    v17 = *(unsigned int *)(ButtonContact + 32);
    if ( (v17 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v16);
      v17 = *(unsigned int *)(ButtonContact + 32);
    }
    if ( (v17 & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v16);
    if ( (*(_DWORD *)(ButtonContact + 2420) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v16);
      v18 = (_OWORD *)HoldingFrame[9];
      HoldingFrame[10] = v18;
    }
    else
    {
      v18 = (_OWORD *)HoldingFrame[9];
    }
    *v18 = *(_OWORD *)(ButtonContact + 2392);
    v18[1] = *(_OWORD *)(ButtonContact + 2408);
    v18[2] = *(_OWORD *)(ButtonContact + 2424);
    v18[3] = *(_OWORD *)(ButtonContact + 2440);
    v18[4] = *(_OWORD *)(ButtonContact + 2456);
    v18[5] = *(_OWORD *)(ButtonContact + 2472);
    v18[6] = *(_OWORD *)(ButtonContact + 2488);
    v19 = v18 + 8;
    *(v19 - 1) = *(_OWORD *)(ButtonContact + 2504);
    *v19 = *(_OWORD *)(ButtonContact + 2520);
    v19[1] = *(_OWORD *)(ButtonContact + 2536);
    v19[2] = *(_OWORD *)(ButtonContact + 2552);
    v19[3] = *(_OWORD *)(ButtonContact + 2568);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v40, v4);
    v23 = *(_QWORD *)(active + 16);
    v38 = *(_OWORD *)active;
    v39 = v23;
    while ( 1 )
    {
      v24 = RIMCmActiveContactsEnd(v42, v4);
      v28 = v39;
      v29 = *(_OWORD *)v24;
      v30 = *(_QWORD *)(v24 + 16);
      v31 = *(_QWORD *)v24;
      v41 = v30;
      v40 = v29;
      if ( (_QWORD)v38 == v31 && DWORD2(v38) == DWORD2(v40) && v39 == v41 )
        break;
      v32 = *(_DWORD *)(v39 + 16);
      v33 = (_OWORD *)(v39 + 2376);
      if ( (v32 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
        v32 = *(_DWORD *)(v28 + 16);
      }
      if ( (v32 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      if ( (*(_DWORD *)(v28 + 2324) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v28 + 2404) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
          v34 = *((unsigned int *)HoldingFrame + 11);
          v35 = HoldingFrame[9];
          HoldingFrame[10] = v35 + 192 * v34;
        }
        else
        {
          LODWORD(v34) = *((_DWORD *)HoldingFrame + 11);
          v35 = HoldingFrame[9];
        }
        v36 = (_OWORD *)(v35 + 192LL * (unsigned int)v34);
        *v36 = *v33;
        v36[1] = *(_OWORD *)(v28 + 2392);
        v36[2] = *(_OWORD *)(v28 + 2408);
        v36[3] = *(_OWORD *)(v28 + 2424);
        v36[4] = *(_OWORD *)(v28 + 2440);
        v36[5] = *(_OWORD *)(v28 + 2456);
        v36[6] = *(_OWORD *)(v28 + 2472);
        v36 += 8;
        v37 = v33 + 8;
        *(v36 - 1) = *(_OWORD *)(v28 + 2488);
        *v36 = *v37;
        v36[1] = v37[1];
        v36[2] = v37[2];
        v36[3] = v37[3];
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v38);
    }
  }
  v20 = *((_DWORD *)HoldingFrame + 11);
  v21 = *((_DWORD *)HoldingFrame + 10);
  if ( v20 != v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gRimLog,
        v21,
        1,
        48,
        (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
        v20,
        *((_DWORD *)HoldingFrame + 10));
    }
    return 0LL;
  }
  return 1LL;
}
