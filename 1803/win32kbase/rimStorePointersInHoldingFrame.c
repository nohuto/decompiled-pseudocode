/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C00F993C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     rimFindHoldingFrame @ 0x1C0058948 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C0106CD0 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  void *v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  __int64 ButtonContact; // rsi
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  _OWORD *v17; // rcx
  __int64 active; // rax
  __int64 v19; // xmm1_8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int128 v24; // xmm2
  __int64 v25; // xmm1_8
  __int64 v26; // rax
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdx
  _OWORD *v32; // rdx
  __int128 v33; // [rsp+48h] [rbp-9h] BYREF
  __int64 v34; // [rsp+58h] [rbp+7h]
  __int128 v35; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+70h] [rbp+1Fh]
  _BYTE v37[32]; // [rsp+78h] [rbp+27h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !(_DWORD)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( (_DWORD)v6 && (v8 = 168 * v6, v7 = 0xFFFFFFFFLL, (unsigned __int64)(168 * v6) <= 0xFFFFFFFF) && (_DWORD)v8 )
    v11 = Win32AllocPoolZInit((unsigned int)v8, 0x65707352u);
  else
    v11 = 0LL;
  HoldingFrame[9] = v11;
  if ( !v11 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x2Fu,
      (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
    return 0LL;
  }
  v12 = *((_DWORD *)HoldingFrame + 11) == 0;
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    v15 = *(unsigned int *)(ButtonContact + 32);
    if ( (v15 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v13);
      v15 = *(unsigned int *)(ButtonContact + 32);
    }
    if ( (v15 & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v13);
    if ( (*(_DWORD *)(ButtonContact + 2404) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v13);
      v16 = (_OWORD *)HoldingFrame[9];
      HoldingFrame[10] = v16;
    }
    else
    {
      v16 = (_OWORD *)HoldingFrame[9];
    }
    *v16 = *(_OWORD *)(ButtonContact + 2376);
    v16[1] = *(_OWORD *)(ButtonContact + 2392);
    v16[2] = *(_OWORD *)(ButtonContact + 2408);
    v16[3] = *(_OWORD *)(ButtonContact + 2424);
    v16[4] = *(_OWORD *)(ButtonContact + 2440);
    v16[5] = *(_OWORD *)(ButtonContact + 2456);
    v16[6] = *(_OWORD *)(ButtonContact + 2472);
    v17 = v16 + 8;
    *(v17 - 1) = *(_OWORD *)(ButtonContact + 2488);
    *v17 = *(_OWORD *)(ButtonContact + 2504);
    v17[1] = *(_OWORD *)(ButtonContact + 2520);
    *((_QWORD *)v17 + 4) = *(_QWORD *)(ButtonContact + 2536);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v35, v4);
    v19 = *(_QWORD *)(active + 16);
    v33 = *(_OWORD *)active;
    v34 = v19;
    while ( 1 )
    {
      v20 = RIMCmActiveContactsEnd((__int64)v37, v4);
      v23 = v34;
      v24 = *(_OWORD *)v20;
      v25 = *(_QWORD *)(v20 + 16);
      v26 = *(_QWORD *)v20;
      v36 = v25;
      v35 = v24;
      if ( (_QWORD)v33 == v26 && DWORD2(v33) == DWORD2(v35) && v34 == v36 )
        break;
      v28 = *(_DWORD *)(v34 + 16);
      v29 = v34 + 2360;
      if ( (v28 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
        v28 = *(_DWORD *)(v23 + 16);
      }
      if ( (v28 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
      if ( (*(_DWORD *)(v23 + 2304) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v23 + 2388) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
          v30 = *((unsigned int *)HoldingFrame + 11);
          v31 = HoldingFrame[9];
          HoldingFrame[10] = v31 + 168 * v30;
        }
        else
        {
          LODWORD(v30) = *((_DWORD *)HoldingFrame + 11);
          v31 = HoldingFrame[9];
        }
        v32 = (_OWORD *)(168LL * (unsigned int)v30 + v31);
        *v32 = *(_OWORD *)v29;
        v32[1] = *(_OWORD *)(v23 + 2376);
        v32[2] = *(_OWORD *)(v23 + 2392);
        v32[3] = *(_OWORD *)(v23 + 2408);
        v32[4] = *(_OWORD *)(v23 + 2424);
        v32[5] = *(_OWORD *)(v23 + 2440);
        v32[6] = *(_OWORD *)(v23 + 2456);
        v32 += 8;
        *(v32 - 1) = *(_OWORD *)(v23 + 2472);
        *v32 = *(_OWORD *)(v29 + 128);
        v32[1] = *(_OWORD *)(v29 + 144);
        *((_QWORD *)v32 + 4) = *(_QWORD *)(v29 + 160);
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v33);
    }
  }
  if ( *((_DWORD *)HoldingFrame + 11) != *((_DWORD *)HoldingFrame + 10) )
  {
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x30u,
      (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids,
      *((_DWORD *)HoldingFrame + 11),
      *((_DWORD *)HoldingFrame + 10));
    return 0LL;
  }
  return 1LL;
}
