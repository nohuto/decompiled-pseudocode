/*
 * XREFs of ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180241A78
 * Callers:
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x180245870 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180245980 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicInteropTexture *__fastcall CHolographicManager::GetTextureAtIndex(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *Ptr; // rcx
  __int64 v5; // rbp

  v3 = a2;
  AcquireSRWLockShared(this + 13);
  Ptr = this[18].Ptr;
  v5 = 0LL;
  if ( v3 < ((char *)this[19].Ptr - (char *)Ptr) >> 3 )
    v5 = Ptr[v3];
  ReleaseSRWLockShared(this + 13);
  return (struct CHolographicInteropTexture *)v5;
}
