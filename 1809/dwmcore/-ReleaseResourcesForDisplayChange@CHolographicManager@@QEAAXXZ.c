/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x18020B6F8
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x18020A25C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180210A94 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ @ 0x180210F10 (-ReleaseResourcesForDisplayChange@CHolographicInteropTarget@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18020E54C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

void __fastcall CHolographicManager::ReleaseResourcesForDisplayChange(CHolographicManager *this)
{
  CHolographicInteropTexture **i; // rbx

  for ( i = (CHolographicInteropTexture **)*((_QWORD *)this + 15); i != *((CHolographicInteropTexture ***)this + 16); ++i )
    CHolographicInteropTexture::ReleaseResources(*i);
}
