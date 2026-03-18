/*
 * XREFs of ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800D7D64
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x1800D7C58 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsOldQualcommOverlayDriver(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 66) == 1297040209 && *((int *)this + 65) <= 2200 && *((_DWORD *)this + 67) == 1177957426 )
    return *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) <= 0xB001204360026LL;
  return result;
}
