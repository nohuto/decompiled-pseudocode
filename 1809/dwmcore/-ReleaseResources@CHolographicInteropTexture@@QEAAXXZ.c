/*
 * XREFs of ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18020E54C
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x18020B6F8 (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18020D8A0 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x18020DA40 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x18020E390 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICI.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180072BAC (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800EC1D0 (--_V@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseResources(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 i; // r14
  __int64 j; // rdi
  __int64 v5; // r15
  char *Ptr; // rcx
  char *v7; // rdi
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = this + 38;
  AcquireSRWLockExclusive(this + 38);
  for ( i = 0LL; (unsigned int)i < HIDWORD(this[17].Ptr); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2uLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    if ( this[i + 13].Ptr )
    {
      for ( j = 0LL; (unsigned int)j < LODWORD(this[17].Ptr); j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)i >= 2uLL )
          ModuleFailFastForHRESULT(-2147483637, retaddr);
        v5 = 96 * j;
        ReleaseInterface<IRenderTargetBitmap>((__int64 *)this[i + 13].Ptr + 12 * j);
        _mm_lfence();
        if ( *((_QWORD *)this[i + 13].Ptr + 12 * j + 1) )
        {
          if ( (unsigned int)i >= 2uLL )
            ModuleFailFastForHRESULT(-2147483637, retaddr);
          _mm_lfence();
          CloseHandle(*(HANDLE *)((char *)this[i + 13].Ptr + v5 + 8));
          *(_QWORD *)((char *)this[i + 13].Ptr + v5 + 8) = 0LL;
        }
      }
      if ( (unsigned int)i >= 2uLL )
        ModuleFailFastForHRESULT(-2147483637, retaddr);
      _mm_lfence();
      Ptr = (char *)this[i + 13].Ptr;
      if ( Ptr )
      {
        v7 = Ptr - 8;
        `vector destructor iterator'(
          Ptr,
          96LL,
          *((_QWORD *)Ptr - 1),
          (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::~RenderBuffer);
        operator delete[](v7);
      }
      if ( (unsigned int)i >= 2uLL )
        ModuleFailFastForHRESULT(-2147483637, retaddr);
      this[i + 13].Ptr = 0LL;
    }
  }
  LODWORD(this[17].Ptr) = 0;
  BYTE5(this[16].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
