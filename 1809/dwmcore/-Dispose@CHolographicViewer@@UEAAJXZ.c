/*
 * XREFs of ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x18020ECF0
 * Callers:
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x18020EAEC (--1CHolographicViewer@@MEAA@XZ.c)
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18020EC80 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicViewer::Dispose(CHolographicViewer *this)
{
  void *v2; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 9);
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  _InterlockedExchange((volatile __int32 *)this + 24, 3);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
  return 0LL;
}
