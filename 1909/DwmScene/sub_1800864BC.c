/*
 * XREFs of sub_1800864BC @ 0x1800864BC
 * Callers:
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_1800865F0 @ 0x1800865F0 (sub_1800865F0.c)
 * Callees:
 *     sub_18008644C @ 0x18008644C (sub_18008644C.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 */

unsigned __int64 __fastcall sub_1800864BC(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-20h]
  __int128 v13; // [rsp+20h] [rbp-20h]
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF

  sub_180087524(a1);
  *(_QWORD *)&v12 = *(_QWORD *)a2;
  DWORD2(v12) = *(_DWORD *)(a2 + 8);
  sub_180087524(a1);
  *(_DWORD *)(a1 + 144) = v12;
  *(_QWORD *)(a1 + 148) = *(_QWORD *)((char *)&v12 + 4);
  v8 = _InterlockedIncrement64(&qword_180259748);
  *(_QWORD *)(a1 + 208) = v8;
  v9 = *(_QWORD *)(a1 + 216);
  if ( v8 >= v9 )
    v9 = v8;
  *(_QWORD *)(a1 + 216) = v9;
  v14 = *a3;
  sub_18008644C(a1, &v14);
  *(_QWORD *)&v13 = *(_QWORD *)a4;
  DWORD2(v13) = *(_DWORD *)(a4 + 8);
  sub_180087524(a1);
  *(_DWORD *)(a1 + 172) = v13;
  *(_QWORD *)(a1 + 176) = *(_QWORD *)((char *)&v13 + 4);
  v10 = _InterlockedIncrement64(&qword_180259748);
  *(_QWORD *)(a1 + 208) = v10;
  result = *(_QWORD *)(a1 + 216);
  if ( v10 >= result )
    result = v10;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
