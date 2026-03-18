/*
 * XREFs of ?ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE@@@Z @ 0x18019A0C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetInterpolationSpace(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE *a3)
{
  int v3; // eax
  __int64 v4; // rax

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 != *((_DWORD *)this + 26) )
  {
    *((_DWORD *)this + 26) = v3;
    v4 = *(_QWORD *)this;
    *((_BYTE *)this + 168) = 0;
    (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v4 + 64))(this, 6LL, this);
  }
  return 0LL;
}
