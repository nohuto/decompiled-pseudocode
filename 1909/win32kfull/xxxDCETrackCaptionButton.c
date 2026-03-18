/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C000C488
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000BC54 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     DwmSyncHitTestQuery @ 0x1C000E2A0 (DwmSyncHitTestQuery.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D290 (xxxSetCapture.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 *     xxxMNCanClose @ 0x1C004A180 (xxxMNCanClose.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 a1, unsigned int a2)
{
  unsigned __int16 v4; // si
  int v5; // r12d
  unsigned __int16 v6; // r15
  void *v7; // rdi
  __int16 v8; // di
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rdi
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h]
  __int64 v22[12]; // [rsp+60h] [rbp-9h] BYREF
  int v23; // [rsp+D8h] [rbp+6Fh]
  __int16 v24; // [rsp+E0h] [rbp+77h]
  __int64 v25; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v22, 0, 0x30uLL);
  v4 = 0;
  v24 = 0;
  v5 = 0;
  v23 = 0;
  v6 = 0;
  LODWORD(v25) = a2;
  v21 = gptiCurrent;
  LODWORD(v20) = 1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  v7 = (void *)((__int64 (*)(void))ReferenceDwmApiPort)();
  UserSessionSwitchLeaveCrit();
  DwmSyncHitTestQuery(v7, 1LL, 0LL, a2, (__int64)&v25, (__int64)&v20);
  EnterCrit(0LL, 1LL);
  if ( !(_DWORD)v20 )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v5 = 2;
    v6 = 1344;
    goto LABEL_37;
  }
  if ( a2 == 9 )
  {
    v14 = *(_QWORD *)(a1 + 40);
    v6 = 1312;
    if ( (*(_BYTE *)(v14 + 30) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v14 + 31) & 1) != 0 )
        v4 = -3808;
      else
        v4 = -4048;
      goto LABEL_8;
    }
    goto LABEL_41;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v6 = 1408;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 4) != 0 )
      {
        v4 = -3712;
        goto LABEL_8;
      }
LABEL_41:
      v8 = 0;
      goto LABEL_9;
    }
LABEL_37:
    if ( v5 == 2 )
    {
      v15 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v15 + 30) & 2) != 0 )
      {
        v4 = -3808;
        if ( (*(_BYTE *)(v15 + 31) & 0x20) == 0 )
          v4 = -4064;
        goto LABEL_8;
      }
    }
    goto LABEL_41;
  }
  v6 = 1296;
  if ( !(unsigned int)xxxMNCanClose(a1, 61824LL) )
    goto LABEL_41;
  v4 = -4000;
LABEL_8:
  v24 = 1;
  v8 = 1;
  SetOrClrWF(1LL, a1, v6, 1LL);
  xxxWindowEvent(0x800Au, 0);
LABEL_9:
  xxxSetCapture(a1);
  v9 = v25;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v22, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)v22, 0, 577, 599, 1, 0) )
      {
        v19 = v21;
        *(_DWORD *)(v21 + 480) |= 0x8000u;
        xxxDispatchMessage(v22);
        *(_DWORD *)(v19 + 480) &= ~0x8000u;
        v8 = v24;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( LODWORD(v22[1]) != 514 )
    {
      if ( LODWORD(v22[1]) == 512 && v4 )
      {
        if ( gdwInAtomicOperation )
        {
          v11 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v16 = (void *)ReferenceDwmApiPort(v11, v10, 0LL);
        UserSessionSwitchLeaveCrit();
        DwmSyncHitTestQuery(v16, v22[2], v22[3], a2, (__int64)&v25, (__int64)&v20);
        EnterCrit(0LL, 1LL);
        v9 = v25;
        if ( (_DWORD)v25 == a2 )
        {
          v17 = 1;
          v18 = 1LL;
        }
        else
        {
          v17 = 0;
          v18 = 0LL;
        }
        v8 = v24;
        if ( v24 != v17 )
        {
          v8 = v17;
          v24 = v17;
          SetOrClrWF(v18, a1, v6, 1LL);
          xxxWindowEvent(0x800Au, 0);
        }
      }
LABEL_23:
      v12 = v23;
      continue;
    }
    xxxReleaseCapture(v11, v10, 0LL);
    v12 = 1;
    v23 = 1;
  }
  while ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) && !v12 );
  if ( !v4 )
    return 0LL;
  if ( v8 && v4 != 0xF180 )
  {
    SetOrClrWF(0LL, a1, v6, 1LL);
    xxxWindowEvent(0x800Au, 0);
  }
  if ( !v23 || v9 != a2 )
    return 0;
  return v4;
}
