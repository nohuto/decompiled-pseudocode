/*
 * XREFs of HmgFreeObjectAttr @ 0x1C005400C
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0017500 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 *     NtGdiCreateRectRgn @ 0x1C00533D0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00535A0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 32) )
    {
      *(_QWORD *)(result + 32) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v7 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v5, v4, v6);
      v10 = v7 + 208;
      v11 = *(_QWORD **)(v7 + 208);
      if ( v11 == (_QWORD *)(v7 + 208) || *((_DWORD *)v11 + 4) == 170 )
      {
        v11 = PALLOCMEM2(0x568uLL, 0x66616247u, 0);
        if ( !v11 )
          return GreReleaseHmgrSemaphore(v8, (__int64)v11, v9);
        v12 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          __fastfail(3u);
        *v11 = v12;
        v11[1] = v10;
        *(_QWORD *)(v12 + 8) = v11;
        *(_QWORD *)v10 = v11;
        *((_DWORD *)v11 + 4) = 0;
      }
      v11[(unsigned int)(*((_DWORD *)v11 + 4))++ + 3] = a1;
      *(_QWORD *)(v7 + 48) = a1;
      return GreReleaseHmgrSemaphore(v8, (__int64)v11, v9);
    }
  }
  return result;
}
