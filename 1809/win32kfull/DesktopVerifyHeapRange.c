/*
 * XREFs of DesktopVerifyHeapRange @ 0x1C01D5670
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00665B0 (NtUserSetWindowLongPtr.c)
 *     NtUserSetWindowLong @ 0x1C0067D00 (NtUserSetWindowLong.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C00F9D9C (DesktopVerifyHeapPointer.c)
 */

ULONG_PTR __fastcall DesktopVerifyHeapRange(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    KeBugCheckEx(0x164u, 6uLL, a2, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  DesktopVerifyHeapPointer(a1, a2);
  return DesktopVerifyHeapPointer(a1, v3 - 1);
}
