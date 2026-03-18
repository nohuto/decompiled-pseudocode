/*
 * XREFs of ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x180246850
 * Callers:
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x180246670 (--1CHolographicViewer@@MEAA@XZ.c)
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180246810 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicViewer::Dispose(CHolographicViewer *this)
{
  void *v2; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 10);
  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  _InterlockedExchange((volatile __int32 *)this + 26, 3);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
  return 0LL;
}
