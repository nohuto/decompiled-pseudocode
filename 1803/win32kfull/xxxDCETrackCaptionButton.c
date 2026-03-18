/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C000B108
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000AF90 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     DwmSyncHitTestQuery @ 0x1C0056D80 (DwmSyncHitTestQuery.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0060550 (xxxSetCapture.c)
 *     xxxMNCanClose @ 0x1C00C3104 (xxxMNCanClose.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 a1, unsigned int a2)
{
  unsigned __int16 v4; // si
  int v5; // r12d
  unsigned __int16 v6; // r15
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // di
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  void *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+50h] [rbp-19h] BYREF
  __int64 v26; // [rsp+58h] [rbp-11h]
  __int64 v27[12]; // [rsp+60h] [rbp-9h] BYREF
  int v28; // [rsp+D8h] [rbp+6Fh]
  __int64 v29; // [rsp+E0h] [rbp+77h] BYREF
  BOOL v30; // [rsp+E8h] [rbp+7Fh]

  memset(v27, 0, 0x30uLL);
  v4 = 0;
  LOWORD(v30) = 0;
  v5 = 0;
  v28 = 0;
  v6 = 0;
  LODWORD(v29) = a2;
  v26 = gptiCurrent;
  LODWORD(v25) = 1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  v7 = (void *)((__int64 (*)(void))ReferenceDwmApiPort)();
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  DwmSyncHitTestQuery(v7, 1LL, 0LL, a2, (__int64)&v29, (__int64)&v25);
  EnterCrit(0LL, 1LL);
  if ( !(_DWORD)v25 )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v5 = 2;
    v6 = 1344;
    goto LABEL_42;
  }
  if ( a2 == 9 )
  {
    v23 = *(_QWORD *)(a1 + 40);
    v6 = 1312;
    if ( (*(_BYTE *)(v23 + 30) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v23 + 31) & 1) != 0 )
        v4 = -3808;
      else
        v4 = -4048;
      goto LABEL_8;
    }
    goto LABEL_46;
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
LABEL_46:
      v12 = v30;
      goto LABEL_9;
    }
LABEL_42:
    if ( v5 == 2 )
    {
      v24 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v24 + 30) & 2) != 0 )
      {
        v4 = -3808;
        if ( (*(_BYTE *)(v24 + 31) & 0x20) == 0 )
          v4 = -4064;
        goto LABEL_8;
      }
    }
    goto LABEL_46;
  }
  v6 = 1296;
  if ( !(unsigned int)xxxMNCanClose(a1, 61824LL) )
    goto LABEL_46;
  v4 = -4000;
LABEL_8:
  v30 = 1;
  v12 = 1;
  SetOrClrWF(1LL, a1, v6, 1LL);
  xxxWindowEvent(0x800Au, 0);
LABEL_9:
  xxxSetCapture(a1);
  v13 = v29;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v27, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)v27, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(v26 + 480) |= 0x8000u;
        xxxDispatchMessage(v27);
        *(_DWORD *)(v26 + 480) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_25;
    }
    if ( LODWORD(v27[1]) != 514 )
    {
      if ( LODWORD(v27[1]) == 512 && v4 )
      {
        if ( gdwInAtomicOperation )
        {
          v15 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v18 = (void *)ReferenceDwmApiPort(v15, gdwInAtomicOperation, 0LL);
        UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
        DwmSyncHitTestQuery(v18, v27[2], v27[3], a2, (__int64)&v29, (__int64)&v25);
        EnterCrit(0LL, 1LL);
        v13 = v29;
        v12 = v30;
        if ( v30 != ((_DWORD)v29 == a2) )
        {
          v12 = (_DWORD)v29 == a2;
          v30 = v29 == a2;
          SetOrClrWF((_DWORD)v29 == a2, a1, v6, 1LL);
          xxxWindowEvent(0x800Au, 0);
        }
      }
LABEL_25:
      v16 = v28;
      continue;
    }
    xxxReleaseCapture(v15, v14, 0LL);
    v16 = 1;
    v28 = 1;
  }
  while ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) && !v16 );
  if ( !v4 )
    return 0LL;
  if ( v12 && v4 != 0xF180 )
  {
    SetOrClrWF(0LL, a1, v6, 1LL);
    xxxWindowEvent(0x800Au, 0);
  }
  if ( !v28 || v13 != a2 )
    return 0;
  return v4;
}
