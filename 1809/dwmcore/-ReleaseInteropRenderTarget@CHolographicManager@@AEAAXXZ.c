/*
 * XREFs of ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x18020B690
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x18020A25C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x18020A324 (--1CHolographicManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x180077164 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  struct CRenderTarget *v1; // rdx
  CHolographicInteropTaskQueue *v3; // rcx
  CGdiSpriteBitmap *v4; // rcx

  v1 = (struct CRenderTarget *)*((_QWORD *)this + 3);
  if ( v1 )
  {
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), v1);
    v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
    if ( v3 )
      CHolographicInteropTaskQueue::PostMessageW(v3, 0x15u, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (CGdiSpriteBitmap *)*((_QWORD *)this + 3);
    if ( v4 )
    {
      CGdiSpriteBitmap::Release(v4);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
