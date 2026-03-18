/*
 * XREFs of xxxTrackCaptionButton @ 0x1C0243DB0
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000BC54 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D290 (xxxSetCapture.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0243AFC (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(struct tagWND *a1, int a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r14
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  __int64 DCEx; // rbx
  __int16 v12; // bx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned __int16 v17[2]; // [rsp+38h] [rbp-29h] BYREF
  int v18; // [rsp+3Ch] [rbp-25h]
  int v19; // [rsp+40h] [rbp-21h]
  unsigned int v20; // [rsp+44h] [rbp-1Dh] BYREF
  int v21; // [rsp+48h] [rbp-19h]
  int v22; // [rsp+4Ch] [rbp-15h]
  BOOL v23; // [rsp+50h] [rbp-11h]
  _QWORD v24[2]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v25[12]; // [rsp+68h] [rbp+7h] BYREF

  memset(v25, 0, sizeof(v25));
  v4 = 0;
  LOWORD(v19) = 0;
  v18 = 0;
  v5 = 0;
  v24[0] = 0LL;
  v24[1] = 0LL;
  v6 = a2 - 8;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 11;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = 4;
          v5 = 1408;
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v9 = 5;
        v5 = 1296;
      }
    }
    else
    {
      v9 = 3;
      v5 = 1312;
    }
  }
  else
  {
    v9 = 2;
    v5 = 1344;
  }
  v10 = xxxCalcCaptionButton((__int64)a1, v9, (__int16 *)v17, v24, (int *)&v20, 0);
  v21 = SHIWORD(v10);
  v22 = (__int16)v10;
  if ( v17[0] )
  {
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, (unsigned int)v22, (unsigned int)v21, v20 + 1, 1);
    _ReleaseDC(DCEx);
    v19 = 1;
    v12 = 1;
    SetOrClrWF(1, (__int64)a1, v5, 1);
    xxxWindowEvent(0x800Au, a1, 4294967294LL, v9, 0);
  }
  else
  {
    v12 = v19;
    v9 = 0;
  }
  xxxSetCapture((__int64)a1);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((int)v25, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((int)v25, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000u;
        xxxDispatchMessage((__int64)v25);
        *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_25;
    }
    if ( v25[2] != 514 )
    {
      if ( v25[2] == 512 )
      {
        if ( v17[0] )
        {
          v23 = PtInRect(v24, *(unsigned __int64 *)&v25[9]);
          if ( v12 != v23 )
          {
            LOWORD(v19) = v23;
            v14 = _GetDCEx(a1, 0LL, 65537LL);
            BitBltSysBmp(v14, (unsigned int)v22, (unsigned int)v21, v20 + (unsigned __int16)v19, 1);
            _ReleaseDC(v14);
            SetOrClrWF(v23, (__int64)a1, v5, 1);
            xxxWindowEvent(0x800Au, a1, 4294967294LL, v9, 0);
          }
        }
      }
LABEL_25:
      v13 = v18;
      goto LABEL_26;
    }
    xxxReleaseCapture();
    v13 = 1;
    v18 = 1;
LABEL_26:
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) || v13 )
      break;
    v12 = v19;
  }
  if ( v17[0] )
  {
    if ( (_WORD)v19 && v17[0] != 0xF180 )
    {
      v15 = _GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v15, (unsigned int)v22, (unsigned int)v21, v20, 1);
      _ReleaseDC(v15);
      SetOrClrWF(0, (__int64)a1, v5, 1);
      xxxWindowEvent(0x800Au, a1, 4294967294LL, v9, 0);
    }
    if ( v18 && PtInRect(v24, *(unsigned __int64 *)&v25[9]) )
      return v17[0];
  }
  return v4;
}
