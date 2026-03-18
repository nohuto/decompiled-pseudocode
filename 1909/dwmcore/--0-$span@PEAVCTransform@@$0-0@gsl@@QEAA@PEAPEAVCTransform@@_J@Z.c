/*
 * XREFs of ??0?$span@PEAVCTransform@@$0?0@gsl@@QEAA@PEAPEAVCTransform@@_J@Z @ 0x18019B3AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall gsl::span<CTransform *,-1>::span<CTransform *,-1>(__int64 *a1, __int64 a2, __int64 a3)
{
  *a1 = a3;
  if ( a3 < 0 || (a1[1] = a2) == 0 && a3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1;
}
