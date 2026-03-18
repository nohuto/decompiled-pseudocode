/*
 * XREFs of ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x18024073C
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x18023EF9C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x18023F1A8 (--1CHolographicManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D64A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  struct CRenderTarget *v1; // rdx
  CHolographicInteropTaskQueue *v3; // rcx
  CGdiSpriteBitmap *v4; // rcx

  v1 = (struct CRenderTarget *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 3) + 64LL), v1);
    v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v3 )
      CHolographicInteropTaskQueue::PostMessageW(v3, 0x15u, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (CGdiSpriteBitmap *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      CGdiSpriteBitmap::Release(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
}
