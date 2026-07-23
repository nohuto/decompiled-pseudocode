/*
 * XREFs of VfZwOpenThreadToken @ 0x140949390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenThreadToken(__int64 a1, unsigned int a2, char a3, ULONG_PTR a4)
{
  __int64 v8; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, retaddr);
  LOBYTE(v8) = a3;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, ULONG_PTR))pXdvZwOpenThreadToken)(a1, a2, v8, a4);
}
