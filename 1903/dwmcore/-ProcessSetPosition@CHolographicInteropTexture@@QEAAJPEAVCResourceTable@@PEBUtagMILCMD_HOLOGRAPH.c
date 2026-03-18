/*
 * XREFs of ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x180247620
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180072034 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1802463DC (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802477E8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetPosition(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION *a3)
{
  unsigned int *v3; // r15
  unsigned int v5; // esi
  unsigned int *v6; // r14
  unsigned int v7; // r12d
  RTL_SRWLOCK *v8; // rbx

  v3 = (unsigned int *)((char *)this + 144);
  v5 = *((_DWORD *)this + 36);
  v6 = (unsigned int *)((char *)this + 148);
  v7 = *((_DWORD *)this + 37);
  v8 = (RTL_SRWLOCK *)((char *)this + 304);
  AcquireSRWLockExclusive((PSRWLOCK)this + 38);
  *v3 = *((_DWORD *)a3 + 2);
  *v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 5);
  **((_DWORD **)this + 29) = 0;
  *((_BYTE *)this + 132) = 1;
  ReleaseSRWLockExclusive(v8);
  if ( __PAIR64__(*v6, v5) != __PAIR64__(v7, *v3) )
  {
    CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)this + 30,
      v3,
      v6);
    CHolographicInteropTexture::ReleaseResources(this);
  }
  *((_OWORD *)this + 10) = _xmm;
  *((_WORD *)this + 112) = 32085;
  *((_OWORD *)this + 11) = _xmm;
  *((_OWORD *)this + 12) = _xmm;
  *((_OWORD *)this + 13) = _xmm;
  CMILMatrix::Translate(
    (CHolographicInteropTexture *)((char *)this + 160),
    (float)-*((_DWORD *)this + 38),
    (float)-*((_DWORD *)this + 39));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
    0LL,
    0x8000LL);
  return 0LL;
}
