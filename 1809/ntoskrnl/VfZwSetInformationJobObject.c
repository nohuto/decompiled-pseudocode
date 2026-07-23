/*
 * XREFs of VfZwSetInformationJobObject @ 0x14094ADE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetInformationJobObject(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD, ULONG_PTR, _QWORD))pXdvZwSetInformationJobObject)(a1, a2, a3, a4);
}
