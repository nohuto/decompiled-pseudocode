/*
 * XREFs of unknown_libname_114 @ 0x18000FFC8
 * Callers:
 *     sub_180127B99 @ 0x180127B99 (sub_180127B99.c)
 *     sub_1801292E9 @ 0x1801292E9 (sub_1801292E9.c)
 *     sub_18012CD8B @ 0x18012CD8B (sub_18012CD8B.c)
 *     sub_18012CE18 @ 0x18012CE18 (sub_18012CE18.c)
 *     unknown_libname_45 @ 0x18012CE30 (unknown_libname_45.c)
 *     sub_18012CF65 @ 0x18012CF65 (sub_18012CF65.c)
 *     sub_18012DE60 @ 0x18012DE60 (sub_18012DE60.c)
 *     sub_18012DEFE @ 0x18012DEFE (sub_18012DEFE.c)
 *     sub_18012F362 @ 0x18012F362 (sub_18012F362.c)
 *     sub_18012F3BD @ 0x18012F3BD (sub_18012F3BD.c)
 *     sub_18012FF2E @ 0x18012FF2E (sub_18012FF2E.c)
 *     sub_18012FF41 @ 0x18012FF41 (sub_18012FF41.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA_1 @ 0x180131074 (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurren_ea_180131074.c)
 *     sub_180132CA4 @ 0x180132CA4 (sub_180132CA4.c)
 *     unknown_libname_92 @ 0x180132CB4 (unknown_libname_92.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x180132D02 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_1.c)
 *     sub_180132FF3 @ 0x180132FF3 (sub_180132FF3.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1 @ 0x1801333C5 (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1.c)
 *     sub_1801333E9 @ 0x1801333E9 (sub_1801333E9.c)
 *     sub_180133B33 @ 0x180133B33 (sub_180133B33.c)
 *     sub_180133F1A @ 0x180133F1A (sub_180133F1A.c)
 *     sub_18013433B @ 0x18013433B (sub_18013433B.c)
 *     ?dtor$2@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x180134B73 (-dtor$2@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 *     sub_180134C57 @ 0x180134C57 (sub_180134C57.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_114(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
