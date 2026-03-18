/*
 * XREFs of itrp_SHE @ 0x1C02CEB20
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SH_Common @ 0x1C02CF5E8 (itrp_SH_Common.c)
 */

__int64 __fastcall itrp_SHE(__int64 a1, unsigned int a2)
{
  int v3; // r12d
  _WORD *v4; // r10
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // ax
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // r14d
  int v11; // ebx
  int v12; // eax
  int v13; // esi
  bool v14; // cc
  __int16 v15; // ax
  _WORD *v17; // r8
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // ax
  __int64 v21; // r13
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rbx
  _WORD *v26; // r9
  unsigned __int16 v27; // dx
  __int64 v28; // rbp
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // ax
  int v31; // r15d
  int v32; // edi
  __int16 v33; // ax
  __int64 v34; // rdi
  __int64 v35; // r15
  _WORD *v36; // r8
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // dx
  __int64 v39; // rsi
  unsigned __int16 v40; // ax
  __int16 v41; // ax
  int v42; // r9d
  int v43; // r10d
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  _DWORD *v47; // r8
  unsigned __int64 v48; // rcx
  int v49; // edx
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  _DWORD *v53; // r8
  unsigned __int64 v54; // rcx
  int v55; // edx
  __int64 v56; // rdx
  int v57; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v58[21]; // [rsp+24h] [rbp-54h] BYREF
  int v60; // [rsp+88h] [rbp+10h] BYREF
  int v61; // [rsp+90h] [rbp+18h]

  v61 = 0;
  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    v4 = *(_WORD **)(qword_1C0327180 + 344);
    v5 = v4[4];
    v6 = v4[6];
    v7 = v5;
    if ( v5 <= v6 )
      v7 = v4[6];
    if ( v7 <= 1u )
    {
      v8 = 1;
    }
    else
    {
      if ( v5 <= v6 )
        v5 = v4[6];
      v8 = v5;
    }
    v9 = LocalGS;
    v10 = 5;
    v11 = HIDWORD(qword_1C0327190);
    if ( qword_1C0327178 == LocalGS )
    {
      v12 = (unsigned __int16)v4[8];
      goto LABEL_11;
    }
    v14 = SHIDWORD(qword_1C0327190) < *(_DWORD *)(qword_1C0327180 + 440);
  }
  else
  {
    v17 = *(_WORD **)(qword_1C0327180 + 344);
    v18 = v17[4];
    v19 = v17[6];
    v20 = v18;
    if ( v18 <= v19 )
      v20 = v17[6];
    if ( v20 <= 1u )
    {
      v8 = 1;
    }
    else
    {
      if ( v18 <= v19 )
        v18 = v17[6];
      v8 = v18;
    }
    v9 = qword_1C0327148;
    v10 = 5;
    v11 = dword_1C0327198;
    if ( qword_1C0327178 == qword_1C0327148 )
    {
      v12 = (unsigned __int16)v17[8];
LABEL_11:
      if ( v11 >= v12 || v11 < 0 )
        goto LABEL_22;
      v13 = 1;
      goto LABEL_18;
    }
    v14 = dword_1C0327198 < *(_DWORD *)(qword_1C0327180 + 440);
  }
  if ( !v14 || v11 < 0 )
    goto LABEL_22;
  v13 = 5;
LABEL_18:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v9) )
    goto LABEL_22;
  v15 = *(_WORD *)(v9 + 80);
  if ( v15 >= 1 && v15 <= v8 && v11 >= v13 + *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v15 - 1)) )
    goto LABEL_22;
  v21 = itrp_SH_Common(&v57, v58, &v60, a2);
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || !((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v22 = *(int *)qword_1C0327168;
  if ( (unsigned int)v22 > 1 )
  {
    dword_1C03271D0 = 4374;
    return qword_1C03271D8;
  }
  v23 = *(_BYTE *)(qword_1C0327180 + 333);
  if ( v23 != 2 && (v23 || qword_1C0327178 != qword_1C0327178 + 112 * v22) )
  {
    dword_1C03271D0 = 4380;
    return qword_1C03271D8;
  }
  _mm_lfence();
  v24 = qword_1C0327178;
  v25 = 112 * v22;
  v26 = *(_WORD **)(qword_1C0327180 + 344);
  v27 = v26[6];
  v28 = *(__int16 *)(*(_QWORD *)(v25 + qword_1C0327178 + 64) + 2LL * (*(__int16 *)(v25 + qword_1C0327178 + 80) - 1));
  v29 = v26[4];
  v30 = v29;
  if ( v29 <= v27 )
    v30 = v26[6];
  if ( v30 <= 1u )
  {
    v31 = 1;
  }
  else
  {
    if ( v29 <= v27 )
      v29 = v26[6];
    v31 = v29;
  }
  if ( qword_1C0327178 == v25 + qword_1C0327178 )
  {
    if ( (int)v28 >= (unsigned __int16)v26[8] || (int)v28 < 0 )
      goto LABEL_22;
    v32 = 1;
  }
  else
  {
    if ( (int)v28 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v28 < 0 )
      goto LABEL_22;
    v32 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v25 + qword_1C0327178) )
    goto LABEL_22;
  v33 = *(_WORD *)(v25 + v24 + 80);
  if ( v33 >= 1 && v33 <= v31 )
  {
    _mm_lfence();
    if ( (int)v28 >= v32
                   + *(__int16 *)(*(_QWORD *)(v25 + qword_1C0327178 + 64)
                                + 2LL * (*(__int16 *)(v25 + qword_1C0327178 + 80) - 1)) )
      goto LABEL_22;
  }
  _mm_lfence();
  v34 = qword_1C0327178;
  v35 = v25 + qword_1C0327178;
  v36 = *(_WORD **)(qword_1C0327180 + 344);
  v37 = v36[4];
  v38 = v36[6];
  v39 = **(__int16 **)(v25 + qword_1C0327178 + 56);
  v40 = v37;
  if ( v37 <= v38 )
    v40 = v36[6];
  if ( v40 > 1u )
  {
    if ( v37 <= v38 )
      v37 = v36[6];
    v3 = v37;
  }
  if ( qword_1C0327178 == v25 + qword_1C0327178 )
  {
    if ( (int)v39 >= (unsigned __int16)v36[8] || (int)v39 < 0 )
      goto LABEL_22;
    v10 = 1;
  }
  else if ( (int)v39 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v39 < 0 )
  {
    goto LABEL_22;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v25 + qword_1C0327178)
    || (v41 = *(_WORD *)(v35 + 80), v41 >= 1)
    && v41 <= v3
    && (_mm_lfence(),
        v34 = qword_1C0327178,
        (int)v39 >= v10
                  + *(__int16 *)(*(_QWORD *)(v25 + qword_1C0327178 + 64)
                               + 2LL * (*(__int16 *)(v25 + qword_1C0327178 + 80) - 1))) )
  {
LABEL_22:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  if ( v21 == v25 + v34 )
  {
    _mm_lfence();
    v42 = *(_DWORD *)(*(_QWORD *)(v25 + qword_1C0327178) + 4LL * v60);
    v43 = *(_DWORD *)(*(_QWORD *)(v25 + qword_1C0327178 + 8) + 4LL * v60);
  }
  else
  {
    v42 = v61;
    v43 = v61;
  }
  if ( (_WORD)dword_1C032715C )
  {
    _mm_lfence();
    v44 = *(_QWORD *)(v25 + qword_1C0327178);
    v45 = 1LL;
    v46 = v44 + 4 * v28;
    v47 = (_DWORD *)(v44 + 4 * v39);
    v48 = (unsigned __int64)(4 * v28 - 4 * v39 + 4) >> 2;
    if ( (unsigned __int64)v47 > v46 )
      v48 = 0LL;
    if ( v48 )
    {
      v49 = v57;
      do
      {
        *v47 += v49;
        ++v45;
        ++v47;
      }
      while ( v45 <= v48 );
    }
  }
  if ( HIWORD(dword_1C032715C) )
  {
    _mm_lfence();
    v50 = *(_QWORD *)(v25 + qword_1C0327178 + 8);
    v51 = 1LL;
    v52 = v50 + 4 * v28;
    v53 = (_DWORD *)(v50 + 4 * v39);
    v54 = (unsigned __int64)(4 * v28 - 4 * v39 + 4) >> 2;
    if ( (unsigned __int64)v53 > v52 )
      v54 = 0LL;
    if ( v54 )
    {
      v55 = v58[0];
      do
      {
        *v53 += v55;
        ++v51;
        ++v53;
      }
      while ( v51 <= v54 );
    }
  }
  if ( v21 == v25 + qword_1C0327178 )
  {
    v56 = v60;
    *(_DWORD *)(*(_QWORD *)(v25 + qword_1C0327178) + 4LL * v60) = v42;
    *(_DWORD *)(*(_QWORD *)(v25 + qword_1C0327178 + 8) + 4 * v56) = v43;
  }
  return a1;
}
