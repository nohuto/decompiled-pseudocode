/*
 * XREFs of ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0098D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00815A0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CLayerVisualMarshaler::SetIntegerProperty(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 != 54 )
  {
    if ( a3 != 55 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    if ( *((_BYTE *)this + 361) == ((_DWORD)a4 != 0) )
      return v5;
    *((_BYTE *)this + 361) = (_DWORD)a4 != 0;
    *((_DWORD *)this + 91) |= 8u;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 360) != ((_DWORD)a4 != 0) )
  {
    *((_BYTE *)this + 360) = (_DWORD)a4 != 0;
    *((_DWORD *)this + 91) |= 4u;
LABEL_4:
    *a5 = 1;
  }
  return v5;
}
