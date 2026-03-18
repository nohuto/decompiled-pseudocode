/*
 * XREFs of xxxTrackCaptionButton @ 0x1C02444F0
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000C370 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C000D010 (xxxDCETrackCaptionButton.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D4EC (xxxSetCapture.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C024423C (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(struct tagWND *a1, int a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r14
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  unsigned int v9; // esi
  int v10; // eax
  HDC DCEx; // rbx
  __int16 v12; // bx
  int v13; // eax
  HDC v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  HDC v18; // rbx
  unsigned __int16 v20[2]; // [rsp+38h] [rbp-29h] BYREF
  int v21; // [rsp+3Ch] [rbp-25h]
  int v22; // [rsp+40h] [rbp-21h]
  unsigned int v23; // [rsp+44h] [rbp-1Dh] BYREF
  unsigned int v24; // [rsp+48h] [rbp-19h]
  unsigned int v25; // [rsp+4Ch] [rbp-15h]
  BOOL v26; // [rsp+50h] [rbp-11h]
  _QWORD v27[2]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v28[12]; // [rsp+68h] [rbp+7h] BYREF

  memset(v28, 0, sizeof(v28));
  v4 = 0;
  LOWORD(v22) = 0;
  v21 = 0;
  v5 = 0;
  v27[0] = 0LL;
  v27[1] = 0LL;
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
  v10 = xxxCalcCaptionButton((__int64)a1, v9, (__int16 *)v20, v27, (int *)&v23, 0);
  v24 = SHIWORD(v10);
  v25 = (__int16)v10;
  if ( v20[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v25, v24, v23 + 1, 1);
    _ReleaseDC(DCEx);
    v22 = 1;
    v12 = 1;
    SetOrClrWF(1, (__int64)a1, v5, 1);
    xxxWindowEvent(0x800Au, a1, 4294967294LL, v9, 0);
  }
  else
  {
    v12 = v22;
    v9 = 0;
  }
  xxxSetCapture((__int64)a1);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((int)v28, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((int)v28, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000u;
        xxxDispatchMessage((__int64)v28, v15, v16, v17);
        *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_25;
    }
    if ( v28[2] != 514 )
    {
      if ( v28[2] == 512 )
      {
        if ( v20[0] )
        {
          v26 = PtInRect(v27, *(unsigned __int64 *)&v28[9]);
          if ( v12 != v26 )
          {
            LOWORD(v22) = v26;
            v14 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            BitBltSysBmp(v14, v25, v24, v23 + (unsigned __int16)v22, 1);
            _ReleaseDC(v14);
            SetOrClrWF(v26, (__int64)a1, v5, 1);
            xxxWindowEvent(0x800Au, a1, 4294967294LL, v9, 0);
          }
        }
      }
LABEL_25:
      v13 = v21;
      goto LABEL_26;
    }
    xxxReleaseCapture();
    v13 = 1;
    v21 = 1;
LABEL_26:
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) || v13 )
      break;
    v12 = v22;
  }
  if ( v20[0] )
  {
    if ( (_WORD)v22 && v20[0] != 0xF180 )
    {
      v18 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v18, v25, v24, v23, 1);
      _ReleaseDC(v18);
      SetOrClrWF(0, (__int64)a1, v5, 1);
      xxxWindowEvent(0x800Au, a1, 4294967294LL, v9, 0);
    }
    if ( v21 && PtInRect(v27, *(unsigned __int64 *)&v28[9]) )
      return v20[0];
  }
  return v4;
}
