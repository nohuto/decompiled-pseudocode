/*
 * XREFs of VfZwPrepareEnlistment @ 0x140948770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094A784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094A7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwPrepareEnlistment(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR))pXdvZwPrepareEnlistment)(a1, a2);
}
