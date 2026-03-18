/*
 * XREFs of ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01CD42C
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0072648 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C000FD34 (CalcForegroundInsertAfter.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 */

__int64 __fastcall CheckOnTop(struct tagTHREADINFO *a1, struct tagWND *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rcx
  struct tagWND *v9; // rdi

  if ( a2 != *(struct tagWND **)(*((_QWORD *)a1 + 54) + 120LL) )
    return 0LL;
  v5 = a3 - 513;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 3;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0LL;
      }
    }
  }
  v8 = *((_QWORD *)a2 + 5);
  if ( (*(_BYTE *)(v8 + 24) & 8) == 0
    && ((*(_WORD *)(v8 + 42) & 0x2FFF) != 0x29D ? (v9 = (struct tagWND *)*((_QWORD *)a2 + 9)) : (v9 = 0LL),
        v9 == CalcForegroundInsertAfter((__int64)a2)) )
  {
    return 0LL;
  }
  else
  {
    return xxxSetWindowPos(a2, 0LL, 0LL, 0LL, 0, 0, 19);
  }
}
