/*
 * XREFs of itrp_IP @ 0x1C02C89A0
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     AddProportion @ 0x1C02C4C40 (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 */

__int64 __fastcall itrp_IP(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  _WORD *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int16 v7; // di
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  unsigned __int16 v12; // ax
  int v13; // r15d
  int v14; // edi
  __int16 v15; // ax
  int *v16; // r15
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r11d
  int v21; // r10d
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // rdi
  _WORD *v25; // r8
  __int64 v26; // rbx
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // ax
  __int64 v30; // r12
  int v31; // r14d
  __int16 v32; // ax
  __int64 v33; // rcx
  signed int v34; // r14d
  __int64 v35; // rdi
  _WORD *v36; // r8
  __int64 v37; // rbx
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // dx
  unsigned __int16 v40; // ax
  int v41; // r12d
  __int16 v42; // ax
  __int64 v43; // rcx
  __int64 v44; // rbx
  _WORD *v45; // r9
  __int64 v46; // r14
  unsigned __int16 v47; // dx
  unsigned __int16 v48; // r8
  unsigned __int16 v49; // cx
  __int64 v50; // r12
  int v51; // edi
  __int16 v52; // ax
  __int64 v53; // rcx
  int v54; // eax
  int v55; // ebx
  int v56; // eax
  __int64 v57; // rbx
  _WORD *v58; // r8
  __int64 v59; // r14
  unsigned __int16 v60; // cx
  unsigned __int16 v61; // dx
  unsigned __int16 v62; // ax
  __int64 v63; // r12
  int v64; // edi
  __int16 v65; // ax
  __int64 v66; // rcx
  int v67; // ebx
  int v68; // eax
  __int64 result; // rax
  int v70; // [rsp+30h] [rbp-88h]
  int v71; // [rsp+30h] [rbp-88h]
  int v72; // [rsp+30h] [rbp-88h]
  int i; // [rsp+34h] [rbp-84h]
  int v74; // [rsp+34h] [rbp-84h]
  int v75; // [rsp+34h] [rbp-84h]
  int v76; // [rsp+38h] [rbp-80h]
  int v77; // [rsp+38h] [rbp-80h]
  int v78; // [rsp+3Ch] [rbp-7Ch]
  int v79; // [rsp+40h] [rbp-78h]
  __int64 v80; // [rsp+48h] [rbp-70h]
  __int64 v81; // [rsp+48h] [rbp-70h]
  __int64 v82; // [rsp+48h] [rbp-70h]
  int v83; // [rsp+50h] [rbp-68h]
  int v84; // [rsp+54h] [rbp-64h]
  __int64 v85; // [rsp+58h] [rbp-60h]
  int j; // [rsp+60h] [rbp-58h]
  int v88; // [rsp+C8h] [rbp+10h]
  int v89; // [rsp+D0h] [rbp+18h]
  int v90; // [rsp+D8h] [rbp+20h]
  int v91; // [rsp+D8h] [rbp+20h]
  int v92; // [rsp+D8h] [rbp+20h]

  v1 = qword_1C0327180;
  v2 = LocalGS;
  v3 = *(_WORD **)(qword_1C0327180 + 344);
  v4 = qword_1C0327148;
  v5 = qword_1C0327150;
  v6 = qword_1C0327178;
  v7 = v3[4];
  v8 = v3[6];
  v88 = dword_1C03271A0 + 1;
  v89 = dword_1C0327198;
  v9 = v7;
  if ( v7 <= v8 )
    v9 = v3[6];
  v90 = HIDWORD(qword_1C0327190);
  v80 = *(_QWORD *)(qword_1C0327180 + 344);
  if ( v9 <= 1u )
  {
    v70 = 1;
  }
  else
  {
    v10 = v3[4];
    if ( v7 <= v8 )
      v10 = v3[6];
    v70 = v10;
  }
  if ( qword_1C0327178 == LocalGS )
  {
    if ( SHIDWORD(qword_1C0327190) >= (unsigned __int16)v3[8] || qword_1C0327190 < 0 )
      goto LABEL_153;
    v76 = 1;
  }
  else
  {
    if ( SHIDWORD(qword_1C0327190) >= *(_DWORD *)(qword_1C0327180 + 440) || qword_1C0327190 < 0 )
      goto LABEL_153;
    v76 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_153;
  v11 = *(_WORD *)(v2 + 80);
  if ( v11 >= 1 && v11 <= v70 && v90 >= v76 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) )
    goto LABEL_153;
  v12 = v7;
  if ( v7 <= v8 )
    v12 = v8;
  if ( v12 <= 1u )
  {
    v13 = 1;
  }
  else
  {
    if ( v7 <= v8 )
      v7 = v8;
    v13 = v7;
  }
  if ( v6 == v4 )
  {
    if ( v89 >= *(unsigned __int16 *)(v80 + 16) || v89 < 0 )
      goto LABEL_153;
    v14 = 1;
  }
  else
  {
    if ( v89 >= *(_DWORD *)(v1 + 440) || v89 < 0 )
      goto LABEL_153;
    v14 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v15 = *(_WORD *)(v4 + 80), v15 >= 1)
    && v15 <= v13
    && v89 >= v14 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v15 - 1)) )
  {
LABEL_153:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  v16 = (int *)qword_1C0327168;
  v71 = dword_1C03271AC;
  v84 = dword_1C03271B0;
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || v88 > (unsigned __int64)((qword_1C0327168 - *(_QWORD *)v1) >> 2) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  if ( v2 == v6 || v4 == v6 || v5 == v6 || *(_BYTE *)(v1 + 397) )
  {
    v17 = v90;
    v18 = *(_QWORD *)(v4 + 16);
    v19 = *(_QWORD *)(v4 + 24);
    v20 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4LL * v90);
    v21 = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4LL * v90);
    v81 = *(_QWORD *)(v5 + 16);
    v22 = *(_QWORD *)(v5 + 24);
  }
  else
  {
    v17 = v90;
    v18 = *(_QWORD *)(v4 + 32);
    v19 = *(_QWORD *)(v4 + 40);
    v20 = *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4LL * v90);
    v21 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 4LL * v90);
    v81 = *(_QWORD *)(v5 + 32);
    v22 = *(_QWORD *)(v5 + 40);
  }
  v85 = v22;
  v78 = v21;
  v79 = v20;
  v91 = *(_DWORD *)(*(_QWORD *)v2 + 4 * v17);
  v23 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4 * v17);
  v77 = v23;
  v83 = InvokeProject(dword_1C03271B4, *(_DWORD *)(v18 + 4LL * v89) - v20, *(_DWORD *)(v19 + 4LL * v89) - v21);
  if ( v83 )
  {
    if ( v71 == 2 )
    {
      for ( i = *(_DWORD *)(*(_QWORD *)v4 + 4LL * v89) - v91; v88; --v88 )
      {
        v24 = qword_1C0327180;
        --v16;
        v25 = *(_WORD **)(qword_1C0327180 + 344);
        v26 = *v16;
        v27 = v25[4];
        v28 = v25[6];
        v29 = v27;
        if ( v27 <= v28 )
          v29 = v25[6];
        if ( v29 <= 1u )
        {
          v72 = 1;
        }
        else
        {
          if ( v27 <= v28 )
            v27 = v25[6];
          v72 = v27;
        }
        v30 = qword_1C0327178;
        if ( qword_1C0327178 == v5 )
        {
          if ( (int)v26 >= (unsigned __int16)v25[8] || (int)v26 < 0 )
            goto LABEL_153;
          v31 = 1;
        }
        else
        {
          if ( (int)v26 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v26 < 0 )
            goto LABEL_153;
          v31 = 5;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
          goto LABEL_153;
        v32 = *(_WORD *)(v5 + 80);
        v33 = 1LL;
        if ( v32 >= 1 && v32 <= v72 )
        {
          v33 = v32 - 1;
          if ( (int)v26 >= v31 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v33) )
            goto LABEL_153;
        }
        if ( v5 != v30 && *(_BYTE *)(v24 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v24 + 452) & 2) != 0 )
          AddProportion(v33, v5, v17, v26, v89);
        *(_DWORD *)(*(_QWORD *)v5 + 4 * v26) = CompDiv(v83, i * (__int64)(*(_DWORD *)(v81 + 4 * v26) - v79)) + v91;
        *(_BYTE *)(*(_QWORD *)(v5 + 72) + v26) |= 1u;
      }
    }
    else
    {
      v34 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4LL * v89) - v23;
      if ( v71 == 3 )
      {
        for ( ; v88; --v88 )
        {
          v35 = qword_1C0327180;
          --v16;
          v36 = *(_WORD **)(qword_1C0327180 + 344);
          v37 = *v16;
          v38 = v36[4];
          v39 = v36[6];
          v40 = v38;
          if ( v38 <= v39 )
            v40 = v36[6];
          if ( v40 <= 1u )
          {
            v92 = 1;
          }
          else
          {
            if ( v38 <= v39 )
              v38 = v36[6];
            v92 = v38;
          }
          v82 = qword_1C0327178;
          if ( qword_1C0327178 == v5 )
          {
            if ( (int)v37 >= (unsigned __int16)v36[8] || (int)v37 < 0 )
              goto LABEL_153;
            v41 = 1;
          }
          else
          {
            if ( (int)v37 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v37 < 0 )
              goto LABEL_153;
            v41 = 5;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
            goto LABEL_153;
          v42 = *(_WORD *)(v5 + 80);
          v43 = 1LL;
          if ( v42 >= 1 && v42 <= v92 )
          {
            v43 = v42 - 1;
            if ( (int)v37 >= v41 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v43) )
              goto LABEL_153;
          }
          if ( v5 != v82 && *(_BYTE *)(v35 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v35 + 452) & 2) != 0 )
            AddProportion(v43, v5, v17, v37, v89);
          *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v37) = CompDiv(v83, v34 * (__int64)(*(_DWORD *)(v85 + 4 * v37) - v78))
                                                     + v77;
          *(_BYTE *)(*(_QWORD *)(v5 + 72) + v37) |= 2u;
        }
      }
      else
      {
        for ( j = InvokeProject(v84, *(_DWORD *)(*(_QWORD *)v4 + 4LL * v89) - v91, v34); v88; --v88 )
        {
          v44 = qword_1C0327180;
          --v16;
          v45 = *(_WORD **)(qword_1C0327180 + 344);
          v46 = *v16;
          v47 = v45[4];
          v48 = v45[6];
          v49 = v47;
          if ( v47 <= v48 )
            v49 = v45[6];
          if ( v49 <= 1u )
          {
            v74 = 1;
          }
          else
          {
            if ( v47 <= v48 )
              v47 = v45[6];
            v74 = v47;
          }
          v50 = qword_1C0327178;
          if ( qword_1C0327178 == v5 )
          {
            if ( (int)v46 >= (unsigned __int16)v45[8] || (int)v46 < 0 )
              goto LABEL_153;
            v51 = 1;
          }
          else
          {
            if ( (int)v46 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v46 < 0 )
              goto LABEL_153;
            v51 = 5;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
            goto LABEL_153;
          v52 = *(_WORD *)(v5 + 80);
          v53 = 1LL;
          if ( v52 >= 1 && v52 <= v74 )
          {
            v53 = v52 - 1;
            if ( (int)v46 >= v51 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v53) )
              goto LABEL_153;
          }
          if ( v5 != v50 && *(_BYTE *)(v44 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v44 + 452) & 2) != 0 )
            AddProportion(v53, v5, v17, v46, v89);
          v54 = InvokeProject(v84, *(_DWORD *)(v81 + 4 * v46) - v79, *(_DWORD *)(v85 + 4 * v46) - v78);
          v55 = CompDiv(v83, j * (__int64)v54);
          v56 = InvokeProject(
                  v84,
                  *(_DWORD *)(*(_QWORD *)v5 + 4 * v46) - v91,
                  *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v46) - v77);
          InvokeMovePoint(v71, (_QWORD *)v5, v46, v55 - v56);
        }
      }
    }
  }
  else
  {
    for ( ; v88; --v88 )
    {
      v57 = qword_1C0327180;
      --v16;
      v58 = *(_WORD **)(qword_1C0327180 + 344);
      v59 = *v16;
      v60 = v58[4];
      v61 = v58[6];
      v62 = v60;
      if ( v60 <= v61 )
        v62 = v58[6];
      if ( v62 <= 1u )
      {
        v75 = 1;
      }
      else
      {
        if ( v60 <= v61 )
          v60 = v58[6];
        v75 = v60;
      }
      v63 = qword_1C0327178;
      if ( qword_1C0327178 == v5 )
      {
        if ( (int)v59 >= (unsigned __int16)v58[8] || (int)v59 < 0 )
          goto LABEL_153;
        v64 = 1;
      }
      else
      {
        if ( (int)v59 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v59 < 0 )
          goto LABEL_153;
        v64 = 5;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
        goto LABEL_153;
      v65 = *(_WORD *)(v5 + 80);
      v66 = 1LL;
      if ( v65 >= 1 && v65 <= v75 )
      {
        v66 = v65 - 1;
        if ( (int)v59 >= v64 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v66) )
          goto LABEL_153;
      }
      if ( v5 != v63 && *(_BYTE *)(v57 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v57 + 452) & 2) != 0 )
        AddProportion(v66, v5, v17, v59, v89);
      v67 = InvokeProject(v84, *(_DWORD *)(v81 + 4 * v59) - v79, *(_DWORD *)(v85 + 4 * v59) - v78);
      v68 = InvokeProject(
              v84,
              *(_DWORD *)(*(_QWORD *)v5 + 4 * v59) - v91,
              *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v59) - v77);
      InvokeMovePoint(v71, (_QWORD *)v5, v59, v67 - v68);
    }
  }
  result = a1;
  qword_1C0327168 = (__int64)v16;
  dword_1C03271A0 = 0;
  return result;
}
