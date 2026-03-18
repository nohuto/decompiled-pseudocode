/*
 * XREFs of itrp_DeltaEngine @ 0x1C02C6A7C
 * Callers:
 *     itrp_DELTAC1 @ 0x1C02C6750 (itrp_DELTAC1.c)
 *     itrp_DELTAC2 @ 0x1C02C6790 (itrp_DELTAC2.c)
 *     itrp_DELTAC3 @ 0x1C02C67D0 (itrp_DELTAC3.c)
 *     itrp_DELTAP1 @ 0x1C02C6810 (itrp_DELTAP1.c)
 *     itrp_DELTAP2 @ 0x1C02C6850 (itrp_DELTAP2.c)
 *     itrp_DELTAP3 @ 0x1C02C6890 (itrp_DELTAP3.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 *     itrp_GetCVTScale @ 0x1C02C8320 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_DeltaEngine(__int64 a1, int a2, __int16 a3, char a4)
{
  __int64 v6; // r8
  int v7; // r12d
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // edi
  int CVTScale; // eax
  int fixed; // eax
  unsigned int v16; // edi
  int v17; // edi
  int v18; // r10d
  signed int v19; // r9d
  int v20; // r8d
  __int64 v21; // rsi
  char v22; // cl
  __int64 i; // r15
  __int64 v24; // r13
  int v25; // r8d
  __int64 v26; // rbx
  unsigned int v27; // r8d
  _WORD *v28; // r8
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // dx
  unsigned __int16 v31; // ax
  __int64 v32; // rsi
  signed int v33; // ebp
  int v34; // r14d
  __int16 v35; // ax
  __int64 v36; // rax
  __int16 v37; // cx
  bool v38; // zf
  __int16 v39; // ax
  unsigned int v41; // [rsp+20h] [rbp-58h]
  char v42; // [rsp+24h] [rbp-54h]
  __int64 v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h]

  v6 = a1;
  if ( (*(_QWORD *)(qword_1C0327180 + 424) ^ qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327180 + 432)
    && (v7 = 1, (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2)
    && (v8 = (_DWORD *)(qword_1C0327168 - 4),
        qword_1C0327168 = (__int64)v8,
        v9 = *(_QWORD *)qword_1C0327180,
        v10 = 2 * *v8,
        (*(_QWORD *)(qword_1C0327180 + 424) ^ qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327180 + 432))
    && (v11 = v10, v44 = v10, v10 <= (unsigned __int64)(((__int64)v8 - v9) >> 2)) )
  {
    v12 = (__int64)&v8[-v10];
    qword_1C0327168 = v12;
    v13 = *(unsigned __int16 *)(qword_1C0327180 + 24);
    if ( !*(_BYTE *)(qword_1C0327180 + 340) )
    {
      CVTScale = itrp_GetCVTScale(v12, v9, v6);
      fixed = FixMul(v13, CVTScale);
      v6 = a1;
      v13 = fixed;
    }
    v16 = v13 - a3;
    if ( v16 > 0xF )
    {
      return v6;
    }
    else
    {
      v17 = 16 * v16;
      v18 = 0;
      v19 = v10;
      while ( 1 )
      {
        v19 = (v19 >> 1) & 0xFFFFFFFE;
        if ( v19 <= 2 )
          break;
        v20 = v18 + v19;
        if ( (int)(*(_DWORD *)(qword_1C0327168 + 4LL * (v18 + v19)) & 0xFFFFFFF0) >= v17 )
          v20 = v18;
        v18 = v20;
      }
      if ( v18 < v10 )
      {
        v21 = v18;
        v22 = a4;
        v42 = a4;
        v43 = v18;
        for ( i = 4LL * v18 + 4; ; i += 8LL )
        {
          v24 = qword_1C0327168;
          v25 = *(_DWORD *)(i + qword_1C0327168 - 4);
          if ( (v25 & 0xFFFFFFF0) == v17 )
            break;
          if ( (int)(v25 & 0xFFFFFFF0) > v17 )
            return a1;
LABEL_59:
          v21 += 2LL;
          v43 = v21;
          if ( v21 >= v11 )
            return a1;
        }
        v26 = qword_1C0327180;
        v27 = ((v25 & 0xF) - (((v25 & 0xFu) < 8) + 7)) << 6 >> v22;
        v41 = v27;
        if ( a2 == dword_1C03271AC )
        {
          v28 = *(_WORD **)(qword_1C0327180 + 344);
          v29 = v28[4];
          v30 = v28[6];
          v31 = v29;
          if ( v29 <= v30 )
            v31 = v28[6];
          if ( v31 > 1u )
          {
            if ( v29 <= v30 )
              v29 = v28[6];
            v7 = v29;
          }
          v32 = LocalGS;
          v33 = *(_DWORD *)(i + qword_1C0327168);
          if ( qword_1C0327178 == LocalGS )
          {
            if ( v33 >= (unsigned __int16)v28[8] || v33 < 0 )
              goto LABEL_63;
            v34 = 1;
          }
          else
          {
            if ( v33 >= *(_DWORD *)(qword_1C0327180 + 440) || v33 < 0 )
            {
LABEL_63:
              dword_1C03271D0 = 4370;
              return qword_1C03271D8;
            }
            v34 = 5;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
            goto LABEL_63;
          v35 = *(_WORD *)(v32 + 80);
          if ( v35 < 1 || v35 > v7 )
          {
            v7 = 1;
          }
          else
          {
            if ( *(_DWORD *)(i + v24) >= v34 + *(__int16 *)(*(_QWORD *)(v32 + 64) + 2LL * (v35 - 1)) )
              goto LABEL_63;
            v7 = 1;
          }
          v27 = v41;
          v21 = v43;
          v11 = v44;
        }
        else
        {
          v36 = *(unsigned __int16 *)(qword_1C0327180 + 360);
          v33 = *(_DWORD *)(i + qword_1C0327168);
          if ( v33 >= (int)v36
            || v33 < 0
            || (qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ v36 ^ *(_QWORD *)(qword_1C0327180 + 16)) != *(_QWORD *)(qword_1C0327180 + 368) )
          {
            dword_1C03271D0 = 4379;
            return qword_1C03271D8;
          }
        }
        if ( a2 == dword_1C03271C4 )
          goto LABEL_57;
        v37 = *(_WORD *)(v26 + 452);
        if ( (v37 & 1) == 0 || (*(_BYTE *)(v26 + 120) & 4) != 0 )
          goto LABEL_57;
        if ( (v37 & 4) != 0 )
        {
          if ( dword_1C0327158 != 0x4000 )
            goto LABEL_55;
          if ( !*(_BYTE *)(v26 + 341) )
          {
            if ( (*(_BYTE *)(*(__int16 *)(i + v24) + *(_QWORD *)(LocalGS + 72)) & 1) == 0 )
              goto LABEL_55;
            v38 = (*(_BYTE *)(v26 + 454) & 1) == 0;
LABEL_53:
            if ( v38 )
              goto LABEL_54;
LABEL_55:
            v39 = 0;
LABEL_56:
            if ( !v39 )
            {
LABEL_58:
              v22 = v42;
              goto LABEL_59;
            }
LABEL_57:
            InvokeMovePoint(a2, (_QWORD *)LocalGS, v33, v27);
            goto LABEL_58;
          }
        }
        else
        {
          if ( dword_1C0327158 != 0x40000000 )
            goto LABEL_55;
          if ( !*(_BYTE *)(v26 + 341) )
          {
            if ( (*(_BYTE *)(*(__int16 *)(i + v24) + *(_QWORD *)(LocalGS + 72)) & 2) == 0 )
              goto LABEL_55;
            v38 = (*(_BYTE *)(v26 + 454) & 2) == 0;
            goto LABEL_53;
          }
        }
LABEL_54:
        v39 = 1;
        goto LABEL_56;
      }
      return a1;
    }
  }
  else
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
}
