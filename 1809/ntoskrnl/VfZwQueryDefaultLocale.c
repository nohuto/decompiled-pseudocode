/*
 * XREFs of VfZwQueryDefaultLocale @ 0x140949990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDefaultLocale(char a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  LOBYTE(v4) = a1;
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR))pXdvZwQueryDefaultLocale)(v4, a2);
}
