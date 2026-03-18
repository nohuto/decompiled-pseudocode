/*
 * XREFs of DesktopVerifyHeapRange @ 0x1C01EAC3C
 * Callers:
 *     NtUserSetWindowLong @ 0x1C00A82A0 (NtUserSetWindowLong.c)
 *     NtUserSetWindowLongPtr @ 0x1C00AB4F0 (NtUserSetWindowLongPtr.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C00DE118 (DesktopVerifyHeapPointer.c)
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
