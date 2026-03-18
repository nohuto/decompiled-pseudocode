/*
 * XREFs of ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x180242EE0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028390 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D64A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x180242E28 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetFlags(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS *a3)
{
  int v5; // r8d
  bool v6; // dl
  int v7; // r8d
  PVOID Ptr; // rcx
  struct CRenderTarget *v9; // rdx
  CRenderTargetManager *v10; // rcx

  AcquireSRWLockExclusive(this + 15);
  v5 = *((_DWORD *)a3 + 2);
  v6 = (HIDWORD(this[13].Ptr) & 0x40) != 0;
  HIDWORD(this[13].Ptr) = v5;
  v7 = v5 & 0x40;
  if ( v6 != (v7 != 0) )
  {
    Ptr = this[9].Ptr;
    if ( Ptr )
    {
      v9 = (struct CRenderTarget *)*((_QWORD *)Ptr + 4);
      if ( v9 )
      {
        v10 = *(CRenderTargetManager **)(*((_QWORD *)Ptr + 3) + 64LL);
        if ( v7 )
          CRenderTargetManager::RemoveRenderTarget(v10, v9);
        else
          CRenderTargetManager::AddRenderTarget(v10, v9);
      }
    }
  }
  ReleaseSRWLockExclusive(this + 15);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
