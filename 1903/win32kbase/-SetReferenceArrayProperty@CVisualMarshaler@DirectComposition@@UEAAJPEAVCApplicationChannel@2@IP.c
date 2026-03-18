/*
 * XREFs of ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C007F990
 * Callers:
 *     ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B2710 (-SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B6BA0 (-SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicat.c)
 *     ?SetReferenceArrayProperty@CGlyphRunVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B8610 (-SetReferenceArrayProperty@CGlyphRunVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C007F9F8 (-Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceM.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 48;
  if ( !v7 )
  {
    result = DirectComposition::CResourceMarshalerArray::Set((char *)this + 272, a2, a4, a5, 33);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)this + 40) = 0LL;
    *((_DWORD *)this + 84) |= 1u;
    goto LABEL_4;
  }
  if ( v7 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray::Set((char *)this + 296, a2, a4, a5, 33);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 41) = 0LL;
    *((_DWORD *)this + 84) |= 2u;
LABEL_4:
    *a6 = 1;
  }
  return result;
}
