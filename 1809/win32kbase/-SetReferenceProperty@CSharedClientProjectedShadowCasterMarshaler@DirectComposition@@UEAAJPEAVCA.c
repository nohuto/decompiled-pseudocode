/*
 * XREFs of ?SetReferenceProperty@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0182F00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0172D10 (-SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 */

__int64 __fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::SetReferenceProperty(
        DirectComposition::CSharedClientProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 3 || a3 == 6 )
    return 3221225485LL;
  else
    return DirectComposition::CProjectedShadowCasterMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
