/*
 * XREFs of SetMinimize @ 0x1C0084C28
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C002CB50 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C002CC3C (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 */

char __fastcall SetMinimize(__int64 a1, char a2)
{
  __int64 v3; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      DecVisWindows(a1);
    LOBYTE(v3) = SetOrClrWF(1, a1, 0xF20u, 1);
  }
  else
  {
    SetOrClrWF(0, a1, 0xF20u, 1);
    v3 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v3 + 31) & 0x10) != 0 )
      LOBYTE(v3) = IncVisWindows(a1);
  }
  return v3;
}
