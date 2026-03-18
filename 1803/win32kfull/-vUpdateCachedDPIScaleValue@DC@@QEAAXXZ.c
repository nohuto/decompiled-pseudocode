/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C023FF0C
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     GreSelectRedirectionBitmap @ 0x1C008C040 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C008C360 (GreHintDCWnd.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C023FEBC (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011D5D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C023FD60 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
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
    v4 = bFToL(*(float *)(v3 + 532), &v6, 6);
    v5 = v6;
    if ( !v4 )
      v5 = 1;
    v1 = v5;
  }
  DC::SetCachedDpiScaleValue(this, v1);
}
