/*
 * XREFs of ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C026E9B0
 * Callers:
 *     GrePolyPolygon @ 0x1C007C7D0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1C00F6E60 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C011B160 (NtGdiInvertRgn.c)
 *     NtGdiLineTo @ 0x1C011B940 (NtGdiLineTo.c)
 *     GrePolyBezier @ 0x1C026F800 (GrePolyBezier.c)
 *     GrePolyPolyline @ 0x1C026FD60 (GrePolyPolyline.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C011C1A0 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 */

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  DWMSCREENREADMODIFYWRITEASSIST *v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = this;
  v2 = **((_QWORD **)this + 3);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
    {
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) &= 0xFFFFFCFF;
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 76LL) = *((_DWORD *)this + 12);
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 80LL) = *((_DWORD *)this + 13);
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 84LL) = *((_DWORD *)this + 14);
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 88LL) = *((_DWORD *)this + 15);
      v3 = *(_QWORD *)(**((_QWORD **)this + 3) + 80LL);
      if ( *((_DWORD *)this + 17) )
        *(_DWORD *)(v3 + 8) |= 0x100u;
      else
        *(_DWORD *)(v3 + 8) |= 0x200u;
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 80LL) + 72LL) = *((_BYTE *)this + 32);
    v4 = *(_QWORD *)(**((_QWORD **)this + 3) + 80LL);
    v5 = *((_QWORD *)this + 5);
    if ( *(_QWORD *)(v4 + 16) != v5 )
    {
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(*(_QWORD *)(**((_QWORD **)v1 + 3) + 80LL) + 8LL) |= 0x1000u;
    }
    if ( *(_DWORD *)v1 )
      XDCOBJ::vAccumulateTight(*((XDCOBJ **)v1 + 3), (DWMSCREENREADMODIFYWRITEASSIST *)((char *)v1 + 4));
    *(_DWORD *)(**((_QWORD **)v1 + 3) + 496LL) = 1;
  }
}
