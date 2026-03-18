/*
 * XREFs of ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C000D420
 * Callers:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 * Callees:
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C000B45C (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     ?ArrangeFrameControls@@YAFHHPEAUOEMBITMAPSET@@@Z @ 0x1C000CB10 (-ArrangeFrameControls@@YAFHHPEAUOEMBITMAPSET@@@Z.c)
 */

void __fastcall EnsureOemBitmapInfoForDpiSlot(struct OEMBITMAPSET *a1, unsigned int a2)
{
  int v3; // ebp
  int updated; // edi
  unsigned int v5; // esi
  int v6; // r14d
  int v7; // r8d
  int v8; // eax
  int v9; // r8d

  v3 = 1;
  if ( !*((_DWORD *)a1 + 2) || !*((_DWORD *)a1 + 3) )
  {
    updated = (__int16)UpdateFrameControlMetricsSize(a1, a2);
    v5 = 1;
    v6 = 0x7FFFFFFF;
    do
    {
      v7 = (__int16)ArrangeFrameControls(updated * v5, 0, a1);
      v8 = v5;
      v9 = v5 * v7;
      if ( v6 <= v9 )
        v8 = v3;
      ++v5;
      v3 = v8;
      if ( v6 <= v9 )
        v9 = v6;
      v6 = v9;
    }
    while ( v5 <= 5 );
    *((_DWORD *)a1 + 2) = v8 * updated;
    *((_DWORD *)a1 + 3) = (__int16)ArrangeFrameControls(v8 * updated, 1, a1);
  }
}
