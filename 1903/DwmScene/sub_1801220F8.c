/*
 * XREFs of sub_1801220F8 @ 0x1801220F8
 * Callers:
 *     sub_1801222A0 @ 0x1801222A0 (sub_1801222A0.c)
 * Callees:
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18012201C @ 0x18012201C (sub_18012201C.c)
 */

__int64 __fastcall sub_1801220F8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char *v4; // rcx
  void *v6; // rdx

  v2 = a2 + 8;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (char *)(a1 + 8);
  if ( v4 != (char *)(a2 + 8) )
  {
    v6 = (void *)(a2 + 8);
    if ( *(_QWORD *)(v2 + 24) >= 8uLL )
      v6 = *(void **)v2;
    sub_180026168(v4, v6, *(_QWORD *)(v2 + 16));
  }
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  sub_18012201C(a1 + 64, a2 + 64);
  return a1;
}
