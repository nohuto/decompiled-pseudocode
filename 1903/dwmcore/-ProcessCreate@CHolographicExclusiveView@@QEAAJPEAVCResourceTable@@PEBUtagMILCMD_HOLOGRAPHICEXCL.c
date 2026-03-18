/*
 * XREFs of ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x180244F90
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x180240AFC (-AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessCreate(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE *a3)
{
  bool v3; // zf

  v3 = *((_QWORD *)this + 7) == 0LL;
  *((_DWORD *)this + 17) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 16) = *((_DWORD *)a3 + 5);
  *((_QWORD *)this + 12) = *((_QWORD *)a3 + 1);
  if ( !v3 )
    CHolographicManager::AddExclusiveView(*((RTL_SRWLOCK **)this + 7), (struct IUnknown *)this);
  return 0LL;
}
