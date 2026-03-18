/*
 * XREFs of ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x180245578
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall CHolographicInteropTexture::EndFrame(RTL_SRWLOCK *this, __int64 a2, unsigned int a3, char a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rsi
  const char *v8; // rcx

  v4 = this + 38;
  v5 = a3;
  AcquireSRWLockExclusive(this + 38);
  if ( LODWORD(this[17].Ptr) && (unsigned int)v5 < HIDWORD(this[17].Ptr) )
  {
    if ( v5 >= 2 )
      std::_Xlength_error(v8);
    *((_BYTE *)this[v5 + 13].Ptr + 88) = a4;
  }
  ReleaseSRWLockExclusive(v4);
}
