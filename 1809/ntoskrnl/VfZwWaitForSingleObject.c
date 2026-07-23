/*
 * XREFs of VfZwWaitForSingleObject @ 0x14094B4D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWaitForSingleObject(__int64 a1, char a2, ULONG_PTR a3)
{
  __int64 v6; // rdx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, retaddr);
  LOBYTE(v6) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvZwWaitForSingleObject)(a1, v6, a3);
}
