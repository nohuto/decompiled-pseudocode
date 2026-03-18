/*
 * XREFs of ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x18006C6E8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetHorizontalAlignment(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT *a3)
{
  struct CResourceTable *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LODWORD(v4) = *((_DWORD *)a3 + 2);
  return ((__int64 (__fastcall *)(char *, void *, struct CResourceTable **))xmmword_1803071B8)(
           (char *)this + SDWORD2(xmmword_1803071B8),
           &CSurfaceBrush::sc_HorizontalAlignment,
           &v4);
}
