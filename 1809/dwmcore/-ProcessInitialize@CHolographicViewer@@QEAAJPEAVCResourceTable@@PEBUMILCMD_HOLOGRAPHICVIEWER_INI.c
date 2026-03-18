/*
 * XREFs of ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x18020EFA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x180175E00 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18020EDD0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessInitialize(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICVIEWER_INITIALIZE *a3)
{
  if ( *((_DWORD *)this + 40) )
    return 2147483661LL;
  *((_DWORD *)this + 19) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 3);
  *(_QWORD *)((char *)this + 84) = *((_QWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 92) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)this + 29) = CResource::GetOwningProcessId(this);
  *((_QWORD *)this + 16) = *((_QWORD *)a3 + 5);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 12);
  _InterlockedExchange((volatile __int32 *)this + 40, 1);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
