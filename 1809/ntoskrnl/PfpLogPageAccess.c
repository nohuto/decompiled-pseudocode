/*
 * XREFs of PfpLogPageAccess @ 0x14066B330
 * Callers:
 *     PfpCopyEvent @ 0x14066ADE0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x14066B030 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x14066B97C (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  __int64 *v5; // r10
  __int16 v6; // si
  _QWORD *v7; // rdi
  __int16 v9; // r13
  unsigned __int16 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  char v13; // r14
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  int v17; // r14d
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  char v20; // r12
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  int v27; // ebp
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // ebx
  unsigned int v31; // ecx
  unsigned __int64 result; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r8
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r8
  unsigned int v40; // r11d
  __int64 v41; // r10
  __int64 v42; // rax
  unsigned int v43; // r13d
  __int64 v44; // rax
  unsigned int v45; // r11d
  __int64 v46; // r10
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int16 v49; // ax
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // eax
  __int64 v54; // r8
  unsigned __int64 v55; // r8
  unsigned int v56; // [rsp+24h] [rbp-44h]
  unsigned __int64 v57; // [rsp+28h] [rbp-40h]
  unsigned int v58; // [rsp+78h] [rbp+10h]

  v5 = a3;
  v6 = -1;
  v7 = (_QWORD *)a2;
  v9 = -1;
  if ( (*(_DWORD *)a2 & 0x1FF) == 0 )
    goto LABEL_8;
  v10 = 0;
  v11 = *(_QWORD *)(a4 - 8LL * (*(_DWORD *)a2 & 0x1FF));
  v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
  v57 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
  v13 = 0;
  while ( 1 )
  {
    v14 = qword_14043CC58;
    v15 = *(unsigned int *)(qword_14043CC58 + 16);
    v16 = (qword_14043CC58 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v16 + 40 * v15) != v12 )
    {
      v40 = *(_DWORD *)(qword_14043CC58 + 32);
      a2 = BYTE6(v57)
         + 37
         * (BYTE5(v57)
          + 37
          * (BYTE4(v57)
           + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v12 + 11623883LL))))));
      v41 = (HIBYTE(v57) + 37 * (_DWORD)a2) & (v40 - 1);
      v42 = *(_QWORD *)(v16 + 40 * v41);
      if ( v42 != v12 )
      {
        if ( v42 )
        {
          a2 = (unsigned int)(v41 + 1);
          v43 = 0;
          while ( (unsigned int)a2 >= v40 )
          {
LABEL_40:
            ++v43;
            a2 = 0LL;
            v40 = v41;
            if ( v43 >= 2 )
            {
              v10 = -1;
              goto LABEL_55;
            }
          }
          while ( 1 )
          {
            v44 = *(_QWORD *)(v16 + 40LL * (unsigned int)a2);
            if ( v44 == v12 )
            {
              *(_DWORD *)(qword_14043CC58 + 16) = a2;
              LOWORD(v15) = a2;
              goto LABEL_4;
            }
            if ( !v44 )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= v40 )
              goto LABEL_40;
          }
          *(_DWORD *)(qword_14043CC58 + 16) = a2;
          v10 = a2;
        }
        else
        {
          *(_DWORD *)(qword_14043CC58 + 16) = v41;
          v10 = (HIBYTE(v57) + 37 * a2) & (v40 - 1);
        }
        goto LABEL_55;
      }
      *(_DWORD *)(qword_14043CC58 + 16) = v41;
      LOWORD(v15) = (HIBYTE(v57) + 37 * a2) & (v40 - 1);
    }
LABEL_4:
    if ( (_WORD)v15 != 0xFFFF )
      goto LABEL_5;
LABEL_55:
    v53 = *(_DWORD *)(v14 + 28);
    if ( v53 < 3 * (*(_DWORD *)(v14 + 32) >> 2) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_14043CC40, a2) == -1073741823 )
      return 0LL;
  }
  v13 = 1;
  *(_DWORD *)(v14 + 28) = v53 + 1;
  *(_QWORD *)(v16 + 40LL * v10) = v12;
  LOWORD(v15) = v10;
LABEL_5:
  if ( !v14 )
    return 0LL;
  v5 = a3;
  v9 = v15 + *(_WORD *)(v14 + 36);
  if ( v13 )
  {
    v48 = v16 + 40LL * (unsigned __int16)v15;
    v49 = *(_WORD *)(v48 + 16);
    *(_QWORD *)(v48 + 8) = (16 * v11) | *(_DWORD *)(v48 + 8) & 8 | 4;
    *(_WORD *)(v48 + 16) = v49 & 0xFFF0 | (v11 >> 60);
  }
LABEL_8:
  v17 = a5;
  if ( a1 >= 0 )
  {
    if ( !a5 )
    {
      if ( !a1 )
      {
        v25 = 0LL;
        goto LABEL_18;
      }
      v25 = 1LL;
      v27 = (a1 & 0x7FFFFFFF) - 1;
LABEL_19:
      v28 = qword_14043CC30;
      v29 = *v5;
      v30 = ((*v5 & 3) == 2) + 1;
      if ( (unsigned int)(v30 + *(_DWORD *)(qword_14043CC30 + 16)) > *(_DWORD *)(qword_14043CC30 + 20) )
      {
        while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_14043CC18, v28) != -1073741823 )
        {
          v28 = qword_14043CC30;
          if ( (unsigned int)(v30 + *(_DWORD *)(qword_14043CC30 + 16)) <= *(_DWORD *)(qword_14043CC30 + 20) )
          {
            v5 = a3;
            v29 = *a3;
            goto LABEL_20;
          }
        }
        return 0LL;
      }
      else
      {
LABEL_20:
        v31 = *(_DWORD *)(v28 + 16);
        *(_DWORD *)(v28 + 16) = v30 + v31;
        result = ((v28 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v31;
        if ( (v29 & 3) == 2 )
        {
          *(_OWORD *)result = *(_OWORD *)v5;
          *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
          result += 16LL;
        }
        v33 = *(_QWORD *)result;
        if ( (*(_DWORD *)v7 & 0x1FF) != 0 )
        {
          v34 = v33 & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)result = v34;
          v35 = ((unsigned __int8)v34 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v7 >> 7)) & 4 ^ v34;
          *(_QWORD *)result = v35;
          v36 = ((unsigned __int8)v35 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v7 >> 7)) & 8 ^ v35;
          *(_QWORD *)result = v36;
          v37 = v36 & 0xF | (16LL * (unsigned int)(*v7 >> 12));
          *(_WORD *)(result + 10) = v6;
          *(_QWORD *)result = v37;
          *(_WORD *)(result + 8) = v9;
        }
        else
        {
          v38 = v33 & 0xFFFFFFFFFFFFFFFCuLL | 1;
          *(_QWORD *)result = v38;
          v39 = (8 * v25) | (((unsigned __int8)v38 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v7 >> 7)) & 4 ^ v38) & 0xFFFFFFFFFFFFFFE7uLL;
          *(_QWORD *)result = v39;
          *(_QWORD *)result = *v7 ^ (*(_DWORD *)v7 ^ (unsigned int)v39) & 0xFFF;
          if ( v25 == 2 )
            *(_WORD *)(result + 10) = v6;
          else
            *(_DWORD *)(result + 8) = v27;
        }
      }
      return result;
    }
  }
  else if ( !a5 )
  {
    v18 = (*(_QWORD *)(a1 + 736) ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
    goto LABEL_11;
  }
  v18 = a1;
LABEL_11:
  LOWORD(v58) = 0;
  v19 = v18 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v20 = 0;
  v21 = 4 * (v19 & 3) + 16;
  while ( 2 )
  {
    v22 = qword_14043CC58;
    v23 = *(unsigned int *)(v21 + qword_14043CC58);
    v24 = (qword_14043CC58 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v24 + 40 * v23) == v19 )
    {
LABEL_13:
      if ( (_WORD)v23 != 0xFFFF )
        goto LABEL_14;
      v50 = v58;
    }
    else
    {
      v45 = *(_DWORD *)(qword_14043CC58 + 32);
      v46 = (HIBYTE(v19)
           + 37
           * (BYTE6(v19)
            + 37
            * (BYTE5(v19)
             + 37
             * (BYTE4(v19)
              + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & (v45 - 1);
      v47 = *(_QWORD *)(v24 + 40 * v46);
      if ( v47 == v19 )
      {
        *(_DWORD *)(v21 + qword_14043CC58) = v46;
        LOWORD(v23) = (HIBYTE(v19)
                     + 37
                     * (BYTE6(v19)
                      + 37
                      * (BYTE5(v19)
                       + 37
                       * (BYTE4(v19)
                        + 37
                        * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 24011)))))))) & (v45 - 1);
        goto LABEL_13;
      }
      if ( v47 )
      {
        v50 = (unsigned int)(v46 + 1);
        v51 = 0;
        v17 = a5;
        v56 = 0;
        while ( (unsigned int)v50 >= v45 )
        {
LABEL_52:
          ++v51;
          v50 = 0LL;
          v56 = v51;
          v45 = v46;
          if ( v51 >= 2 )
          {
            v50 = 0xFFFFLL;
            goto LABEL_65;
          }
        }
        while ( 1 )
        {
          v52 = *(_QWORD *)(v24 + 40 * v50);
          if ( v52 == v19 )
          {
            *(_DWORD *)(v21 + qword_14043CC58) = v50;
            LOWORD(v23) = v50;
            goto LABEL_13;
          }
          if ( !v52 )
            break;
          v50 = (unsigned int)(v50 + 1);
          if ( (unsigned int)v50 >= v45 )
          {
            v51 = v56;
            goto LABEL_52;
          }
        }
        *(_DWORD *)(v21 + qword_14043CC58) = v50;
      }
      else
      {
        *(_DWORD *)(v21 + qword_14043CC58) = v46;
        v50 = (unsigned __int16)((HIBYTE(v19)
                                + 37
                                * (BYTE6(v19)
                                 + 37
                                 * (BYTE5(v19)
                                  + 37
                                  * (BYTE4(v19)
                                   + 37
                                   * (BYTE3(v19)
                                    + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 24011)))))))) & (v45 - 1));
      }
LABEL_65:
      v58 = v50;
    }
    LODWORD(v23) = *(_DWORD *)(v22 + 28);
    if ( (unsigned int)v23 >= 3 * (*(_DWORD *)(v22 + 32) >> 2) )
    {
      if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_14043CC40, v50) == -1073741823 )
        return 0LL;
      continue;
    }
    break;
  }
  v20 = 1;
  *(_DWORD *)(v22 + 28) = v23 + 1;
  *(_QWORD *)(v24 + 40LL * (unsigned __int16)v50) = v19;
  LOWORD(v23) = v50;
LABEL_14:
  if ( v22 )
  {
    v25 = 2LL;
    v6 = v23 + *(_WORD *)(v22 + 36);
    v26 = v24 + 40LL * (unsigned __int16)v23;
    if ( v20 || (*(_BYTE *)(v26 + 8) & 4) != 0 )
    {
      v54 = *(_QWORD *)(v26 + 8);
      v5 = a3;
      if ( v17 )
      {
        *(_QWORD *)(v26 + 8) = v54 & 0xFFFFFFFFFFFFFFF8uLL | 5;
      }
      else
      {
        v55 = v54 & 0xFFFFFFFFFFFFFFF8uLL | 1;
        *(_QWORD *)(v26 + 8) = v55;
        *(_QWORD *)(v26 + 8) = v55 & 7 | (8LL * (*(_QWORD *)(a1 + 736) ^ *(_QWORD *)(a1 + 776)));
        *(_DWORD *)(v26 + 28) = *(_DWORD *)(a1 + 1180);
        *(_DWORD *)(v26 + 24) = *(_DWORD *)(a1 + 736);
        *(_QWORD *)(v26 + 16) = a1;
      }
    }
    else
    {
      v5 = a3;
    }
LABEL_18:
    v27 = 0;
    goto LABEL_19;
  }
  return 0LL;
}
