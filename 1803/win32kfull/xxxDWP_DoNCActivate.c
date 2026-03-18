/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00C2AA8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C01E2A70 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncActivationChange @ 0x1C00C2C1C (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00C2CC0 (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00C3220 (GetWindowBorders.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(ULONG_PTR a1, char a2, __int64 a3)
{
  _BOOL8 v5; // rcx
  _BYTE *v6; // rdx
  char v7; // r8
  __int16 v8; // di
  __int64 v9; // rbp
  HDC DCEx; // rsi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v16; // rax
  unsigned int WindowBorders; // eax

  v5 = (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow();
  SetOrClrWF(v5, a1, 64LL, 1LL);
  if ( a3 != -1 )
  {
    v6 = *(_BYTE **)(a1 + 40);
    v7 = v6[31];
    if ( (v7 & 0x10) != 0 && (v6[17] & 1) == 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)(gpsi + 4576LL) != *(_DWORD *)(gpsi + 4580LL)
        || *(_DWORD *)(gpsi + 4604LL) != *(_DWORD *)(gpsi + 4644LL) )
      {
        v8 = 4108;
      }
      if ( (v7 & 0x20) == 0 && (v6[30] & 4) != 0 && *(_DWORD *)(gpsi + 4608LL) != *(_DWORD *)(gpsi + 4612LL) )
        v8 |= 0x8000u;
      if ( v8 )
      {
        v9 = UserValidateCopyRgn(a3);
        DCEx = (HDC)_GetDCEx(a1, v9, 65537LL);
        if ( DCEx )
        {
          v11 = *(_QWORD *)(a1 + 40);
          if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v11 + 28), *(unsigned int *)(v11 + 24));
            xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar(a1, DCEx);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v9);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v16 = (void *)ReferenceDwmApiPort(v14, v13, v15);
      return DwmAsyncActivationChange(v16);
    }
  }
  return result;
}
