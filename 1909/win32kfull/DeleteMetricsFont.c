/*
 * XREFs of DeleteMetricsFont @ 0x1C013CC70
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C012A5EC (GetScaledLogFontForDpi.c)
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C013CC38 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C013D380 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01CC5F4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C013E3A8 (GreMarkDeletableFont.c)
 */

__int64 __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    return GreDeleteObject(a1);
  }
  return result;
}
