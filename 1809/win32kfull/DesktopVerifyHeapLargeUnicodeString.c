/*
 * XREFs of DesktopVerifyHeapLargeUnicodeString @ 0x1C00F9D28
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     DefSetText @ 0x1C006A46C (DefSetText.c)
 *     NtUserInternalGetWindowText @ 0x1C00F9B70 (NtUserInternalGetWindowText.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C00F9D9C (DesktopVerifyHeapPointer.c)
 */

__int64 __fastcall DesktopVerifyHeapLargeUnicodeString(__int64 a1, ULONG_PTR a2)
{
  int v3; // r9d
  ULONG_PTR v4; // rdx

  if ( (*(_DWORD *)a2 & 1) != 0 || (v3 = *(_DWORD *)(a2 + 4), (v3 & 1) != 0) || *(_DWORD *)a2 >= (v3 & 0x7FFFFFFFu) )
    KeBugCheckEx(0x164u, 7uLL, a2, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 + (v3 & 0x7FFFFFFF) < v4 )
    KeBugCheckEx(0x164u, 6uLL, v4, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  DesktopVerifyHeapPointer(a1);
  return DesktopVerifyHeapPointer(a1);
}
