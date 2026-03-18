/*
 * XREFs of xxxTrackCaptionButton @ 0x1C0202AE0
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000AF90 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C000B108 (xxxDCETrackCaptionButton.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0060550 (xxxSetCapture.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0202828 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(_QWORD *a1, int a2)
{
  unsigned __int16 v4; // si
  __int16 v5; // r15
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // r14d
  int v11; // eax
  HDC DCEx; // rbx
  __int16 v13; // bx
  int v14; // eax
  unsigned __int16 v15; // di
  HDC v16; // rbx
  HDC v17; // rbx
  __int64 v19; // rdx
  unsigned __int16 v20[2]; // [rsp+38h] [rbp-29h] BYREF
  int v21; // [rsp+3Ch] [rbp-25h]
  int v22; // [rsp+40h] [rbp-21h]
  unsigned int v23; // [rsp+44h] [rbp-1Dh] BYREF
  unsigned int v24; // [rsp+48h] [rbp-19h]
  unsigned int v25; // [rsp+4Ch] [rbp-15h]
  __int64 v26; // [rsp+50h] [rbp-11h]
  _DWORD v27[4]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v28[12]; // [rsp+68h] [rbp+7h] BYREF

  memset(v28, 0, sizeof(v28));
  v4 = 0;
  v21 = 0;
  v22 = 0;
  v5 = 0;
  v6 = gptiCurrent;
  v26 = gptiCurrent;
  v7 = a2 - 8;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 11;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = 4;
          v5 = 1408;
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = 5;
        v5 = 1296;
      }
    }
    else
    {
      v10 = 3;
      v5 = 1312;
    }
  }
  else
  {
    v10 = 2;
    v5 = 1344;
  }
  v11 = xxxCalcCaptionButton(a1, v10, (__int16 *)v20, v27, (int *)&v23, 0);
  v24 = SHIWORD(v11);
  v25 = (__int16)v11;
  if ( v20[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v25, v24, v23 + 1, 1);
    _ReleaseDC(DCEx);
    v22 = 1;
    v13 = 1;
    SetOrClrWF(1, (__int64)a1, v5, 1);
    xxxWindowEvent(0x800Au, (__int64)a1, -2, v10, 0);
  }
  else
  {
    v13 = v22;
    v10 = 0;
  }
  xxxSetCapture((__int64)a1);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((int)v28, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((int)v28, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(v6 + 480) |= 0x8000u;
        xxxDispatchMessage((__int64)v28, v19);
        *(_DWORD *)(v6 + 480) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( v28[2] != 514 )
    {
      if ( v28[2] == 512 && v20[0] )
      {
        v15 = PtInRect(v27, *(unsigned __int64 *)&v28[9]);
        if ( v13 != v15 )
        {
          LOWORD(v22) = v15;
          v16 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          BitBltSysBmp(v16, v25, v24, v15 + v23, 1);
          _ReleaseDC(v16);
          SetOrClrWF(v15, (__int64)a1, v5, 1);
          xxxWindowEvent(0x800Au, (__int64)a1, -2, v10, 0);
        }
        v6 = v26;
      }
LABEL_23:
      v14 = v21;
      goto LABEL_24;
    }
    xxxReleaseCapture();
    v14 = 1;
    v21 = 1;
LABEL_24:
    if ( a1 != *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) || v14 )
      break;
    v13 = v22;
  }
  if ( v20[0] )
  {
    if ( (_WORD)v22 && v20[0] != 0xF180 )
    {
      v17 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v17, v25, v24, v23, 1);
      _ReleaseDC(v17);
      SetOrClrWF(0, (__int64)a1, v5, 1);
      xxxWindowEvent(0x800Au, (__int64)a1, -2, v10, 0);
    }
    if ( v21 && PtInRect(v27, *(unsigned __int64 *)&v28[9]) )
      return v20[0];
  }
  return v4;
}
