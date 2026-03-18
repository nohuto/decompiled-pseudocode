/*
 * XREFs of ?ProcessSetMappingMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETMAPPINGMODE@@@Z @ 0x18019A100
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetMappingMode(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETMAPPINGMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 25) != v3 )
  {
    *((_DWORD *)this + 25) = v3;
    (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(*(_QWORD *)this + 64LL))(this, 6LL, this);
  }
  return 0LL;
}
