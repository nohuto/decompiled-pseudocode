/*
 * XREFs of ?ProcessSetStretch@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSTRETCH@@@Z @ 0x18006F72C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetStretch(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETSTRETCH *a3)
{
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CSurfaceBrush *, _QWORD, CSurfaceBrush *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
  return 0LL;
}
