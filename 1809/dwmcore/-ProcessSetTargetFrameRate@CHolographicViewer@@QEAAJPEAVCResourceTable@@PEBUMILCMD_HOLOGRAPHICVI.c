/*
 * XREFs of ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z @ 0x18020F040
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18020EDD0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessSetTargetFrameRate(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE *a3)
{
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 3);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
