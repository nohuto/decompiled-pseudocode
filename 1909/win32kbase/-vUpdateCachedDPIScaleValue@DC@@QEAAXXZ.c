/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0120CB4
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0019F30 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0028358 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C0028390 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0120C64 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0077078 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     bFToL @ 0x1C00865D8 (bFToL.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C0120B00 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v6 = 1;
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v4 = bFToL(*(float *)(v3 + 524), &v6, 6u);
    v5 = v6;
    if ( !v4 )
      v5 = 1;
    v1 = v5;
  }
  DC::SetCachedDpiScaleValue(this, v1);
}
