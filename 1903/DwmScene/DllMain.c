/*
 * XREFs of DllMain @ 0x18000D450
 * Callers:
 *     __scrt_dllmain_after_initialize_c @ 0x180125BDC (__scrt_dllmain_after_initialize_c.c)
 *     ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1801263CC (-dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return 1;
}
