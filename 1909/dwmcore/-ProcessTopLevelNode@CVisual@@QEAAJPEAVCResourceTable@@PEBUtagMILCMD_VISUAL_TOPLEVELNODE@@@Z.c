/*
 * XREFs of ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x1800D2B90
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x1800D2BC4 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 */

__int64 __fastcall CVisual::ProcessTopLevelNode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_TOPLEVELNODE *a3)
{
  char v3; // al
  unsigned __int64 v4; // rdx

  v3 = *((_BYTE *)this + 93);
  v4 = 0LL;
  if ( *((_BYTE *)a3 + 16) )
  {
    *((_BYTE *)this + 93) = v3 | 1;
    v4 = *((_QWORD *)a3 + 1);
  }
  else
  {
    *((_BYTE *)this + 93) = v3 & 0xFE;
  }
  CVisual::SetTopLevelWindow(this, v4);
  return 0LL;
}
