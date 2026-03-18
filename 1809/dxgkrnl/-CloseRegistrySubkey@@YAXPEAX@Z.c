/*
 * XREFs of ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1C0135A48
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z @ 0x1C00AE7D4 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseRegistrySubkey(void *a1)
{
  if ( a1 )
    ZwClose(a1);
}
