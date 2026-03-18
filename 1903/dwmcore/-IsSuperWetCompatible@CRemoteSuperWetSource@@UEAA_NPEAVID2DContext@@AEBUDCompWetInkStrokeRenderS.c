/*
 * XREFs of ?IsSuperWetCompatible@CRemoteSuperWetSource@@UEAA_NPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x1801B2A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTipPointQueue@CRemoteSuperWetSharedSection@@QEAAPEAVCSuperWetInkDataCircularQueue@@XZ @ 0x1801BC6F8 (-GetTipPointQueue@CRemoteSuperWetSharedSection@@QEAAPEAVCSuperWetInkDataCircularQueue@@XZ.c)
 */

char __fastcall CRemoteSuperWetSource::IsSuperWetCompatible(
        CRemoteSuperWetSource *this,
        struct ID2DContext *a2,
        const struct DCompWetInkStrokeRenderState *a3)
{
  CRemoteSuperWetSharedSection *v3; // rcx
  char v4; // bl

  v3 = (CRemoteSuperWetSharedSection *)*((_QWORD *)this + 1);
  v4 = 0;
  if ( v3 )
    return CRemoteSuperWetSharedSection::GetTipPointQueue(v3) != 0LL;
  return v4;
}
