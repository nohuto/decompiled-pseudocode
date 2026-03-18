/*
 * XREFs of ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009E700
 * Callers:
 *     ?ReleaseAllReferences@CSharedCompositionAmbientLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009E5F0 (-ReleaseAllReferences@CSharedCompositionAmbientLightMarshaler@DirectComposition@@MEAAXPEAVCAppli.c)
 *     ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009E6B0 (-ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B4CD0 (-ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C0004D84 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 */

void __fastcall DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CPrimitiveGroupMarshaler *v4; // rcx

  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    this,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 5),
    (unsigned int *)this + 12);
  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    v4,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 7),
    (unsigned int *)this + 16);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
}
