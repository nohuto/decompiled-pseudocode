/*
 * XREFs of DesktopVerifyHeapLargeUnicodeString @ 0x1C00DDD48
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     DefSetText @ 0x1C002FFEC (DefSetText.c)
 *     NtUserInternalGetWindowText @ 0x1C00DDB90 (NtUserInternalGetWindowText.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall DesktopVerifyHeapLargeUnicodeString(__int64 a1, ULONG_PTR a2)
{
  int v2; // r9d
  ULONG_PTR v3; // r8
  __int64 v4; // r10
  ULONG_PTR v5; // r9
  ULONG_PTR v6; // r10
  ULONG_PTR result; // rax
  ULONG_PTR v8; // r8

  if ( (*(_DWORD *)a2 & 1) != 0 || (v2 = *(_DWORD *)(a2 + 4), (v2 & 1) != 0) || *(_DWORD *)a2 >= (v2 & 0x7FFFFFFFu) )
    KeBugCheckEx(0x164u, 7uLL, a2, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  v3 = *(_QWORD *)(a2 + 8);
  v4 = v2 & 0x7FFFFFFF;
  v5 = *(_QWORD *)(a1 + 128);
  v6 = v3 + v4;
  if ( v6 < v3 )
    KeBugCheckEx(0x164u, 6uLL, v3, v5, *(unsigned int *)(a1 + 136));
  if ( v3 < v5 || (result = v5 + *(unsigned int *)(a1 + 136), v3 >= result) )
    KeBugCheckEx(0x164u, 6uLL, v3, v5, *(unsigned int *)(a1 + 136));
  v8 = v6 - 1;
  if ( v6 - 1 < v5 || v8 >= result )
    KeBugCheckEx(0x164u, 6uLL, v8, v5, *(unsigned int *)(a1 + 136));
  return result;
}
