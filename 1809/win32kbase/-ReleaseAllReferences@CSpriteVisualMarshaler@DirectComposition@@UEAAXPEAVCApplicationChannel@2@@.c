/*
 * XREFs of ?ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0010610
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0010680 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSpriteVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 44);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 44) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 45);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 45) = 0LL;
  }
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
