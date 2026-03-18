/*
 * XREFs of VfZwAlpcCreateResourceReserve @ 0x140985FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14098A1AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreateResourceReserve(__int64 a1, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, ULONG_PTR))pXdvZwAlpcCreateResourceReserve)(a1, a2, a3, a4);
}
