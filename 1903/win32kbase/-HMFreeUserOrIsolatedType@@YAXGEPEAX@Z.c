/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0053D70
 * Callers:
 *     HMAllocObject @ 0x1C0027A70 (HMAllocObject.c)
 *     HMFreeObject @ 0x1C00283C0 (HMFreeObject.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0053DE0 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
    HMFreeIsolatedType(a2, a3);
  else
    Win32FreePool((__int64)a3);
}
