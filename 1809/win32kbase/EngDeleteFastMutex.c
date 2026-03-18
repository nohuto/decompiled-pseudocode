/*
 * XREFs of EngDeleteFastMutex @ 0x1C01066E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __stdcall EngDeleteFastMutex(HFASTMUTEX hfm)
{
  if ( hfm )
    Win32FreePool((__int64)hfm);
}
