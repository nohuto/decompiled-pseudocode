/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C002B420
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00CCD6C (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetLayeredOrRedirectedParent @ 0x1C002B4C0 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C002B560 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 *     CalcVisRgn @ 0x1C00C4BF0 (CalcVisRgn.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v3; // rdx
  struct tagWND *v4; // rsi
  HRGN v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
  v4 = (struct tagWND *)LayeredOrRedirectedParent;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent, v3) )
      IsMinimizedSausageWindow(v4);
  }
  return CalcVisRgn(&v6);
}
