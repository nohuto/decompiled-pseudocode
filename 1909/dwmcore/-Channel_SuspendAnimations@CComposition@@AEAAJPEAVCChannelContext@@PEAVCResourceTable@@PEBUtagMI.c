/*
 * XREFs of ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x180175A8C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801BFDB8 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 */

__int64 __fastcall CComposition::Channel_SuspendAnimations(
        CExpressionManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SUSPENDANIMATIONS *a4)
{
  CExpressionManager::SuspendAnimations(this[30], *((_DWORD *)a2 + 4), *((_BYTE *)a4 + 4) != 0, *((_BYTE *)a4 + 5) != 0);
  return 0LL;
}
