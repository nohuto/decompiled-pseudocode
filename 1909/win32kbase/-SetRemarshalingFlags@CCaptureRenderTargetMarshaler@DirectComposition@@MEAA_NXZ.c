/*
 * XREFs of ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BCF40
 * Callers:
 *     ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BD440 (-SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 11) != 0.0 || *((float *)this + 12) != 0.0 || *((float *)this + 13) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_BYTE *)this + 41) )
    *((_DWORD *)this + 4) |= 0x200u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_BYTE *)this + 40) )
    v1 |= 0x800u;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 4) = v1 & 0xFFFFFEFF;
  return 1;
}
