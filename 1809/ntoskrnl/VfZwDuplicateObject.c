/*
 * XREFs of VfZwDuplicateObject @ 0x1409484D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDuplicateObject(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, int a5, int a6, int a7)
{
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, retaddr);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, int, int, int))pXdvZwDuplicateObject)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
