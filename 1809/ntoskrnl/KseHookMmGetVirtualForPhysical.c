/*
 * XREFs of KseHookMmGetVirtualForPhysical @ 0x1402A1790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KseHookMmGetVirtualForPhysical(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = __readcr3();
  if ( ((a1 ^ v1) & 0xFFFFFFFFFFFFF000uLL) == 0 && (a1 & 3) != 0 )
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
  return ((__int64 (__fastcall *)(__int64))qword_140402358)(a1);
}
