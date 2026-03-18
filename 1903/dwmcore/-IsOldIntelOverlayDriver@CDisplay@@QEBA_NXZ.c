/*
 * XREFs of ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800AF930
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x1800AF814 (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
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
