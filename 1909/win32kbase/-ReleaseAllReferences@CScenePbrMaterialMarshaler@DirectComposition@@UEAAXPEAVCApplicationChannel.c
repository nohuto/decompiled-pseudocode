/*
 * XREFs of ?ReleaseAllReferences@CScenePbrMaterialMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B9BEC
 * Callers:
 *     ?ReleaseAllReferences@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B9B40 (-ReleaseAllReferences@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAXPEAVCAppl.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CScenePbrMaterialMarshaler::ReleaseAllReferences(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 11) = 0LL;
  }
}
