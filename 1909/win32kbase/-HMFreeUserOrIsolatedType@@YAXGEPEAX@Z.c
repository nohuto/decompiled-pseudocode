/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0010A24
 * Callers:
 *     HMAllocObject @ 0x1C0028410 (HMAllocObject.c)
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 * Callees:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0010A94 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
    HMFreeIsolatedType(a2, a3);
  else
    Win32FreePool(a3);
}
