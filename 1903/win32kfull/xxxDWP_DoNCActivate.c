/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C000C8BC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     DwmAsyncActivationChange @ 0x1C000CA38 (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C000CAEC (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     GetWindowBorders @ 0x1C00905B4 (GetWindowBorders.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *a1, char a2, __int64 a3)
{
  _BOOL8 v5; // rcx
  __int64 result; // rax
  void *v7; // rax
  _BYTE *v8; // rdx
  char v9; // r8
  __int16 v10; // di
  __int64 v11; // rbp
  __int64 DCEx; // rsi
  __int64 v13; // rax
  unsigned int WindowBorders; // eax

  v5 = (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow();
  SetOrClrWF(v5, a1, 64LL, 1LL);
  if ( a3 != -1 )
  {
    v8 = (_BYTE *)*((_QWORD *)a1 + 5);
    v9 = v8[31];
    if ( (v9 & 0x10) != 0 && (v8[17] & 1) == 0 )
    {
      v10 = 0;
      if ( *(_DWORD *)(gpsi + 4576LL) != *(_DWORD *)(gpsi + 4580LL)
        || *(_DWORD *)(gpsi + 4604LL) != *(_DWORD *)(gpsi + 4644LL) )
      {
        v10 = 4108;
      }
      if ( (v9 & 0x20) == 0 && (v8[30] & 4) != 0 && *(_DWORD *)(gpsi + 4608LL) != *(_DWORD *)(gpsi + 4612LL) )
        v10 |= 0x8000u;
      if ( v10 )
      {
        v11 = UserValidateCopyRgn(a3);
        DCEx = _GetDCEx(a1, v11, 65537LL);
        if ( DCEx )
        {
          v13 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v13 + 16) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v13 + 28), *(unsigned int *)(v13 + 24));
            xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar(a1);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v11);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v7 = (void *)ReferenceDwmApiPort();
      return DwmAsyncActivationChange(v7);
    }
  }
  return result;
}
