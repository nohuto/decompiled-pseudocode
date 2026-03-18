/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C0123E68
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C008966C (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C012E614 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C012EB74 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  __int64 v10; // r8
  void *v12; // rax
  bool v13; // zf
  __int64 v14; // rdx
  __int64 ButtonContact; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  _OWORD *v18; // rcx
  _OWORD *v19; // rcx
  __int64 active; // rax
  __int64 v21; // xmm1_8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int128 v27; // xmm1
  __int64 v28; // xmm0_8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdx
  _OWORD *v34; // rdx
  __int128 v35; // [rsp+48h] [rbp-9h] BYREF
  __int64 v36; // [rsp+58h] [rbp+7h]
  __int128 v37; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+70h] [rbp+1Fh]
  _BYTE v39[32]; // [rsp+78h] [rbp+27h] BYREF

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
  if ( (_DWORD)v6 && (v8 = 168 * v6, v7 = 0xFFFFFFFFLL, (unsigned __int64)(168 * v6) <= 0xFFFFFFFF) && (_DWORD)v8 )
    v12 = Win32AllocPoolZInit((unsigned int)v8, 0x65707352u);
  else
    v12 = 0LL;
  HoldingFrame[9] = v12;
  if ( !v12 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x2Fu, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
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
    *((_QWORD *)v19 + 4) = *(_QWORD *)(ButtonContact + 2552);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v37, v4);
    v21 = *(_QWORD *)(active + 16);
    v35 = *(_OWORD *)active;
    v36 = v21;
    while ( 1 )
    {
      v22 = RIMCmActiveContactsEnd(v39, v4);
      v26 = v36;
      v27 = *(_OWORD *)v22;
      v28 = *(_QWORD *)(v22 + 16);
      v29 = *(_QWORD *)v22;
      v38 = v28;
      v37 = v27;
      if ( (_QWORD)v35 == v29 && DWORD2(v35) == DWORD2(v37) && v36 == v38 )
        break;
      v30 = *(_DWORD *)(v36 + 16);
      v31 = v36 + 2376;
      if ( (v30 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        v30 = *(_DWORD *)(v26 + 16);
      }
      if ( (v30 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
      if ( (*(_DWORD *)(v26 + 2324) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v26 + 2404) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
          v32 = *((unsigned int *)HoldingFrame + 11);
          v33 = HoldingFrame[9];
          HoldingFrame[10] = v33 + 168 * v32;
        }
        else
        {
          LODWORD(v32) = *((_DWORD *)HoldingFrame + 11);
          v33 = HoldingFrame[9];
        }
        v34 = (_OWORD *)(168LL * (unsigned int)v32 + v33);
        *v34 = *(_OWORD *)v31;
        v34[1] = *(_OWORD *)(v26 + 2392);
        v34[2] = *(_OWORD *)(v26 + 2408);
        v34[3] = *(_OWORD *)(v26 + 2424);
        v34[4] = *(_OWORD *)(v26 + 2440);
        v34[5] = *(_OWORD *)(v26 + 2456);
        v34[6] = *(_OWORD *)(v26 + 2472);
        v34 += 8;
        *(v34 - 1) = *(_OWORD *)(v26 + 2488);
        *v34 = *(_OWORD *)(v31 + 128);
        v34[1] = *(_OWORD *)(v31 + 144);
        *((_QWORD *)v34 + 4) = *(_QWORD *)(v31 + 160);
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v35);
    }
  }
  if ( *((_DWORD *)HoldingFrame + 11) != *((_DWORD *)HoldingFrame + 10) )
  {
    WPP_RECORDER_SF_dd(
      gRimLog,
      3u,
      0x16u,
      0x30u,
      (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
      *((_DWORD *)HoldingFrame + 11),
      *((_DWORD *)HoldingFrame + 10));
    return 0LL;
  }
  return 1LL;
}
