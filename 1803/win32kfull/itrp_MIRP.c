/*
 * XREFs of itrp_MIRP @ 0x1C02CBB50
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02C4AFC (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     DoubleCheckLinkColor @ 0x1C02C4E94 (DoubleCheckLinkColor.c)
 *     InvokeGetCVTEntry @ 0x1C02C524C (InvokeGetCVTEntry.c)
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 *     itrp_CheckSingleWidth @ 0x1C02C65EC (itrp_CheckSingleWidth.c)
 *     itrp_RoundOff @ 0x1C02CDBF8 (itrp_RoundOff.c)
 *     itrp_RoundOffSP @ 0x1C02CDC20 (itrp_RoundOffSP.c)
 */

__int64 __fastcall itrp_MIRP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // r15
  __int64 v5; // r14
  int *v6; // rdx
  _WORD *v7; // rcx
  __int64 v8; // r12
  int v9; // edi
  unsigned __int16 v10; // bp
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  int v13; // esi
  __int16 v14; // ax
  __int64 v15; // rsi
  unsigned __int16 v16; // ax
  int v17; // ebp
  __int16 v18; // ax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // edi
  __int64 v23; // r12
  signed int v24; // esi
  __int64 v25; // rdx
  __int16 v26; // r8
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  __int16 v32; // r10
  int v33; // edi
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r10d
  signed int v37; // r8d
  int v38; // r9d
  __int16 v39; // dx
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // r8d
  int v45; // ecx
  signed int v46; // eax
  int v47; // eax
  int v48; // r9d
  __int16 v49; // dx
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  unsigned int v54; // r8d
  int v55; // ecx
  signed int v56; // eax
  int v57; // eax
  int v59; // [rsp+30h] [rbp-58h]
  __int64 v60; // [rsp+38h] [rbp-50h]
  _WORD *v61; // [rsp+40h] [rbp-48h]
  signed int v63; // [rsp+A0h] [rbp+18h]
  int v64; // [rsp+A8h] [rbp+20h]

  v2 = qword_1C0327180;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) < 2 )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  v4 = LocalGS;
  v5 = qword_1C0327148;
  v6 = (int *)(qword_1C0327168 - 4);
  qword_1C0327168 = (__int64)v6;
  v59 = *v6;
  if ( *v6 >= *(unsigned __int16 *)(qword_1C0327180 + 360)
    || *v6 < 0
    || (qword_1C0327180 ^ *(_QWORD *)(qword_1C0327180 + 16) ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C0327180 + 360)) != *(_QWORD *)(qword_1C0327180 + 368) )
  {
    dword_1C03271D0 = 4379;
    return qword_1C03271D8;
  }
  qword_1C0327168 = (__int64)(v6 - 1);
  v7 = *(_WORD **)(qword_1C0327180 + 344);
  v61 = v7;
  v8 = *(v6 - 1);
  v63 = *(v6 - 1);
  LOWORD(v9) = v7[4];
  v10 = v7[6];
  v11 = v9;
  if ( (unsigned __int16)v9 <= v10 )
    v11 = v7[6];
  if ( v11 <= 1u )
  {
    v64 = 1;
  }
  else
  {
    v12 = v7[4];
    if ( (unsigned __int16)v9 <= v10 )
      v12 = v7[6];
    v64 = v12;
  }
  v60 = qword_1C0327178;
  if ( qword_1C0327178 == qword_1C0327148 )
  {
    if ( (int)v8 >= (unsigned __int16)v7[8] || (int)v8 < 0 )
      goto LABEL_17;
    v13 = 1;
  }
  else
  {
    if ( (int)v8 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v8 < 0 )
      goto LABEL_17;
    v13 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327148) )
    goto LABEL_17;
  v14 = *(_WORD *)(v5 + 80);
  if ( v14 >= 1 && v14 <= v64 && (int)v8 >= v13 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v14 - 1)) )
    goto LABEL_17;
  v15 = (int)qword_1C0327190;
  v16 = v9;
  if ( (unsigned __int16)v9 <= v10 )
    v16 = v10;
  if ( v16 <= 1u )
  {
    v9 = 1;
  }
  else
  {
    if ( (unsigned __int16)v9 <= v10 )
      LOWORD(v9) = v10;
    v9 = (unsigned __int16)v9;
  }
  if ( v60 == v4 )
  {
    if ( (int)qword_1C0327190 >= (unsigned __int16)v61[8] || (int)qword_1C0327190 < 0 )
      goto LABEL_17;
    v17 = 1;
  }
  else
  {
    if ( (int)qword_1C0327190 >= *(_DWORD *)(v2 + 440) || (int)qword_1C0327190 < 0 )
      goto LABEL_17;
    v17 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v18 = *(_WORD *)(v4 + 80), v18 >= 1)
    && v18 <= v9
    && (int)v15 >= v17 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v18 - 1)) )
  {
LABEL_17:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  HIDWORD(qword_1C0327190) = v15;
  dword_1C0327198 = v8;
  if ( v5 != v60 && *(_BYTE *)(v2 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v19 = DoubleCheckLinkColor((_QWORD *)v5, v15, v8, a2 & 3);
    AddDistance(v20, v5, v15, v8, v19);
  }
  if ( word_1C03271CC )
  {
    v37 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4LL * v59);
    if ( word_1C03271CC == 1 )
    {
      v38 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v15);
      if ( (v37 ^ v38) < 0 && *(_BYTE *)(v2 + 156) )
        v37 = -v37;
      if ( word_1C03271F4 )
      {
        v39 = *(_WORD *)(v2 + 120) & 4;
        if ( !v39 )
        {
          v40 = *(_DWORD *)(v2 + 104);
          v41 = 16 * (v37 - v38);
          if ( v41 > v40 || v41 < -v40 )
            v37 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v15);
        }
        if ( (a2 & 4) == 0 )
          goto LABEL_115;
        if ( v39 )
        {
          v42 = *(_DWORD *)(v2 + 104);
          v43 = 16 * (v37 - v38);
          if ( v43 > v42 || v43 < -v42 )
            v37 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v15);
        }
        if ( v37 >= 0 )
        {
          v37 = (v37 + 2) & 0xFFFFFFFC;
LABEL_115:
          if ( (a2 & 8) != 0 )
          {
            v46 = *(_DWORD *)(v2 + 124);
            if ( word_1C03271F4 )
              v46 /= 2;
            if ( v38 < 0 )
            {
              v47 = -v46;
              if ( v37 > v47 )
                v37 = v47;
            }
            else
            {
              if ( v37 >= v46 )
                v46 = v37;
              v37 = v46;
            }
          }
          *(_DWORD *)(*(_QWORD *)v5 + 4 * v8) = v37 + *(_DWORD *)(*(_QWORD *)v4 + 4 * v15);
          *(_BYTE *)(*(_QWORD *)(v5 + 72) + v8) |= 1u;
          goto LABEL_159;
        }
        v44 = (2 - v37) & 0xFFFFFFFC;
      }
      else
      {
        if ( (a2 & 4) == 0 )
          goto LABEL_115;
        v45 = *(_DWORD *)(v2 + 104);
        if ( v37 - v38 > v45 || v37 - v38 < -v45 )
          v37 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v15);
        if ( v37 >= 0 )
        {
          v37 = (v37 + 32) & 0xFFFFFFC0;
          goto LABEL_115;
        }
        v44 = (32 - v37) & 0xFFFFFFC0;
      }
      v37 = -v44;
      goto LABEL_115;
    }
    v48 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v15);
    if ( (v37 ^ v48) < 0 && *(_BYTE *)(v2 + 156) )
      v37 = -v37;
    if ( word_1C03271F4 )
    {
      v49 = *(_WORD *)(v2 + 120) & 4;
      if ( !v49 )
      {
        v50 = *(_DWORD *)(v2 + 104);
        v51 = 16 * (v37 - v48);
        if ( v51 > v50 || v51 < -v50 )
          v37 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v15);
      }
      if ( (a2 & 4) == 0 )
        goto LABEL_149;
      if ( v49 )
      {
        v52 = *(_DWORD *)(v2 + 104);
        v53 = 16 * (v37 - v48);
        if ( v53 > v52 || v53 < -v52 )
          v37 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v15);
      }
      if ( v37 >= 0 )
      {
        v37 = (v37 + 2) & 0xFFFFFFFC;
LABEL_149:
        if ( (a2 & 8) != 0 )
        {
          v56 = *(_DWORD *)(v2 + 124);
          if ( word_1C03271F4 )
            v56 /= 2;
          if ( v48 < 0 )
          {
            v57 = -v56;
            if ( v37 > v57 )
              v37 = v57;
          }
          else
          {
            if ( v37 >= v56 )
              v56 = v37;
            v37 = v56;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v8) = v37 + *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v15);
        *(_BYTE *)(*(_QWORD *)(v5 + 72) + v8) |= 2u;
        goto LABEL_159;
      }
      v54 = (2 - v37) & 0xFFFFFFFC;
    }
    else
    {
      if ( (a2 & 4) == 0 )
        goto LABEL_149;
      v55 = *(_DWORD *)(v2 + 104);
      if ( v37 - v48 > v55 || v37 - v48 < -v55 )
        v37 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v15);
      if ( v37 >= 0 )
      {
        v37 = (v37 + 32) & 0xFFFFFFC0;
        goto LABEL_149;
      }
      v54 = (32 - v37) & 0xFFFFFFC0;
    }
    v37 = -v54;
    goto LABEL_149;
  }
  v21 = InvokeGetCVTEntry(dword_1C03271BC, v59);
  v22 = v21;
  if ( *(_DWORD *)(v2 + 108) )
    v22 = itrp_CheckSingleWidth(v21);
  v23 = v15;
  if ( v5 == qword_1C0327178 )
  {
    *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4LL * v63) = ((unsigned __int64)(v22 * (__int64)(__int16)dword_1C0327158) >> 32 << 18)
                                                  + *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v15)
                                                  + ((((unsigned int)(v22 * (__int16)dword_1C0327158) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)v5 + 4LL * v63) = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4LL * v63);
    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4LL * v63) = ((unsigned __int64)(v22 * (__int64)SHIWORD(dword_1C0327158)) >> 32 << 18)
                                                  + *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v15)
                                                  + ((((unsigned int)(v22 * SHIWORD(dword_1C0327158)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL * v63) = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4LL * v63);
  }
  if ( dword_1C03271B4 == 3 )
  {
    v24 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4LL * v63) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v15);
  }
  else
  {
    v24 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4LL * v63) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v15);
    if ( dword_1C03271B4 != 4 )
      v24 = InvokeProject(
              dword_1C03271B4,
              *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4LL * v63) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v23),
              v24);
  }
  if ( (v22 ^ v24) < 0 && *(_BYTE *)(v2 + 156) )
    v22 = -v22;
  v25 = *(unsigned int *)(v2 + 4LL * (a2 & 3) + 32);
  if ( !word_1C03271F4 )
  {
    if ( (a2 & 4) == 0 )
    {
      v31 = itrp_RoundOff((unsigned int)v22, v25);
      goto LABEL_76;
    }
    v29 = v22 - v24;
    goto LABEL_68;
  }
  v26 = *(_WORD *)(v2 + 120) & 4;
  if ( !v26 )
  {
    v27 = *(_DWORD *)(v2 + 104);
    v28 = 16 * (v22 - v24);
    if ( v28 > v27 || v28 < -v27 )
      v22 = v24;
  }
  if ( (a2 & 4) == 0 )
  {
    v31 = itrp_RoundOffSP((unsigned int)v22, v25);
    goto LABEL_76;
  }
  if ( v26 )
  {
    v29 = 16 * (v22 - v24);
LABEL_68:
    v30 = *(_DWORD *)(v2 + 104);
    if ( v29 > v30 || v29 < -v30 )
      v22 = v24;
  }
  v31 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v22, v25);
  v32 = 0;
LABEL_76:
  v33 = v31;
  if ( (a2 & 8) != 0 )
  {
    v34 = *(_DWORD *)(v2 + 124);
    if ( word_1C03271F4 != v32 )
      v34 /= 2;
    if ( v24 < 0 )
    {
      v35 = -v34;
      if ( v33 > v35 )
        v33 = v35;
    }
    else
    {
      if ( v33 >= v34 )
        v34 = v33;
      v33 = v34;
    }
  }
  if ( dword_1C03271B0 == 3 )
  {
    v36 = *(_DWORD *)(*(_QWORD *)v5 + 4LL * v63) - *(_DWORD *)(*(_QWORD *)v4 + 4 * v23);
  }
  else
  {
    v36 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL * v63) - *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v23);
    if ( dword_1C03271B0 != 4 )
      v36 = InvokeProject(
              dword_1C03271B0,
              *(_DWORD *)(*(_QWORD *)v5 + 4LL * v63) - *(_DWORD *)(*(_QWORD *)v4 + 4 * v23),
              v36);
  }
  LODWORD(v8) = v63;
  InvokeMovePoint(dword_1C03271AC, (_QWORD *)v5, v63, v33 - v36);
LABEL_159:
  if ( (a2 & 0x10) != 0 )
    LODWORD(qword_1C0327190) = v8;
  return a1;
}
