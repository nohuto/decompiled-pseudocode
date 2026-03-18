/*
 * XREFs of ?ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE@@@Z @ 0x1801F3E64
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetInterpolationSpace(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE *a3)
{
  int v3; // eax
  __int64 v4; // rax

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 != *((_DWORD *)this + 28) )
  {
    *((_DWORD *)this + 28) = v3;
    v4 = *(_QWORD *)this;
    *((_BYTE *)this + 176) = 0;
    (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v4 + 64))(this, 6LL, this);
  }
  return 0LL;
}
