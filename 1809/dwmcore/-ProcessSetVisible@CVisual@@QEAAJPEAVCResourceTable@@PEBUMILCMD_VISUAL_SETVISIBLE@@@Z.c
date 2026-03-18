/*
 * XREFs of ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x18002041C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x18002043C (-SetVisible@CVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetVisible(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETVISIBLE *a3)
{
  CVisual::SetVisible(this, *((_DWORD *)a3 + 2) != 0);
  return 0LL;
}
