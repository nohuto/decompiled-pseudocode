/*
 * XREFs of VfZwNotifyChangeKey @ 0x140948CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwNotifyChangeKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        int a6,
        char a7,
        ULONG_PTR a8,
        int a9,
        char a10)
{
  ULONG_PTR v14; // r8
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    if ( v14 )
    {
      ViZwCheckVirtualAddress(v14, retaddr);
      if ( (unsigned int)a4 > 6 && (unsigned int)(a4 - 32) > 0x1F )
        VerifierBugCheckIfAppropriate(0xC4u, 0xFCuLL, retaddr, a4, 0LL);
    }
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, ULONG_PTR, int, char, ULONG_PTR, int, char))pXdvZwNotifyChangeKey)(
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
