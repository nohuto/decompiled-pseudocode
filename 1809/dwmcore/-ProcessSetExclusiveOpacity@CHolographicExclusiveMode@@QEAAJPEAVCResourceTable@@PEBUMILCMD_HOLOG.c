/*
 * XREFs of ?ProcessSetExclusiveOpacity@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY@@@Z @ 0x18020C5E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::ProcessSetExclusiveOpacity(
        CHolographicExclusiveMode *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY *a3)
{
  return CHolographicExclusiveMode::SetProperty(this, 1LL, 18LL, (char *)a3 + 8);
}
