/*
 * XREFs of ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x18024821C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18016BC90 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x180248040 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessInitialize(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE *a3)
{
  if ( *((_DWORD *)this + 42) )
    return 2147483661LL;
  *((_DWORD *)this + 19) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 3);
  *(_QWORD *)((char *)this + 84) = *((_QWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 92) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 30) = CResource::GetOwningProcessId(this);
  *((_QWORD *)this + 17) = *((_QWORD *)a3 + 6);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 14);
  _InterlockedExchange((volatile __int32 *)this + 42, 1);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
