/*
 * XREFs of sub_180038840 @ 0x180038840
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_180068434 @ 0x180068434 (sub_180068434.c)
 *     sub_18006F7C4 @ 0x18006F7C4 (sub_18006F7C4.c)
 *     sub_18009BF64 @ 0x18009BF64 (sub_18009BF64.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 *     sub_18010BC08 @ 0x18010BC08 (sub_18010BC08.c)
 */

char *__fastcall sub_180038840(__int64 a1, unsigned int a2, int a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r14
  int v9; // r11d
  _DWORD *v10; // r13
  unsigned int v11; // esi
  unsigned __int64 *v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r8
  int v16; // edx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  char *v29; // rsi
  int v30; // r11d
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  int v34; // r9d
  __int16 v35; // ax
  __int16 v36; // cx
  int v38; // [rsp+70h] [rbp+8h]
  int v40; // [rsp+80h] [rbp+18h] BYREF

  v40 = a3;
  v6 = a5;
  v9 = sub_18009BF64(a2, &v40);
  v38 = v9;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 )
    v38 = ++v9;
  v10 = a6;
  v11 = v9 << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = a1;
      RtlAcquireSRWLockExclusive(a1);
    }
  }
  v12 = (unsigned __int64 *)(a1 + 16);
  LODWORD(a6) = v40;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *v12;
    if ( (v13 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= (unsigned __int64)v12;
      else
        v14 = 0LL;
    }
    v15 = 0LL;
    v16 = v13 & 1;
    while ( v14 )
    {
      v17 = qword_180163540 ^ (v14 - 8) ^ *(_DWORD *)(v14 - 8);
      if ( v11 < v17 )
      {
        v18 = *(_QWORD *)v14;
        v15 = (_QWORD *)v14;
      }
      else
      {
        if ( v11 <= v17 )
          goto LABEL_22;
        v18 = *(_QWORD *)(v14 + 8);
      }
      if ( v16 && v18 )
        v14 ^= v18;
      else
        v14 = v18;
    }
    v14 = (unsigned __int64)v15;
LABEL_22:
    if ( v14 )
      break;
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v6 + 8));
      *(_QWORD *)(v6 + 8) = 0LL;
    }
    v19 = (unsigned int)a6;
    *v10 = 0;
    v20 = sub_18006F7C4(a1, v19, a4);
    if ( !v20 )
      return 0LL;
    *v10 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = a1;
      RtlAcquireSRWLockExclusive(a1);
    }
    v21 = (a1 + 32) ^ *(_QWORD *)(a1 + 40);
    if ( (v21 ^ *(_QWORD *)v21) != a1 + 32 )
      __fastfail(3u);
    v22 = v20 ^ (a1 + 32);
    *(_QWORD *)v20 = v22;
    *(_QWORD *)(v20 + 8) = v20 ^ v21;
    *(_QWORD *)v21 = v20 ^ v21;
    *(_QWORD *)(a1 + 40) = v22;
    if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v20 + 80) & 0xFFF) != 0 )
    {
      v23 = sub_18010BC08(v22, v20, v20 + 48);
      if ( v23 )
        sub_180068434(a1, v20, v23);
    }
    sub_180068434(a1, v20, v20 + 48);
  }
  v24 = *(_QWORD *)(v14 - 8);
  v25 = v14 - 8;
  if ( ((HIDWORD(v24) ^ HIDWORD(qword_180163540) ^ ((v14 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v26 = (unsigned __int8)(*(_BYTE *)v14 ^ qword_180163540 ^ (v14 - 8));
    goto LABEL_43;
  }
  if ( !(WORD2(v24) ^ (unsigned __int16)(WORD2(qword_180163540) ^ ((v14 - 8) >> 32))) )
    goto LABEL_42;
  v25 = v14 - 8 - 16LL * (unsigned __int16)((qword_180163540 ^ v24 ^ (v14 - 8)) >> 32);
  v27 = HIDWORD(qword_180163540) ^ HIDWORD(v25) ^ HIDWORD(*(_QWORD *)v25);
  if ( (v27 & 0xFF0000) != 0 )
  {
    v26 = (unsigned __int8)(qword_180163540 ^ v25 ^ *(_BYTE *)(v25 + 8));
    goto LABEL_43;
  }
  if ( (_WORD)v27 )
  {
    v25 -= 16LL * (unsigned __int16)((qword_180163540 ^ (unsigned __int64)v25 ^ *(_QWORD *)v25) >> 32);
    v26 = (unsigned __int8)(qword_180163540 ^ v25 ^ *(_BYTE *)(v25 + 8));
  }
  else
  {
LABEL_42:
    v26 = 0;
  }
LABEL_43:
  v28 = (v25 - (unsigned int)(v26 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v28 + 32) ^ *(_WORD *)(v28 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    sub_18010A694(18, a1 ^ *(_QWORD *)(a1 + 128), v28, v14 - 8, 0LL, 0LL);
    return 0LL;
  }
  v30 = v38;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v14 + 24) & 0xFFF) != 0 )
    v30 = v38 - 1;
  if ( !(unsigned int)sub_180039740(a1, v28, (int)v14 - 8, v30, a4, v6) )
    return 0LL;
  v29 = (char *)(v14 + 8);
  v31 = 16 * (WORD1(qword_180163540) ^ ((unsigned int)(v14 - 8) >> 16) ^ *(unsigned __int16 *)(v14 - 6)) - 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v14 + 24) & 0xFFF) == 0 )
  {
    v29 = (char *)(v14 + 24);
    v31 = 16 * (WORD1(qword_180163540) ^ ((unsigned int)(v14 - 8) >> 16) ^ *(unsigned __int16 *)(v14 - 6)) - 32;
  }
  v32 = *(_DWORD *)v14;
  if ( a2 >= (unsigned int)v31 )
  {
    *(_DWORD *)v14 = v32 & 0xFFFFFEFF;
  }
  else
  {
    v33 = (unsigned int)v31;
    v34 = v31 - a2;
    *(_DWORD *)v14 = v32 | 0x100;
    v29[v31 - 1] = 0;
    v35 = *(_WORD *)&v29[v31 - 2];
    v36 = v35 ^ ((v31 - a2) ^ v35) & 0x1FFF;
    if ( v34 == 1 )
      v36 = v35 | 0x8000;
    *(_WORD *)&v29[v33 - 2] = v36;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(v6 + 8));
      *(_QWORD *)(v6 + 8) = 0LL;
    }
    *v10 = 0;
    memset(v29, 0, a2);
  }
  return v29;
}
