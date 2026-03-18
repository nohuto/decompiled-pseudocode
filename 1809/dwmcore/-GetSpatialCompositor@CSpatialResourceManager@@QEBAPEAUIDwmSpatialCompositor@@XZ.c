/*
 * XREFs of ?GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ @ 0x180156D40
 * Callers:
 *     ?GetSpatialRenderTargetNoRef@CSpatialResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUIDwmSpatialRenderTarget@@@Z @ 0x180156D58 (-GetSpatialRenderTargetNoRef@CSpatialResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUIDwmSpatialRe.c)
 *     ?RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180156F58 (-RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z.c)
 *     ?ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ @ 0x180156FC4 (-ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ.c)
 *     ?UnregisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180157120 (-UnregisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

struct IDwmSpatialCompositor *__fastcall CSpatialResourceManager::GetSpatialCompositor(CSpatialResourceManager *this)
{
  struct IDwmSpatialCompositor *result; // rax

  result = (struct IDwmSpatialCompositor *)*((_QWORD *)this + 3);
  if ( result )
    return (struct IDwmSpatialCompositor *)*((_QWORD *)result + 15);
  return result;
}
