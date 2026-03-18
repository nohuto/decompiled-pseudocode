/*
 * XREFs of _VisrgnFromWindow @ 0x1C01036E4
 * Callers:
 *     UserVisrgnFromHwnd @ 0x1C01036A0 (UserVisrgnFromHwnd.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C0035084 (_GhostWindowFromHungWindow.c)
 *     CalcVisRgn @ 0x1C00662C0 (CalcVisRgn.c)
 *     IsWindowContentProtected @ 0x1C008DB28 (IsWindowContentProtected.c)
 */

__int64 __fastcall VisrgnFromWindow(__int64 a1, int a2, HRGN *a3)
{
  __int64 v6; // rdx
  char v7; // cl
  unsigned int v8; // r9d

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) != 0
    && !GhostWindowFromHungWindow(a1)
    && !(unsigned int)IsWindowContentProtected(a1) )
  {
    v6 = *(_QWORD *)(a1 + 40);
LABEL_9:
    SetRectRgnIndirect(*a3, v6 + 88);
    return 1LL;
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_BYTE *)(v6 + 31);
  if ( (*(_BYTE *)(v6 + 26) & 0x20) != 0 )
  {
    if ( (v7 & 0x10) != 0 )
      goto LABEL_9;
    return 0LL;
  }
  else
  {
    v8 = (a2 != 0 ? 17409 : 134218753) | 0x10;
    if ( (v7 & 4) == 0 )
      v8 = a2 != 0 ? 17409 : 134218753;
    return CalcVisRgn(a3, a1, (struct tagWND *)a1, v8);
  }
}
