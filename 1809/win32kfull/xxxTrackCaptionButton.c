/*
 * XREFs of xxxTrackCaptionButton @ 0x1C022B4B4
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BC7F0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00D1A24 (xxxSetCapture.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C022B200 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(__int64 a1, int a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r14
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  HDC DCEx; // rbx
  __int16 v12; // bx
  int v13; // eax
  HDC v14; // rbx
  __int64 v15; // rdx
  HDC v16; // rbx
  unsigned __int16 v18[2]; // [rsp+38h] [rbp-29h] BYREF
  int v19; // [rsp+3Ch] [rbp-25h]
  int v20; // [rsp+40h] [rbp-21h]
  unsigned int v21; // [rsp+44h] [rbp-1Dh] BYREF
  int v22; // [rsp+48h] [rbp-19h]
  int v23; // [rsp+4Ch] [rbp-15h]
  BOOL v24; // [rsp+50h] [rbp-11h]
  _DWORD v25[4]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v26[12]; // [rsp+68h] [rbp+7h] BYREF

  memset(v26, 0, sizeof(v26));
  v4 = 0;
  LOWORD(v20) = 0;
  v5 = 0;
  v19 = 0;
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
  v10 = xxxCalcCaptionButton(a1, v9, (__int16 *)v18, v25, (int *)&v21, 0);
  v22 = SHIWORD(v10);
  v23 = (__int16)v10;
  if ( v18[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v23, v22, v21 + 1, 1);
    _ReleaseDC(DCEx);
    v20 = 1;
    v12 = 1;
    SetOrClrWF(1, a1, v5, 1);
    xxxWindowEvent(0x800Au, a1, -2, v9, 0);
  }
  else
  {
    v12 = v20;
    v9 = 0;
  }
  xxxSetCapture(a1);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((__int64)v26, 0LL, 0x200u, 0x20Eu, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((__int64)v26, 0LL, 0x241u, 0x257u, 1, 0) )
      {
        *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
        xxxDispatchMessage((__int64)v26, v15);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_25;
    }
    if ( v26[2] != 514 )
    {
      if ( v26[2] == 512 )
      {
        if ( v18[0] )
        {
          v24 = PtInRect(v25, *(unsigned __int64 *)&v26[9]);
          if ( v12 != v24 )
          {
            LOWORD(v20) = v24;
            v14 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            BitBltSysBmp(v14, v23, v22, v21 + (unsigned __int16)v20, 1);
            _ReleaseDC(v14);
            SetOrClrWF(v24, a1, v5, 1);
            xxxWindowEvent(0x800Au, a1, -2, v9, 0);
          }
        }
      }
LABEL_25:
      v13 = v19;
      goto LABEL_26;
    }
    xxxReleaseCapture();
    v13 = 1;
    v19 = 1;
LABEL_26:
    if ( a1 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) || v13 )
      break;
    v12 = v20;
  }
  if ( v18[0] )
  {
    if ( (_WORD)v20 && v18[0] != 0xF180 )
    {
      v16 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v16, v23, v22, v21, 1);
      _ReleaseDC(v16);
      SetOrClrWF(0, a1, v5, 1);
      xxxWindowEvent(0x800Au, a1, -2, v9, 0);
    }
    if ( v19 && PtInRect(v25, *(unsigned __int64 *)&v26[9]) )
      return v18[0];
  }
  return v4;
}
