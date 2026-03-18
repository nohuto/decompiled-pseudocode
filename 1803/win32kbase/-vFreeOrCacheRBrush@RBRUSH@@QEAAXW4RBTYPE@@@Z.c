/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C006BE70
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C003DBD0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C003DC00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0059F50 (GreSetSolidBrushLight.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005CAF4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EngFreeUserMem @ 0x1C003C200 (EngFreeUserMem.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  __int64 v2; // rbx
  int v3; // esi
  struct RBRUSH **v4; // rdi

  v2 = (__int64)a1;
  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = &gpCachedEngbrush;
    }
    else
    {
      v3 = a1[2];
      v4 = &gpCachedDbrush;
      if ( v3 && (int)IsMulDestroyBrushInternalSupported() >= 0 )
        MulDestroyBrushInternal(v2 + 16);
    }
    if ( *v4 || v3 == 1 || (v2 = _InterlockedExchange64((volatile __int64 *)v4, v2)) != 0 )
      Win32FreePool(v2);
  }
}
