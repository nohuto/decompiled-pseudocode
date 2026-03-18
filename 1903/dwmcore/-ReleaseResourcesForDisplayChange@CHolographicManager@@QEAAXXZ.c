/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x180241EB4
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802406AC (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802454B0 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ @ 0x180245970 (-ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802477E8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

void __fastcall CHolographicManager::ReleaseResourcesForDisplayChange(CHolographicManager *this)
{
  CHolographicInteropTexture **i; // rbx

  for ( i = (CHolographicInteropTexture **)*((_QWORD *)this + 18); i != *((CHolographicInteropTexture ***)this + 19); ++i )
    CHolographicInteropTexture::ReleaseResources(*i);
}
