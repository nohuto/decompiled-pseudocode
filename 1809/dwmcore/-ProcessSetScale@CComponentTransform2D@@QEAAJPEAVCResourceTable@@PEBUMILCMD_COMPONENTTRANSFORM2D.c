/*
 * XREFs of ?ProcessSetScale@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETSCALE@@@Z @ 0x18006BED0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetScale(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETSCALE *a3)
{
  int v3; // xmm1_4
  struct CResourceTable *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = *((_DWORD *)a3 + 3);
  LODWORD(v5) = *((_DWORD *)a3 + 2);
  HIDWORD(v5) = v3;
  return ((__int64 (__fastcall *)(char *, void *, struct CResourceTable **))xmmword_180305248)(
           (char *)this + SDWORD2(xmmword_180305248),
           &CComponentTransform2D::sc_Scale,
           &v5);
}
