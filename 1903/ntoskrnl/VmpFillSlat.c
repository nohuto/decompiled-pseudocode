/*
 * XREFs of VmpFillSlat @ 0x140329F94
 * Callers:
 *     VmpProcessUpdateSlat @ 0x14032AE30 (VmpProcessUpdateSlat.c)
 * Callees:
 *     HvlMapGpaPages @ 0x14034D86C (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x14034D9C8 (HvlMapSparseGpaPages.c)
 */

__int64 __fastcall VmpFillSlat(int a1, int a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // r10
  _QWORD *v10; // r8
  _QWORD *i; // rcx
  __int64 result; // rax

  v5 = a3;
  if ( a3 != 512 )
    return HvlMapSparseGpaPages(a1, a2, v5, (_DWORD)a4, (__int64)a5);
  v8 = *a4;
  if ( (*a4 & 0x1FF) != 0 )
    return HvlMapSparseGpaPages(a1, a2, v5, (_DWORD)a4, (__int64)a5);
  v9 = a4[1];
  if ( (v9 & 0x1FF) != 0 )
    return HvlMapSparseGpaPages(a1, a2, v5, (_DWORD)a4, (__int64)a5);
  v10 = a4 + 1024;
  if ( a4[1022] != v8 + 511 || a4[1023] != v9 + 511 )
    return HvlMapSparseGpaPages(a1, a2, v5, (_DWORD)a4, (__int64)a5);
  for ( i = a4 + 2; i < v10 && *i == *(i - 2) + 1LL && i[1] == *(i - 1) + 1LL; i += 2 )
    ;
  if ( i != v10 )
    return HvlMapSparseGpaPages(a1, a2, v5, (_DWORD)a4, (__int64)a5);
  result = HvlMapGpaPages(a1, v8, a2 | 0x2000u, 1, (__int64)(a4 + 1), (__int64)a5);
  *a5 <<= 9;
  return result;
}
