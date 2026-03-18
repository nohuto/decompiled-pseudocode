/*
 * XREFs of ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BD440
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BCF40 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  char result; // al

  result = DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 14) )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    result = 1;
  }
  if ( *((_QWORD *)this + 21) )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 34) || *((_DWORD *)this + 36) || *((_DWORD *)this + 35) || *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    return 1;
  }
  return result;
}
