/*
 * XREFs of TrackMouseEvent @ 0x1C0011C40
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C0011AB0 (NtUserTrackMouseEvent.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 * Callees:
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0011D7C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = *(_QWORD *)(gptiCurrent + 448LL);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( result == *(_QWORD *)(v2 + 184)
      && (v4 = *(_DWORD *)(a1 + 4), (*(_DWORD *)(v2 + 192) != 1) == (((unsigned int)v4 >> 4) & 1)) )
    {
      if ( v4 < 0 )
      {
        if ( (v4 & 2) != 0 )
        {
          *(_DWORD *)(v2 + 48) &= ~0x80u;
          v4 = *(_DWORD *)(a1 + 4);
        }
        if ( (v4 & 1) != 0 && (*(_DWORD *)(v2 + 48) & 0x40) != 0 )
        {
          FindTimer(result, 65530, 2, 1, 0LL);
          *(_DWORD *)(v2 + 48) &= ~0x40u;
        }
      }
      else
      {
        if ( (v4 & 2) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x80u;
          v4 = *(_DWORD *)(a1 + 4);
        }
        if ( (v4 & 1) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x40u;
          v6 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(v2 + 212) = v6;
          if ( ((v6 + 1) & 0xFFFFFFFE) == 0 )
            v6 = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
          *(_DWORD *)(v2 + 212) = v6;
          ResetMouseHover((struct tagDESKTOP *)v2, *(struct tagPOINT *)(*(_QWORD *)(result + 16) + 756LL));
        }
      }
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( (v5 & 0x80000002) == 2 )
        PostMessage(result, ((v5 & 0x10) == 0) | 0x2A2u, 0LL, 0LL);
    }
    return 1LL;
  }
  return result;
}
