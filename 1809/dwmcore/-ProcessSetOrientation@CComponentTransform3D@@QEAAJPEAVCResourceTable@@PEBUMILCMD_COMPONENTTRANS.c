/*
 * XREFs of ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x18006C664
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetOrientation(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION *a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_OWORD *)((char *)a3 + 8);
  return ((__int64 (__fastcall *)(char *, void *, __int128 *))xmmword_180305088)(
           (char *)this + SDWORD2(xmmword_180305088),
           &CComponentTransform3D::sc_Orientation,
           &v4);
}
