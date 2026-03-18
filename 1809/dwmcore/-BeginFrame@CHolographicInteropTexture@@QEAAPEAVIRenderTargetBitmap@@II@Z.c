/*
 * XREFs of ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x18020D5C8
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

struct IRenderTargetBitmap *__fastcall CHolographicInteropTexture::BeginFrame(
        RTL_SRWLOCK *this,
        __int64 a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v6; // rbp
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 38;
  v4 = a3;
  AcquireSRWLockExclusive(this + 38);
  v6 = 0LL;
  if ( LODWORD(this[17].Ptr) && (unsigned int)v4 < HIDWORD(this[17].Ptr) )
  {
    if ( v4 >= 2 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    _mm_lfence();
    v6 = *(_QWORD *)this[v4 + 13].Ptr;
    _mm_lfence();
    **((_DWORD **)this[v4 + 13].Ptr + 2) = 0;
  }
  ReleaseSRWLockExclusive(v3);
  return (struct IRenderTargetBitmap *)v6;
}
