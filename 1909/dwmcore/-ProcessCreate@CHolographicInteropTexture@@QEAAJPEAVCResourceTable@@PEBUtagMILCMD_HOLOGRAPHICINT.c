/*
 * XREFs of ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x180245E10
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x18023F840 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessCreate(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE *a3)
{
  CHolographicManager *v4; // rcx

  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 4);
  *((_BYTE *)this + 132) = 1;
  *((_OWORD *)this + 10) = _xmm;
  *((_WORD *)this + 112) = 32085;
  *((_OWORD *)this + 11) = _xmm;
  *((_OWORD *)this + 12) = _xmm;
  *((_OWORD *)this + 13) = _xmm;
  v4 = *(CHolographicManager **)(*((_QWORD *)this + 2) + 112LL);
  *((_QWORD *)this + 9) = v4;
  if ( v4 )
  {
    CHolographicManager::AddInteropTexture(v4, this);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
      0LL,
      0x8000LL);
  }
  return 0LL;
}
