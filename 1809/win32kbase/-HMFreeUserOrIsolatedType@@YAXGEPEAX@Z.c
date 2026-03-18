/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002E75C
 * Callers:
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C002DDE0 (HMAllocObject.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C002E78C (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
    HMFreeIsolatedType(a2, a3);
  else
    Win32FreePool((__int64)a3);
}
