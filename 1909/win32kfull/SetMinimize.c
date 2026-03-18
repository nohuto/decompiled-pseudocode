/*
 * XREFs of SetMinimize @ 0x1C0014C84
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IncVisWindows @ 0x1C0027544 (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DecVisWindows @ 0x1C00F8FD8 (DecVisWindows.c)
 */

__int64 __fastcall SetMinimize(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      DecVisWindows();
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
