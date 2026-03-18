/*
 * XREFs of ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800AF914
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x1800AF814 (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsOldQualcommOverlayDriver(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 64) == 1297040209 && *((int *)this + 63) <= 2200 && *((_DWORD *)this + 65) == 1177957426 )
    return *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) <= 0xB001204360026LL;
  return result;
}
