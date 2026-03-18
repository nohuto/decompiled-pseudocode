/*
 * XREFs of ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x18020D9BC
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CHolographicInteropTexture::EndFrame(RTL_SRWLOCK *this, __int64 a2, unsigned int a3, char a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rsi
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 38;
  v5 = a3;
  AcquireSRWLockExclusive(this + 38);
  if ( LODWORD(this[17].Ptr) && (unsigned int)v5 < HIDWORD(this[17].Ptr) )
  {
    if ( v5 >= 2 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    *((_BYTE *)this[v5 + 13].Ptr + 88) = a4;
  }
  ReleaseSRWLockExclusive(v4);
}
