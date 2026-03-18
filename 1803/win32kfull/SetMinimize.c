/*
 * XREFs of SetMinimize @ 0x1C0066E0C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C0075BD4 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0075E9C (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall SetMinimize(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      DecVisWindows(a1);
    return SetOrClrWF(1LL, a1, 3872LL, 1LL);
  }
  else
  {
    SetOrClrWF(0LL, a1, 3872LL, 1LL);
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
