/*
 * XREFs of VfZwQueryDefaultLocale @ 0x140988370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14098A1AC (ViZwShouldCheck.c)
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
