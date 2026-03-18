/*
 * XREFs of ??A?$span@$$CBI$0?0@gsl@@QEBAAEBI_J@Z @ 0x1801D39C0
 * Callers:
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801D3AB0 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1802053BC (-SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall gsl::span<unsigned int const,-1>::operator[](unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 >= *a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1[1] + 4 * a2;
}
