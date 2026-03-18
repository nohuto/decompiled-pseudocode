/*
 * XREFs of ?ProcessSetPassiveUpdateMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETPASSIVEUPDATEMODE@@@Z @ 0x1800DE308
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessSetPassiveUpdateMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETPASSIVEUPDATEMODE *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_BYTE *)this + 94) = *((_BYTE *)this + 94) & 0xDF | (*((_BYTE *)a3 + 8) != 0 ? 0x20 : 0);
  return result;
}
