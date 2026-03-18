/*
 * XREFs of ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x18002BB68
 * Callers:
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x18002BA4C (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B6770 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsOldIntelOverlayDriver(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 64) == 32902 )
    return *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) <= 0x140013000F112DLL;
  return result;
}
