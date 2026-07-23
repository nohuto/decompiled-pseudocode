/*
 * XREFs of VfZwDeviceIoControlFile @ 0x140948390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckApcRequirement @ 0x14094B634 (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeviceIoControlFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        int a6,
        ULONG_PTR a7,
        int a8,
        ULONG_PTR a9,
        int a10)
{
  ULONG_PTR v14; // r8
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v14, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a9, retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, ULONG_PTR, int, ULONG_PTR, int, ULONG_PTR, int))pXdvZwDeviceIoControlFile)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3,
           a6,
           a7,
           a8,
           a9,
           a10);
}
