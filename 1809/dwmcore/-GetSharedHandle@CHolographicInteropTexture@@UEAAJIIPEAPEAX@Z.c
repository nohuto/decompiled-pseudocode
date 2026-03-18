/*
 * XREFs of ?GetSharedHandle@CHolographicInteropTexture@@UEAAJIIPEAPEAX@Z @ 0x18020E030
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHolographicInteropTexture::GetSharedHandle(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v7; // r15
  unsigned int v8; // edi
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 30;
  v5 = a3;
  v7 = a2;
  v8 = 0;
  *a4 = 0LL;
  AcquireSRWLockShared(this + 30);
  if ( (unsigned int)v7 >= LODWORD(this[9].Ptr) || (unsigned int)v5 >= HIDWORD(this[9].Ptr) )
  {
    v8 = -2147024809;
  }
  else
  {
    if ( v5 >= 2 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    _mm_lfence();
    *a4 = (void *)*((_QWORD *)this[v5 + 5].Ptr + 12 * v7 + 1);
  }
  ReleaseSRWLockShared(v4);
  return v8;
}
