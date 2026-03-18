/*
 * XREFs of ?GetTipPointQueue@CRemoteSuperWetSharedSection@@QEAAPEAVCSuperWetInkDataCircularQueue@@XZ @ 0x1801BAF58
 * Callers:
 *     ?IsSuperWetCompatible@CRemoteSuperWetSource@@UEAA_NPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x1801B1160 (-IsSuperWetCompatible@CRemoteSuperWetSource@@UEAA_NPEAVID2DContext@@AEBUDCompWetInkStrokeRenderS.c)
 *     ?ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ @ 0x1801BB480 (-ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::TryOpenVmConsumerQueue @ 0x1801BB250 (_anonymous_namespace_--TryOpenVmConsumerQueue.c)
 */

struct CSuperWetInkDataCircularQueue *__fastcall CRemoteSuperWetSharedSection::GetTipPointQueue(
        CRemoteSuperWetSharedSection *this)
{
  char *v1; // rbx

  v1 = (char *)this + 16;
  anonymous_namespace_::TryOpenVmConsumerQueue(
    (char *)this + 16,
    (char *)this + 24,
    &CVmSharedSection::sc_tipPointsVmSharedSectionGuid);
  return *(struct CSuperWetInkDataCircularQueue **)v1;
}
