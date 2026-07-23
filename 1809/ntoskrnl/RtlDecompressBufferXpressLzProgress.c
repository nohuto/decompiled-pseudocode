/*
 * XREFs of RtlDecompressBufferXpressLzProgress @ 0x1402FA814
 * Callers:
 *     RtlDecompressBufferProgress @ 0x1402FA180 (RtlDecompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140144288 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressLzProgress(
        _BYTE *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  _BYTE *v8; // r10
  unsigned int v9; // esi
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rbp
  _BYTE *v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rdx
  unsigned __int8 *v16; // r8
  int v17; // esi
  unsigned __int8 *v18; // rcx
  unsigned __int64 XpressCallback; // rax
  int v20; // r15d
  bool v21; // sf
  unsigned __int64 v22; // rcx
  char v23; // r14
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned __int8 *v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r14
  signed __int64 v30; // r14
  _BYTE *v31; // rsi
  unsigned __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rax
  _DWORD *v35; // rsi
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  char v39; // r14
  unsigned __int64 v40; // r14
  unsigned __int8 *v41; // rax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r14
  _BYTE *v45; // rsi
  unsigned __int64 v46; // rcx
  char v47; // al
  __int64 v48; // rax
  __int16 v50; // ax
  unsigned __int64 v51; // rdx
  char v52; // cl
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int8 *v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned __int8 *v60; // [rsp+20h] [rbp-58h]
  _BYTE *v61; // [rsp+28h] [rbp-50h]
  _QWORD v62[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-38h]

  v7 = a3;
  v8 = a1;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = &a1[a2];
  v61 = v12;
  v13 = v11 - 86;
  v14 = (unsigned __int64)(v12 - 352);
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v15 = (unsigned __int64)&a1[v9];
  v62[0] = a6;
  v62[1] = a7;
  v63 = v9;
  if ( v14 < v15 )
    v15 = (unsigned __int64)(v12 - 352);
  v16 = 0LL;
  v60 = 0LL;
LABEL_8:
  v17 = *(_DWORD *)v7;
  v18 = v7;
  v7 += 4;
  if ( (unsigned __int64)v7 < v13 )
  {
    if ( (unsigned __int64)v10 >= v15 )
    {
      if ( (unsigned __int64)v10 >= v14 )
      {
LABEL_121:
        v36 = (unsigned __int64)v61;
        while ( 1 )
        {
          v20 = 2 * v17 + 1;
          if ( v17 >= 0 )
            break;
          do
          {
            if ( v7 == (unsigned __int8 *)v11 )
              goto LABEL_155;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
            {
              if ( (unsigned __int64)v10 < v36 )
                return 3221226050LL;
LABEL_155:
              *a5 = (_DWORD)v10 - (_DWORD)v8;
              return 0LL;
            }
            v51 = *(unsigned __int16 *)v7;
            v7 += 2;
            v52 = v51;
            v53 = (v51 >> 3) + 1;
            v54 = v52 & 7;
            if ( v54 == 7 )
            {
              if ( v60 )
              {
                v56 = (unsigned __int64)*v60 >> 4;
                v60 = 0LL;
              }
              else
              {
                if ( (unsigned __int64)v7 >= v11 )
                  return 3221226050LL;
                v55 = v7;
                v60 = v7++;
                v56 = *v55 & 0xF;
              }
              if ( v56 == 15 )
              {
                if ( (unsigned __int64)v7 >= v11 )
                  return 3221226050LL;
                v57 = *v7++;
                if ( v57 == 255 )
                {
                  if ( (unsigned __int64)(v7 + 1) >= v11 )
                    return 3221226050LL;
                  v58 = *(unsigned __int16 *)v7;
                  v7 += 2;
                  if ( !v58 )
                  {
                    if ( (unsigned __int64)(v7 + 3) >= v11 )
                      return 3221226050LL;
                    v58 = *(unsigned int *)v7;
                    v7 += 4;
                  }
                  if ( v58 < 0x16 || &v10[v58 + 3] < v10 )
                    return 3221226050LL;
                  v57 = v58 - 22;
                }
                v56 = v57 + 15;
              }
              v54 = v56 + 7;
            }
            v59 = v54 + 3;
            if ( &v10[-v53] < v8 || (unsigned __int64)&v10[v59] > v36 )
              return 3221226050LL;
            qmemcpy(v10, &v10[-v53], v59);
            v10 += v59;
LABEL_127:
            if ( v20 >= 0 )
            {
              v20 *= 2;
              goto LABEL_123;
            }
LABEL_118:
            v20 *= 2;
          }
          while ( v20 );
          if ( (unsigned __int64)(v7 + 3) >= v11 )
            return 3221226050LL;
          v17 = *(_DWORD *)v7;
          v7 += 4;
        }
LABEL_123:
        if ( v20 < 0 )
        {
          if ( (unsigned __int64)v7 < v11 && (unsigned __int64)v10 < v36 )
          {
            *v10++ = *v7++;
            goto LABEL_118;
          }
        }
        else
        {
          v20 *= 2;
          if ( (unsigned __int64)(v7 + 2) <= v11 && (unsigned __int64)(v10 + 2) <= v36 )
          {
            v50 = *(_WORD *)v7;
            v7 += 2;
            *(_WORD *)v10 = v50;
            v10 += 2;
            goto LABEL_127;
          }
        }
        return 3221226050LL;
      }
      XpressCallback = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
      v16 = v60;
      v15 = XpressCallback;
      v8 = a1;
    }
    v20 = 2 * v17 + 1;
    if ( v17 >= 0 )
      goto LABEL_13;
    while ( 1 )
    {
      v22 = *(unsigned __int16 *)v7;
      v7 += 2;
      v23 = v22;
      v24 = (v22 >> 3) + 1;
      v25 = v23 & 7;
      if ( v25 == 7 )
      {
        if ( v16 )
        {
          v27 = (unsigned __int64)*v16 >> 4;
          v26 = 0LL;
        }
        else
        {
          v26 = v7++;
          v27 = *v26 & 0xF;
        }
        v60 = v26;
        if ( v27 == 15 )
        {
          if ( (unsigned __int64)(v7 + 7) >= v13 )
            goto LABEL_71;
          v28 = *v7++;
          if ( v28 == 255 )
          {
            v29 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v29 )
            {
              v29 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v29 < 0x16 || &v10[v29 + 3] < v10 )
              return 3221226050LL;
            v28 = v29 - 22;
          }
          v27 = v28 + 15;
        }
        v25 = v27 + 7;
      }
      v30 = v25 + 3;
      v31 = &v10[-v24];
      if ( &v10[-v24] < v8 )
        return 3221226050LL;
      if ( v24 < 4 )
        break;
LABEL_44:
      *(_DWORD *)v10 = *(_DWORD *)v31;
      *((_DWORD *)v10 + 1) = *((_DWORD *)v31 + 1);
      if ( v30 >= 9 )
      {
        v10 += 8;
        v35 = v31 + 8;
        for ( v30 -= 8LL; ; v30 -= 16LL )
        {
          if ( (unsigned __int64)v10 >= v15 )
          {
            if ( (unsigned __int64)v10 >= v14 )
              goto LABEL_56;
            v15 = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
          }
          *(_DWORD *)v10 = *v35;
          *((_DWORD *)v10 + 1) = v35[1];
          *((_DWORD *)v10 + 2) = v35[2];
          *((_DWORD *)v10 + 3) = v35[3];
          if ( v30 < 17 )
            break;
          v10 += 16;
          v35 += 4;
        }
        v8 = a1;
      }
      v10 += v30;
LABEL_53:
      v16 = v60;
      if ( v20 >= 0 )
      {
        for ( v20 *= 2; ; v20 *= 2 )
        {
LABEL_13:
          if ( v20 < 0 )
          {
            *v10++ = *v7++;
            break;
          }
          v21 = (v20 & 0x40000000) != 0;
          v20 *= 2;
          if ( v21 )
          {
            *(_WORD *)v10 = *(_WORD *)v7;
            v10 += 2;
            v7 += 2;
            break;
          }
          v21 = (v20 & 0x40000000) != 0;
          v20 *= 2;
          *(_DWORD *)v10 = *(_DWORD *)v7;
          if ( v21 )
          {
            v10 += 3;
            v7 += 3;
            break;
          }
          v10 += 4;
          v7 += 4;
          v21 = (v20 & 0x40000000) != 0;
          v20 *= 2;
          if ( v21 )
            break;
        }
      }
      v20 *= 2;
      if ( !v20 )
        goto LABEL_8;
    }
    *v10 = *v31;
    v32 = v24 - 1;
    if ( v32 )
    {
      v10[1] = v31[1];
      if ( v32 == 1 )
      {
        v10 += 2;
        v34 = -2LL;
        goto LABEL_43;
      }
      v33 = v31[2];
    }
    else
    {
      v10[1] = *v31;
      v33 = *v31;
    }
    v10[2] = v33;
    v34 = -3LL;
    v10 += 3;
LABEL_43:
    v30 += v34;
    if ( !v30 )
      goto LABEL_53;
    goto LABEL_44;
  }
  while ( 1 )
  {
    v7 = v18 + 4;
    if ( (unsigned __int64)v10 >= v15 )
    {
      if ( (unsigned __int64)v10 >= v14 )
        goto LABEL_121;
      v37 = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
      v16 = v60;
      v15 = v37;
      v8 = a1;
    }
    v20 = 2 * v17 + 1;
    if ( v17 < 0 )
      break;
    while ( 1 )
    {
      if ( v20 < 0 )
      {
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        *v10++ = *v7++;
        goto LABEL_113;
      }
      v21 = (v20 & 0x40000000) != 0;
      v20 *= 2;
      if ( v21 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        *(_WORD *)v10 = *(_WORD *)v7;
        v10 += 2;
        v7 += 2;
        goto LABEL_113;
      }
      v21 = (v20 & 0x40000000) != 0;
      v20 *= 2;
      if ( v21 )
        break;
      v20 *= 2;
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      *(_DWORD *)v10 = *(_DWORD *)v7;
      v10 += 4;
      v7 += 4;
LABEL_100:
      if ( v20 < 0 )
        goto LABEL_113;
      v20 *= 2;
    }
    if ( (unsigned __int64)(v7 + 2) >= v11 )
      return 3221226050LL;
    *(_WORD *)v10 = *(_WORD *)v7;
    v10[2] = v7[2];
    v10 += 3;
    v7 += 3;
LABEL_113:
    v16 = v60;
    v18 = v7;
    v20 *= 2;
    if ( v20 )
      break;
    if ( (unsigned __int64)(v7 + 3) >= v11 )
      return 3221226050LL;
    v17 = *(_DWORD *)v7;
  }
  if ( v7 == (unsigned __int8 *)v11 )
    goto LABEL_58;
  if ( (unsigned __int64)(v7 + 1) >= v11 )
  {
    v36 = (unsigned __int64)v61;
    if ( v10 >= v61 )
      goto LABEL_127;
    return 3221226050LL;
  }
  v38 = *(unsigned __int16 *)v7;
  v7 += 2;
  v39 = v38;
  v24 = (v38 >> 3) + 1;
  v40 = v39 & 7;
  if ( v40 == 7 )
  {
    if ( v16 )
    {
      v42 = (unsigned __int64)*v16 >> 4;
      v41 = 0LL;
    }
    else
    {
      if ( (unsigned __int64)v7 >= v11 )
        return 3221226050LL;
      v41 = v7++;
      v42 = *v41 & 0xF;
    }
    v60 = v41;
    if ( v42 == 15 )
    {
LABEL_71:
      if ( (unsigned __int64)v7 >= v11 )
        return 3221226050LL;
      v43 = *v7++;
      if ( v43 == 255 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        v44 = *(unsigned __int16 *)v7;
        v7 += 2;
        if ( !v44 )
        {
          if ( (unsigned __int64)(v7 + 3) >= v11 )
            return 3221226050LL;
          v44 = *(unsigned int *)v7;
          v7 += 4;
        }
        if ( v44 < 0x16 || &v10[v44 + 3] < v10 )
          return 3221226050LL;
        v43 = v44 - 22;
      }
      v42 = v43 + 15;
    }
    v40 = v42 + 7;
  }
  v30 = v40 + 3;
  v45 = &v10[-v24];
  if ( &v10[-v24] < v8 )
    return 3221226050LL;
  if ( v24 >= 4 )
    goto LABEL_91;
  *v10 = *v45;
  v46 = v24 - 1;
  if ( v46 )
  {
    v10[1] = v45[1];
    if ( v46 == 1 )
    {
      v10 += 2;
      v48 = -2LL;
      goto LABEL_90;
    }
    v47 = v45[2];
  }
  else
  {
    v10[1] = *v45;
    v47 = *v45;
  }
  v10[2] = v47;
  v48 = -3LL;
  v10 += 3;
LABEL_90:
  v30 += v48;
  if ( !v30 )
    goto LABEL_100;
LABEL_91:
  *(_DWORD *)v10 = *(_DWORD *)v45;
  *((_DWORD *)v10 + 1) = *((_DWORD *)v45 + 1);
  if ( v30 < 9 )
  {
LABEL_99:
    v10 += v30;
    goto LABEL_100;
  }
  v10 += 8;
  v35 = v45 + 8;
  for ( v30 -= 8LL; ; v30 -= 16LL )
  {
    if ( (unsigned __int64)v10 < v15 )
      goto LABEL_96;
    if ( (unsigned __int64)v10 >= v14 )
      break;
    v15 = RtlpMakeXpressCallback((__int64)v62, v14, (__int64)v10);
LABEL_96:
    *(_DWORD *)v10 = *v35;
    *((_DWORD *)v10 + 1) = v35[1];
    *((_DWORD *)v10 + 2) = v35[2];
    *((_DWORD *)v10 + 3) = v35[3];
    if ( v30 < 17 )
    {
      v8 = a1;
      goto LABEL_99;
    }
    v10 += 16;
    v35 += 4;
  }
LABEL_56:
  if ( &v10[v30] <= v61 )
  {
    v8 = a1;
    qmemcpy(v10, v35, v30);
    v10 += v30;
LABEL_58:
    v36 = (unsigned __int64)v61;
    goto LABEL_127;
  }
  return 3221226050LL;
}
