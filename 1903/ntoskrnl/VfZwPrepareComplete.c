/*
 * XREFs of VfZwPrepareComplete @ 0x140988100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14098A1AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwPrepareComplete(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR))pXdvZwPrepareComplete)(a1, a2);
}
