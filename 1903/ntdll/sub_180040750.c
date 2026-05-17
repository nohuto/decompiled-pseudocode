/*
 * XREFs of sub_180040750 @ 0x180040750
 * Callers:
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 * Callees:
 *     sub_18004CC7C @ 0x18004CC7C (sub_18004CC7C.c)
 */

_BOOL8 sub_180040750()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_180166398 & 1) == 0 || (dword_180166398 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0LL;
  v3 = xmmword_1801638B0;
  v1 = (_QWORD *)sub_18004CC7C(&v3);
  return v2 != *v1;
}
