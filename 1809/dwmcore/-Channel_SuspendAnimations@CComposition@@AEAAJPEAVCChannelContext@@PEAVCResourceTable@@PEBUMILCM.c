/*
 * XREFs of ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x18014B174
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18018A408 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 */

__int64 __fastcall CComposition::Channel_SuspendAnimations(
        CExpressionManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SUSPENDANIMATIONS *a4)
{
  CExpressionManager::SuspendAnimations(
    this[28],
    *((_DWORD *)a2 + 4),
    *((_DWORD *)a4 + 1) != 0,
    *((_DWORD *)a4 + 2) != 0);
  return 0LL;
}
