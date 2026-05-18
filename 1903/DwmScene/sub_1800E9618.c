/*
 * XREFs of sub_1800E9618 @ 0x1800E9618
 * Callers:
 *     sub_1800E985C @ 0x1800E985C (sub_1800E985C.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800E97C8 @ 0x1800E97C8 (sub_1800E97C8.c)
 *     sub_1800E9C64 @ 0x1800E9C64 (sub_1800E9C64.c)
 *     sub_1800E9D38 @ 0x1800E9D38 (sub_1800E9D38.c)
 */

__int64 __fastcall sub_1800E9618(_QWORD *a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // [rsp+20h] [rbp-68h]
  _QWORD *v24; // [rsp+20h] [rbp-68h]
  unsigned __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+40h] [rbp-48h]

  v7 = (a2 - *a1) / 56;
  v8 = (a1[1] - *a1) / 56LL;
  if ( v8 == 0x492492492492492LL )
    std::vector<void *>::_Xlen();
  v9 = v8 + 1;
  v10 = (a1[2] - *a1) / 56LL;
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v25 = v12;
  v13 = sub_1800E9D38(a1, v12);
  v14 = v13;
  v28 = v13;
  v27 = 56 * v7;
  v15 = 56 * v7 + v13;
  v16 = *a6;
  v17 = *a5;
  *(_DWORD *)v15 = *a3;
  *(_QWORD *)(v15 + 24) = 0LL;
  *(_QWORD *)(v15 + 32) = 0LL;
  try
  {
    sub_18000F3F4((_QWORD *)(v15 + 8), a4);
    *(_QWORD *)(v15 + 40) = v17;
    *(_QWORD *)(v15 + 48) = v16;
    v23 = v15;
    v18 = a1[1];
    v19 = a1;
    v20 = v14;
    v21 = *a1;
    if ( a2 != v18 )
    {
      sub_1800E97C8(v21, a2, v14, a1, v15, v12);
      v23 = v14;
      v19 = a1;
      v20 = v15 + 56;
      v18 = a1[1];
      v21 = a2;
    }
    sub_1800E97C8(v21, v18, v20, v19, v23, v25);
    sub_1800E9C64(a1, v14, v9, v12);
    result = v27 + *a1;
  }
  catch ( ... )
  {
    sub_18007DF9C((__int64)a1, v24, (_QWORD *)(v15 + 56));
    sub_180038CDC((__int64)a1, v28, v26);
    throw;
  }
  return result;
}
