/*
 * XREFs of ?ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWER_SETFLAGS@@@Z @ 0x18020F020
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18020EDD0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessSetFlags(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICVIEWER_SETFLAGS *a3)
{
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 2);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
