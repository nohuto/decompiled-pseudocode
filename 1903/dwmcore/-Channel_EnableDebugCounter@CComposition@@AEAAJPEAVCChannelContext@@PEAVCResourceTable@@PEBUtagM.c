/*
 * XREFs of ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x1801771CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180177E58 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::Channel_EnableDebugCounter(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ENABLEDEBUGCOUNTER *a4)
{
  char v4; // al

  v4 = *((_BYTE *)a4 + 4) != 0;
  if ( *((_BYTE *)a2 + 64) != v4 )
  {
    *((_BYTE *)a2 + 64) = v4;
    CComposition::UpdateDebugCounter(this, *((_BYTE *)a4 + 4) != 0);
  }
  return 0LL;
}
