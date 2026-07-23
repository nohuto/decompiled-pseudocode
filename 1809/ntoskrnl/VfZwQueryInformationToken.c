/*
 * XREFs of VfZwQueryInformationToken @ 0x14094A070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryInformationToken(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v9; // r8
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, ULONG_PTR))pXdvZwQueryInformationToken)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3);
}
