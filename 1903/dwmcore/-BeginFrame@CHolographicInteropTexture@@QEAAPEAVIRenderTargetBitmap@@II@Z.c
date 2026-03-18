/*
 * XREFs of ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x180246928
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180246070 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

struct IRenderTargetBitmap *__fastcall CHolographicInteropTexture::BeginFrame(
        RTL_SRWLOCK *this,
        __int64 a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned __int64 v4; // rsi
  const char *v6; // rcx
  __int64 v7; // rbp

  v3 = this + 38;
  v4 = a3;
  AcquireSRWLockExclusive(this + 38);
  v7 = 0LL;
  if ( LODWORD(this[17].Ptr) && (unsigned int)v4 < HIDWORD(this[17].Ptr) )
  {
    if ( v4 >= 2 )
      std::_Xlength_error(v6);
    _mm_lfence();
    v7 = *(_QWORD *)this[v4 + 13].Ptr;
    _mm_lfence();
    **((_DWORD **)this[v4 + 13].Ptr + 2) = 0;
  }
  ReleaseSRWLockExclusive(v3);
  return (struct IRenderTargetBitmap *)v7;
}
