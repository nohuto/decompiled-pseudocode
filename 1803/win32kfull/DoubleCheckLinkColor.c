/*
 * XREFs of DoubleCheckLinkColor @ 0x1C02C4E94
 * Callers:
 *     itrp_MIRP @ 0x1C02CBB50 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02CC450 (itrp_MSIRP.c)
 * Callees:
 *     ContNum @ 0x1C02C4E58 (ContNum.c)
 */

__int64 __fastcall DoubleCheckLinkColor(_QWORD *a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // r11
  __int64 v11; // r14
  int v12; // r15d
  int v13; // edx
  int v14; // r12d
  int v15; // ecx
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r10
  int v19; // ebx
  int v20; // esi
  int v21; // r13d
  int v22; // r8d
  int v23; // ecx
  bool v24; // sf
  bool v25; // of
  int v26; // ecx
  bool v27; // zf
  int v28; // eax
  int v29; // ebp
  int v30; // eax
  int v31; // ecx
  int v32; // ebx
  int v33; // esi
  int v34; // ebx
  int v35; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v6 = a3;
  if ( (int)ContNum((__int64)a1, a2) < 0 )
    return 0LL;
  v8 = ContNum((__int64)a1, v6);
  if ( v8 < 0 )
    return 0LL;
  if ( (_DWORD)v9 != v8 )
    return a4;
  _mm_lfence();
  v11 = v9;
  v12 = *(__int16 *)(a1[7] + 2 * v9);
  v13 = v12;
  v14 = *(__int16 *)(a1[8] + 2 * v9);
  v15 = v14;
  if ( (_DWORD)v4 != v14 )
    v13 = v4 + 1;
  if ( (_DWORD)v4 != v12 )
    v15 = v4 - 1;
  if ( (_DWORD)v6 != v13 && (_DWORD)v6 != v15 )
    return a4;
  v16 = a1[4];
  v17 = v4;
  v18 = a1[5];
  v19 = *(_DWORD *)(v16 + 4 * v4);
  v20 = *(_DWORD *)(v18 + 4 * v17);
  v21 = *(_DWORD *)(v16 + 4 * v6);
  v22 = (*(_DWORD *)(v18 + 4LL * v13) - v20) * (v19 - *(_DWORD *)(v16 + 4LL * v15));
  v23 = (*(_DWORD *)(v16 + 4LL * v13) - v19) * (v20 - *(_DWORD *)(v18 + 4LL * v15));
  v25 = __OFSUB__(v22, v23);
  v24 = v22 - v23 < 0;
  v26 = v14;
  if ( (_DWORD)v6 != v12 )
    v26 = v6 - 1;
  v27 = (_DWORD)v6 == v14;
  v28 = v6 + 1;
  v29 = *(_DWORD *)(v18 + 4 * v6);
  if ( !v27 )
    v12 = v28;
  v35 = v24 ^ v25;
  if ( v35 != (*(_DWORD *)(v18 + 4LL * v12) - v29) * (v21 - *(_DWORD *)(v16 + 4LL * v26)) < (*(_DWORD *)(v16 + 4LL * v12)
                                                                                           - v21)
                                                                                          * (v29
                                                                                           - *(_DWORD *)(v18 + 4LL * v26)) )
    return 0LL;
  v30 = v21 - v19;
  v31 = v29 - v20;
  v32 = v19 - v21;
  if ( v30 >= 0 )
    v32 = v30;
  v33 = v20 - v29;
  v34 = 2 * v32;
  if ( v31 >= 0 )
    v33 = v31;
  if ( v34 >= v33 )
    return (v35 ^ (unsigned int)((*(_BYTE *)(a1[11] + v11) & 1) == 0)) + 1;
  else
    return 0LL;
}
