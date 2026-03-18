/*
 * XREFs of ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077210
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0076B78 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0076BD8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C00771B0 (-CitpCleanup@@YAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077254 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1)
{
  if ( qword_1C01D0CF0 )
  {
    CitpContextCleanup(qword_1C01D0CF0);
    if ( qword_1C01D0CF0 )
    {
      Win32FreePool((__int64)qword_1C01D0CF0);
      qword_1C01D0CF0 = 0LL;
    }
  }
  *a1 = 0LL;
}
