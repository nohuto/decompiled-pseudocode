/*
 * XREFs of ?ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00059E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007BD70 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _QWORD *v4; // rdx

  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  v4 = (_QWORD *)*((_QWORD *)this + 44);
  if ( v4 )
  {
    *v4 = *((_QWORD *)a2 + 49);
    *((_QWORD *)a2 + 49) = v4;
    *((_QWORD *)this + 44) = 0LL;
  }
}
