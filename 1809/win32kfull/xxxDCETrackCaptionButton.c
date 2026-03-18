/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C00BAAFC
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BC7F0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxMNCanClose @ 0x1C0020A70 (xxxMNCanClose.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     DwmSyncHitTestQuery @ 0x1C00B95F4 (DwmSyncHitTestQuery.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00D1A24 (xxxSetCapture.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned __int16 v5; // si
  int v6; // r12d
  unsigned __int16 v7; // r15
  __int64 v8; // rbx
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // di
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // edx
  __int64 v21; // rdx
  __int64 v22; // rbx
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int16 v28; // ax
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  __int64 v34; // [rsp+58h] [rbp-11h]
  __int64 v35[12]; // [rsp+60h] [rbp-9h] BYREF
  int v36; // [rsp+D8h] [rbp+6Fh]
  __int16 v37; // [rsp+E0h] [rbp+77h]
  __int64 v38; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v35, 0, 0x30uLL);
  v5 = 0;
  v37 = 0;
  v6 = 0;
  v36 = 0;
  v7 = 0;
  LODWORD(v38) = a2;
  v34 = gptiCurrent;
  LODWORD(v33) = 1;
  v8 = *(_QWORD *)(gptiCurrent + 776LL);
  if ( gdwInAtomicOperation )
  {
    v4 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v9 = (void *)ReferenceDwmApiPort(v4, gdwInAtomicOperation);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  DwmSyncHitTestQuery(v9, *a1, 512, v8, 1LL, 0LL, a2, &v38, &v33);
  EnterCrit(0LL, 1LL);
  if ( !(_DWORD)v33 )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v6 = 2;
    v7 = 1344;
    goto LABEL_45;
  }
  if ( a2 == 9 )
  {
    v30 = a1[5];
    v6 = 3;
    v7 = 1312;
    if ( (*(_BYTE *)(v30 + 30) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v30 + 31) & 1) != 0 )
        v5 = -3808;
      else
        v5 = -4048;
      goto LABEL_8;
    }
    goto LABEL_49;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v6 = 4;
      v7 = 1408;
      if ( (*(_BYTE *)(a1[5] + 25) & 4) != 0 )
      {
        v5 = -3712;
        goto LABEL_8;
      }
LABEL_49:
      v14 = 0;
      v6 = 0;
      goto LABEL_9;
    }
LABEL_45:
    if ( v6 == 2 )
    {
      v31 = a1[5];
      if ( (*(_BYTE *)(v31 + 30) & 2) != 0 )
      {
        v5 = -3808;
        if ( (*(_BYTE *)(v31 + 31) & 0x20) == 0 )
          v5 = -4064;
        goto LABEL_8;
      }
    }
    goto LABEL_49;
  }
  v6 = 5;
  v7 = 1296;
  if ( !(unsigned int)xxxMNCanClose((__int64)a1, 61824LL) )
    goto LABEL_49;
  v5 = -4000;
LABEL_8:
  v37 = 1;
  v14 = 1;
  SetOrClrWF(1, (__int64)a1, v7, 1);
  xxxWindowEvent(0x800Au, (__int64)a1, -2, v6, 0);
LABEL_9:
  xxxSetCapture(a1);
  v15 = v38;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v35, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)v35, 0, 577, 599, 1, 0) )
      {
        v32 = v34;
        *(_DWORD *)(v34 + 488) |= 0x8000u;
        xxxDispatchMessage((__int64)v35, v21);
        *(_DWORD *)(v32 + 488) &= ~0x8000u;
        v14 = v37;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_25;
    }
    if ( LODWORD(v35[1]) != 514 )
    {
      if ( LODWORD(v35[1]) == 512 && v5 )
      {
        v22 = *(_QWORD *)(gptiCurrent + 776LL);
        if ( gdwInAtomicOperation )
        {
          v17 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v23 = (void *)ReferenceDwmApiPort(v17, gdwInAtomicOperation);
        UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
        DwmSyncHitTestQuery(v23, *a1, 512, v22, v35[2], v35[3], a2, &v38, &v33);
        EnterCrit(0LL, 1LL);
        v15 = v38;
        if ( (_DWORD)v38 == a2 )
        {
          v28 = 1;
          v29 = 1;
        }
        else
        {
          v28 = 0;
          v29 = 0;
        }
        v14 = v37;
        if ( v37 != v28 )
        {
          v14 = v28;
          v37 = v28;
          SetOrClrWF(v29, (__int64)a1, v7, 1);
          xxxWindowEvent(0x800Au, (__int64)a1, -2, v6, 0);
        }
      }
LABEL_25:
      v19 = v36;
      continue;
    }
    xxxReleaseCapture(v17, v16, 0LL, v18);
    v19 = 1;
    v36 = 1;
  }
  while ( a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) && !v19 );
  if ( !v5 )
    return 0LL;
  if ( v14 && v5 != 0xF180 )
  {
    SetOrClrWF(0, (__int64)a1, v7, 1);
    xxxWindowEvent(0x800Au, (__int64)a1, -2, v6, 0);
  }
  if ( !v36 || v15 != a2 )
    return 0;
  return v5;
}
