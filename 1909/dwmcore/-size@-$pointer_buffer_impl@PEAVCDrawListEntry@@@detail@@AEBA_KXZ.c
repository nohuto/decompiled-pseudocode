/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x180099088
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180097280 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x180098154 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180098A64 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::size(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a1 & 3LL;
  if ( (*a1 & 3) == 0 )
    return 1LL;
  if ( (_DWORD)v3 == 1 )
    return *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
  if ( (unsigned int)(v3 - 2) > 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  return 0LL;
}
