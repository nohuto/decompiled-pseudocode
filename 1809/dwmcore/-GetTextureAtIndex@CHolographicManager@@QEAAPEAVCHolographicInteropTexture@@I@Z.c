/*
 * XREFs of ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x18020B2F4
 * Callers:
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x180210E28 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180210F20 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
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
  AcquireSRWLockShared(this + 10);
  Ptr = this[15].Ptr;
  v5 = 0LL;
  if ( v3 < ((char *)this[16].Ptr - (char *)Ptr) >> 3 )
    v5 = Ptr[v3];
  ReleaseSRWLockShared(this + 10);
  return (struct CHolographicInteropTexture *)v5;
}
