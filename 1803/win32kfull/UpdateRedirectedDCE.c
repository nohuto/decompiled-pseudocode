/*
 * XREFs of UpdateRedirectedDCE @ 0x1C00EC310
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C00755E4 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C00760F4 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C00764B0 (RedirectDCEs.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     GreSelectRedirectionBitmap @ 0x1C008C040 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C008C360 (GreHintDCWnd.c)
 *     RevalidateDCE @ 0x1C00EC450 (RevalidateDCE.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  __int64 RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  __int64 *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 result; // rax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rdx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
  v6 = (__int64 *)StyleWindow;
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
  if ( *(__int64 **)(a1 + 32) != v6 )
  {
    v12 = *(__int64 **)(a1 + 16);
    v13 = *(_QWORD *)(a1 + 8);
    a2 = 1;
    *(_QWORD *)(a1 + 32) = v6;
    result = GreHintDCWnd(v13, *v12, 0LL, 0, 0);
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
                 (*(_WORD *)(v15 + 42) & 0x3FFF) == 669);
    }
  }
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( (__int64 *)result == v6 )
      *(_QWORD *)(a1 + 24) = result;
  }
  if ( a2 )
    return RevalidateDCE(a1);
  return result;
}
