/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007B908
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0026F74 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C002B5D0 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x1C007B9C0 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C007BA54 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 v2; // rax
  int v4; // ebx
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v6; // rdi
  unsigned int v7; // r9d
  int v8; // eax
  HRGN v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 31) & 0x10) == 0 )
    return 0LL;
  v4 = (4 * (*(_BYTE *)(v2 + 31) & 4)) | 1;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
  v6 = LayeredOrRedirectedParent;
  v7 = v4;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
    {
      v8 = IsMinimizedSausageWindow((struct tagWND *const)v6);
      v7 = v4;
      if ( !v8 && (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 232LL) & 0x20) == 0 )
        v7 = v4 | 0x4000;
    }
    else
    {
      v7 = v4;
    }
  }
  return CalcVisRgn(&v10, (__int64)a1, a1, v7);
}
