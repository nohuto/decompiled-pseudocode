/*
 * XREFs of ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802460D8
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x1802407A4 (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180245480 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1802455F0 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x180245F10 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E958C (--_V@YAXPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseResources(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  char *Ptr; // rcx
  __int64 i; // r14
  __int64 j; // rdi
  __int64 v6; // r15
  char *v7; // rdi

  v1 = this + 38;
  AcquireSRWLockExclusive(this + 38);
  for ( i = 0LL; (unsigned int)i < HIDWORD(this[17].Ptr); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2uLL )
      std::_Xlength_error(Ptr);
    if ( this[i + 13].Ptr )
    {
      for ( j = 0LL; (unsigned int)j < LODWORD(this[17].Ptr); j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)i >= 2uLL )
          std::_Xlength_error(Ptr);
        v6 = 96 * j;
        ReleaseInterface<IRenderTargetBitmap>((__int64 *)this[i + 13].Ptr + 12 * j);
        _mm_lfence();
        if ( *((_QWORD *)this[i + 13].Ptr + 12 * j + 1) )
        {
          if ( (unsigned int)i >= 2uLL )
            std::_Xlength_error(Ptr);
          _mm_lfence();
          CloseHandle(*(HANDLE *)((char *)this[i + 13].Ptr + v6 + 8));
          *(_QWORD *)((char *)this[i + 13].Ptr + v6 + 8) = 0LL;
        }
      }
      if ( (unsigned int)i >= 2uLL )
        std::_Xlength_error(Ptr);
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
        std::_Xlength_error(Ptr);
      this[i + 13].Ptr = 0LL;
    }
  }
  LODWORD(this[17].Ptr) = 0;
  BYTE5(this[16].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
