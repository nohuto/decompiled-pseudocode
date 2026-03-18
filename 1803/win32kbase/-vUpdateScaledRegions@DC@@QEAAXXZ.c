/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0025790
 * Callers:
 *     <none>
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00C4790 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00C4C6C (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  REGION *v2; // rcx
  REGION *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    if ( (*((_DWORD *)this + 132) & 0x10) != 0 )
    {
      vDuplicateAndScaleRegion(*((_QWORD *)this + 192), (char *)this + 1552, *(_QWORD *)((char *)this + 532));
      v4 = *((_QWORD *)this + 194);
      if ( v4 )
        GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 63), v4, 2LL);
    }
    if ( (*((_DWORD *)this + 132) & 8) != 0 )
    {
      vDuplicateAndScaleRegion(*((_QWORD *)this + 193), (char *)this + 1560, *(_QWORD *)((char *)this + 532));
      v5 = *((_QWORD *)this + 195);
      if ( v5 )
        GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 63), v5, 2LL);
    }
  }
  else
  {
    v2 = (REGION *)*((_QWORD *)this + 194);
    if ( v2 )
    {
      REGION::vDeleteREGION(v2);
      *((_QWORD *)this + 194) = 0LL;
    }
    v3 = (REGION *)*((_QWORD *)this + 195);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 195) = 0LL;
    }
  }
  *((_DWORD *)this + 132) &= 0xFFFFFFE7;
}
