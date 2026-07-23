/*
 * XREFs of VfZwQueryVolumeInformationFile @ 0x14094A700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryVolumeInformationFile(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int a4, int a5)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, ULONG_PTR, _QWORD, int))pXdvZwQueryVolumeInformationFile)(
           a1,
           a2,
           a3,
           a4,
           a5);
}
