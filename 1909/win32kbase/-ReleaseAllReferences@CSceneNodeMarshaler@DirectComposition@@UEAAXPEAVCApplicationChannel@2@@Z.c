/*
 * XREFs of ?ReleaseAllReferences@CSceneNodeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B9BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007BFF8 (-Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSceneNodeMarshaler::ReleaseAllReferences(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CSceneNodeMarshaler *)((char *)this + 40), a2);
  DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CSceneNodeMarshaler *)((char *)this + 72), a2);
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 13) = 0LL;
  }
}
