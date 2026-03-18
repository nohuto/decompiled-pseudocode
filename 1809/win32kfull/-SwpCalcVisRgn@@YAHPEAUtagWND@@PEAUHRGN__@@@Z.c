/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0077888
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0038244 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C003C7D0 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x1C0077930 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C00779CC (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 v2; // rax
  int v4; // ebx
  __int64 LayeredOrRedirectedParent; // rax
  struct tagWND *v6; // rsi
  unsigned int v7; // r10d
  __int64 RedirectionBitmap; // rax
  HRGN v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 31) & 0x10) == 0 )
    return 0LL;
  v4 = (4 * (*(_BYTE *)(v2 + 31) & 4)) | 1;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
  v6 = (struct tagWND *)LayeredOrRedirectedParent;
  v7 = v4;
  if ( LayeredOrRedirectedParent )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
    {
      RedirectionBitmap = GetRedirectionBitmap(LayeredOrRedirectedParent);
      v7 = v4;
      if ( RedirectionBitmap )
      {
        if ( !(unsigned int)IsMinimizedSausageWindow(v6) )
          v7 |= 0x4000u;
      }
    }
  }
  return CalcVisRgn(&v10, (__int64)a1, a1, v7);
}
