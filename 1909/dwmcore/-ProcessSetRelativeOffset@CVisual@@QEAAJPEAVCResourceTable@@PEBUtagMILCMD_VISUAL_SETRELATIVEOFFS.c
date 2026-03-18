/*
 * XREFs of ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x1801C2BA4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800A0844 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRelativeOffset(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETRELATIVEOFFSET *a3)
{
  CVisual::SetRelativeOffset(
    this,
    COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 2)),
    COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 3)),
    *((FLOAT *)a3 + 4));
  return 0LL;
}
