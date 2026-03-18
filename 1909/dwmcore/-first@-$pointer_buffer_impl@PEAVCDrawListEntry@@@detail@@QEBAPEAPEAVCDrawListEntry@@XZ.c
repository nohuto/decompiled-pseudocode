/*
 * XREFs of ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180099050
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180096510 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180096860 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180097280 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x180098154 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180098A64 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x1800C6D94 (-consume@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::first(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return (unsigned __int64)a1;
  if ( (*(_DWORD *)a1 & 3) == 1 )
    return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_DWORD *)a1 & 3) != 2 )
  {
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
    return (unsigned __int64)a1;
  }
  return 0LL;
}
