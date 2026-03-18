/*
 * XREFs of UpdateRedirectedDCE @ 0x1C000E950
 * Callers:
 *     UnredirectDCEs @ 0x1C000E880 (UnredirectDCEs.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0010724 (ChangeRedirectionParentInDCEs.c)
 *     RedirectDCEs @ 0x1C0042500 (RedirectDCEs.c)
 * Callees:
 *     GreHintDCWnd @ 0x1C000EAA0 (GreHintDCWnd.c)
 *     RevalidateDCE @ 0x1C000EC80 (RevalidateDCE.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     GreSelectRedirectionBitmap @ 0x1C00553A0 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  __int64 RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rdx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848LL);
  v6 = (_QWORD *)StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = GetRedirectionBitmap(StyleWindow);
  if ( !(unsigned int)GreSelectRedirectionBitmap(*(_QWORD *)(a1 + 8), RedirectionBitmap) )
    GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
  v7 = *(_DWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v9 = v7 | 0x4000;
    v10 = 5LL;
  }
  else
  {
    v9 = v7 & 0xFFFFBFFF;
    v10 = 6LL;
  }
  *(_DWORD *)(a1 + 64) = v9;
  result = GreGetBounds(v8, 0LL, v10);
  if ( *(_QWORD **)(a1 + 32) != v6 )
  {
    v12 = *(_QWORD **)(a1 + 16);
    v13 = *(_QWORD *)(a1 + 8);
    a2 = 1;
    *(_QWORD *)(a1 + 32) = v6;
    result = GreHintDCWnd(v13, *v12, 0, 0, 0);
    if ( !v6 )
      return RevalidateDCE(a1);
    v15 = v6[5];
    if ( (*(_BYTE *)(v15 + 26) & 8) != 0 )
    {
      LOBYTE(v14) = ~*(_BYTE *)(v15 + 27);
      result = GreHintDCWnd(
                 *(_QWORD *)(a1 + 8),
                 **(_QWORD **)(a1 + 16),
                 *v6,
                 (v14 >> 1) & 1,
                 (*(_WORD *)(v15 + 42) & 0x2FFF) == 669);
    }
  }
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( (_QWORD *)result == v6 )
      *(_QWORD *)(a1 + 24) = result;
  }
  if ( a2 )
    return RevalidateDCE(a1);
  return result;
}
