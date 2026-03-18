/*
 * XREFs of ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800D7D80
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x1800D7C58 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsOldIntelOverlayDriver(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 66) == 32902 )
    return *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) <= 0x140013000F112DLL;
  return result;
}
