/*
 * XREFs of ?ProcessSetPlaybackRate@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE@@@Z @ 0x1801A3E54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x180071C28 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPlaybackRate(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE *a3)
{
  CKeyframeAnimation::SetPlaybackRate(this, *((float *)a3 + 2));
  return 0LL;
}
