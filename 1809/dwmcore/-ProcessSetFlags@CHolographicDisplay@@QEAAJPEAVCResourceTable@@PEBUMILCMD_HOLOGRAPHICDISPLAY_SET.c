/*
 * XREFs of ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18020C3F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x180077164 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E880 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x18020C338 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetFlags(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_SETFLAGS *a3)
{
  int v5; // r8d
  bool v6; // dl
  int v7; // r8d
  PVOID Ptr; // rcx
  struct CRenderTarget *v9; // rdx

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
      v9 = (struct CRenderTarget *)*((_QWORD *)Ptr + 3);
      if ( v7 )
      {
        if ( v9 )
          CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)Ptr + 2) + 64LL), v9);
      }
      else if ( v9 )
      {
        CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)Ptr + 2) + 64LL), v9);
      }
    }
  }
  ReleaseSRWLockExclusive(this + 15);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
