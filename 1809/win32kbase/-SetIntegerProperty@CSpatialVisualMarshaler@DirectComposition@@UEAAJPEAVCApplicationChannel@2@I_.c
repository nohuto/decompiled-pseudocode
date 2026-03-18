/*
 * XREFs of ?SetIntegerProperty@CSpatialVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C017DE10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C006A240 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CSpatialVisualMarshaler::SetIntegerProperty(
        DirectComposition::CSpatialVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 )
    return DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *((_DWORD *)this + 4) |= 0x40000000u;
  *((_DWORD *)this + 88) = a4;
  *a5 = 1;
  return result;
}
