/*
 * XREFs of SetMinimize @ 0x1C00B8C08
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DecVisWindows @ 0x1C007A0CC (DecVisWindows.c)
 *     IncVisWindows @ 0x1C007A3C8 (IncVisWindows.c)
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
