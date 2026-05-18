/*
 * XREFs of unknown_libname_114 @ 0x18000FF78
 * Callers:
 *     sub_180127A89 @ 0x180127A89 (sub_180127A89.c)
 *     sub_1801291D9 @ 0x1801291D9 (sub_1801291D9.c)
 *     sub_18012CC7B @ 0x18012CC7B (sub_18012CC7B.c)
 *     sub_18012CD08 @ 0x18012CD08 (sub_18012CD08.c)
 *     unknown_libname_45 @ 0x18012CD20 (unknown_libname_45.c)
 *     sub_18012CE55 @ 0x18012CE55 (sub_18012CE55.c)
 *     sub_18012DD50 @ 0x18012DD50 (sub_18012DD50.c)
 *     sub_18012DDEE @ 0x18012DDEE (sub_18012DDEE.c)
 *     sub_18012F252 @ 0x18012F252 (sub_18012F252.c)
 *     sub_18012F2AD @ 0x18012F2AD (sub_18012F2AD.c)
 *     sub_18012FE1E @ 0x18012FE1E (sub_18012FE1E.c)
 *     sub_18012FE31 @ 0x18012FE31 (sub_18012FE31.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA_1 @ 0x180130F64 (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurren_ea_180130F64.c)
 *     sub_180132B94 @ 0x180132B94 (sub_180132B94.c)
 *     unknown_libname_92 @ 0x180132BA4 (unknown_libname_92.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x180132BF2 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_1.c)
 *     sub_180132EE3 @ 0x180132EE3 (sub_180132EE3.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1 @ 0x1801332B5 (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1.c)
 *     sub_1801332D9 @ 0x1801332D9 (sub_1801332D9.c)
 *     sub_180133A23 @ 0x180133A23 (sub_180133A23.c)
 *     sub_180133E0A @ 0x180133E0A (sub_180133E0A.c)
 *     sub_18013422B @ 0x18013422B (sub_18013422B.c)
 *     ?dtor$2@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x180134A63 (-dtor$2@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 *     sub_180134B47 @ 0x180134B47 (sub_180134B47.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
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
