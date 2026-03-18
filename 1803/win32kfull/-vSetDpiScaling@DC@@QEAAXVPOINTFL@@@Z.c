/*
 * XREFs of ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C023FEBC
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     GreSelectRedirectionBitmap @ 0x1C008C040 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C008C360 (GreHintDCWnd.c)
 *     GreSetDCDpiScaleValue @ 0x1C026E880 (GreSetDCDpiScaleValue.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C008BCB4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C023FF0C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::vSetDpiScaling(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 528) |= 5u;
  *(_DWORD *)(a1 + 36) |= 0x10u;
  *(_QWORD *)(a1 + 532) = a2;
  DC::vUpdateCachedDPIScaleValue((DC *)a1);
  result = DC::bDpiScaledSurface((DC *)a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 504);
    *(_QWORD *)(a1 + 540) = *(_QWORD *)(result + 668);
  }
  return result;
}
