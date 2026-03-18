/*
 * XREFs of ?SetIntegerProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01BF2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01BEDC0 (-SetIntegerProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 */

__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 9:
      *((_QWORD *)this + 21) = a4;
      goto LABEL_9;
    case 11:
      if ( ((_DWORD)a4 != 0) == *((_BYTE *)this + 180) )
        return v5;
      *((_DWORD *)this + 4) |= 0x2000u;
      *((_BYTE *)this + 180) = (_DWORD)a4 != 0;
LABEL_10:
      *a5 = 1;
      return v5;
    case 12:
      *((_DWORD *)this + 44) = a4;
LABEL_9:
      *((_DWORD *)this + 4) |= 0x2000u;
      goto LABEL_10;
  }
  return (unsigned int)DirectComposition::CCaptureRenderTargetMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
