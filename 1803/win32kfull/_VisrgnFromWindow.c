/*
 * XREFs of _VisrgnFromWindow @ 0x1C01B1B64
 * Callers:
 *     UserVisrgnFromHwnd @ 0x1C01B1B24 (UserVisrgnFromHwnd.c)
 * Callees:
 *     CalcVisRgn @ 0x1C002B5D0 (CalcVisRgn.c)
 *     _GhostWindowFromHungWindow @ 0x1C00710D0 (_GhostWindowFromHungWindow.c)
 *     IsWindowContentProtected @ 0x1C00C4740 (IsWindowContentProtected.c)
 */

__int64 __fastcall VisrgnFromWindow(__int64 a1, int a2, HRGN *a3)
{
  __int64 v6; // rdx
  char v8; // cl
  unsigned int v9; // r9d

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) != 0
    && !GhostWindowFromHungWindow(a1)
    && !(unsigned int)IsWindowContentProtected(a1) )
  {
    v6 = *(_QWORD *)(a1 + 40);
LABEL_5:
    SetRectRgnIndirect(*a3, v6 + 88);
    return 1LL;
  }
  v6 = *(_QWORD *)(a1 + 40);
  v8 = *(_BYTE *)(v6 + 31);
  if ( (*(_BYTE *)(v6 + 26) & 0x20) != 0 )
  {
    if ( (v8 & 0x10) != 0 )
      goto LABEL_5;
    return 0LL;
  }
  else
  {
    v9 = (a2 != 0 ? 17409 : 134218753) | 0x10;
    if ( (v8 & 4) == 0 )
      v9 = a2 != 0 ? 17409 : 134218753;
    return CalcVisRgn(a3, a1, (struct tagWND *)a1, v9);
  }
}
