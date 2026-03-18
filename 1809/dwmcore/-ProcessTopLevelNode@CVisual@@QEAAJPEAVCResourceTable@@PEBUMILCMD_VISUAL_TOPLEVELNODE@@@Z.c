/*
 * XREFs of ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x18009F834
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18009F868 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 */

__int64 __fastcall CVisual::ProcessTopLevelNode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_TOPLEVELNODE *a3)
{
  char v3; // al
  unsigned __int64 v4; // rdx

  v3 = *((_BYTE *)this + 93);
  v4 = 0LL;
  if ( *((_DWORD *)a3 + 4) )
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
