/*
 * XREFs of itrp_MD @ 0x1C02CAB40
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 */

__int64 __fastcall itrp_MD(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  _WORD *v5; // r13
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r14
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v10; // r12d
  __int64 v11; // r15
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  __int64 v14; // rbx
  __int16 v15; // ax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // edx
  _WORD *v23; // r15
  unsigned __int16 v24; // bx
  unsigned __int16 v25; // r14
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // ax
  int v28; // r12d
  __int64 v29; // r13
  __int16 v30; // ax
  unsigned __int16 v31; // ax
  int v32; // r14d
  __int64 v33; // rbx
  __int16 v34; // ax
  __int64 v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+20h] [rbp-58h]
  int *v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+90h] [rbp+18h]
  int v42; // [rsp+90h] [rbp+18h]
  int v43; // [rsp+90h] [rbp+18h]
  int v44; // [rsp+98h] [rbp+20h]
  int v45; // [rsp+98h] [rbp+20h]

  v2 = qword_1C0327180;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) < 2 )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  v3 = *(int *)(qword_1C0327168 - 4);
  v39 = qword_1C0327168 - 4;
  v38 = (int *)(qword_1C0327168 - 8);
  v4 = *(int *)(qword_1C0327168 - 8);
  if ( ((a2 - 1) & 1) != 0 )
  {
    v5 = *(_WORD **)(qword_1C0327180 + 344);
    v6 = v5[4];
    v7 = v5[6];
    v8 = v6;
    if ( v6 <= v7 )
      v8 = v5[6];
    if ( v8 <= 1u )
    {
      v41 = 1;
    }
    else
    {
      v9 = v5[4];
      if ( v6 <= v7 )
        v9 = v5[6];
      v41 = v9;
    }
    v10 = 5;
    v11 = LocalGS;
    v36 = qword_1C0327178;
    if ( qword_1C0327178 == LocalGS )
    {
      if ( (int)v3 >= (unsigned __int16)v5[8] || (int)v3 < 0 )
        goto LABEL_15;
      v44 = 1;
    }
    else
    {
      if ( (int)v3 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v3 < 0 )
        goto LABEL_15;
      v44 = 5;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    {
      v12 = *(_WORD *)(v11 + 80);
      if ( v12 < 1 || v12 > v41 || (int)v3 < v44 + *(__int16 *)(*(_QWORD *)(v11 + 64) + 2LL * (v12 - 1)) )
      {
        v13 = v6;
        if ( v6 <= v7 )
          v13 = v7;
        if ( v13 <= 1u )
        {
          v42 = 1;
        }
        else
        {
          if ( v6 <= v7 )
            v6 = v7;
          v42 = v6;
        }
        v14 = qword_1C0327148;
        if ( v36 == qword_1C0327148 )
        {
          if ( (int)v4 < (unsigned __int16)v5[8] && (int)v4 >= 0 )
          {
            v10 = 1;
            goto LABEL_36;
          }
        }
        else if ( (int)v4 < *(_DWORD *)(v2 + 440) && (int)v4 >= 0 )
        {
LABEL_36:
          if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327148) )
          {
            v15 = *(_WORD *)(v14 + 80);
            if ( v15 < 1 || v15 > v42 || (int)v4 < v10 + *(__int16 *)(*(_QWORD *)(v14 + 64) + 2LL * (v15 - 1)) )
            {
              if ( v11 == v36 || v14 == v36 || *(_BYTE *)(v2 + 397) )
              {
                v21 = *(_DWORD *)(*(_QWORD *)(v14 + 24) + 4 * v4) - *(_DWORD *)(*(_QWORD *)(v11 + 24) + 4 * v3);
                v20 = *(_DWORD *)(*(_QWORD *)(v14 + 16) + 4 * v4) - *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4 * v3);
              }
              else
              {
                v16 = *(_QWORD *)(v11 + 40);
                if ( *(_BYTE *)(v2 + 340) )
                {
                  v17 = InvokeProject(
                          dword_1C03271B4,
                          *(_DWORD *)(*(_QWORD *)(v14 + 32) + 4 * v4) - *(_DWORD *)(*(_QWORD *)(v11 + 32) + 4 * v3),
                          *(_DWORD *)(*(_QWORD *)(v14 + 40) + 4 * v4) - *(_DWORD *)(v16 + 4 * v3));
                  v18 = InvokeGlobalGSScale(*(_DWORD *)(v2 + 192), (int *)(v2 + 296), v17);
LABEL_48:
                  v22 = v18;
LABEL_87:
                  *v38 = v22;
                  qword_1C0327168 = v39;
                  return a1;
                }
                v19 = InvokeGlobalGSScale(
                        *(_DWORD *)(v2 + 188),
                        (int *)(v2 + 280),
                        *(_DWORD *)(*(_QWORD *)(v14 + 40) + 4 * v4) - *(_DWORD *)(v16 + 4 * v3));
                v20 = InvokeGlobalGSScale(
                        *(_DWORD *)(v2 + 184),
                        (int *)(v2 + 264),
                        *(_DWORD *)(*(_QWORD *)(qword_1C0327148 + 32) + 4 * v4)
                      - *(_DWORD *)(*(_QWORD *)(LocalGS + 32) + 4 * v3));
                v21 = v19;
              }
              v18 = InvokeProject(dword_1C03271B4, v20, v21);
              goto LABEL_48;
            }
          }
        }
      }
    }
  }
  else
  {
    v23 = *(_WORD **)(qword_1C0327180 + 344);
    v24 = v23[4];
    v25 = v23[6];
    v26 = v24;
    if ( v24 <= v25 )
      v26 = v23[6];
    if ( v26 <= 1u )
    {
      v43 = 1;
    }
    else
    {
      v27 = v23[4];
      if ( v24 <= v25 )
        v27 = v23[6];
      v43 = v27;
    }
    v28 = 5;
    v29 = LocalGS;
    v37 = qword_1C0327178;
    if ( qword_1C0327178 == LocalGS )
    {
      if ( (int)v4 >= (unsigned __int16)v23[8] || (int)v4 < 0 )
        goto LABEL_15;
      v45 = 1;
    }
    else
    {
      if ( (int)v4 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v4 < 0 )
        goto LABEL_15;
      v45 = 5;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    {
      v30 = *(_WORD *)(v29 + 80);
      if ( v30 < 1 || v30 > v43 || (int)v4 < v45 + *(__int16 *)(*(_QWORD *)(v29 + 64) + 2LL * (v30 - 1)) )
      {
        v31 = v24;
        if ( v24 <= v25 )
          v31 = v25;
        if ( v31 <= 1u )
        {
          v32 = 1;
        }
        else
        {
          if ( v24 <= v25 )
            v24 = v25;
          v32 = v24;
        }
        v33 = qword_1C0327148;
        if ( v37 == qword_1C0327148 )
        {
          if ( (int)v3 >= (unsigned __int16)v23[8] || (int)v3 < 0 )
            goto LABEL_15;
          v28 = 1;
        }
        else if ( (int)v3 >= *(_DWORD *)(v2 + 440) || (int)v3 < 0 )
        {
          goto LABEL_15;
        }
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327148) )
        {
          v34 = *(_WORD *)(v33 + 80);
          if ( v34 < 1 || v34 > v32 || (int)v3 < v28 + *(__int16 *)(*(_QWORD *)(v33 + 64) + 2LL * (v34 - 1)) )
          {
            v22 = InvokeProject(
                    dword_1C03271B0,
                    *(_DWORD *)(*(_QWORD *)v29 + 4 * v4) - *(_DWORD *)(*(_QWORD *)v33 + 4 * v3),
                    *(_DWORD *)(*(_QWORD *)(v29 + 8) + 4 * v4) - *(_DWORD *)(*(_QWORD *)(v33 + 8) + 4 * v3));
            if ( (*(_BYTE *)(qword_1C0327180 + 454) & 0xB) == 0xB && v22 == 64 )
              v22 = 65;
            goto LABEL_87;
          }
        }
      }
    }
  }
LABEL_15:
  dword_1C03271D0 = 4370;
  return qword_1C03271D8;
}
