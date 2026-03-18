/*
 * XREFs of ?bSrcCopySRLE4D16@@YAHPEAUBLTINFO@@@Z @ 0x1C02C5950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D16(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  int v2; // esi
  int v3; // r14d
  unsigned __int8 *v4; // r10
  __int64 v5; // r12
  int v6; // ebp
  int v7; // r8d
  unsigned int v8; // r13d
  __int64 v9; // r15
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // edx
  int v13; // ecx
  unsigned __int8 *v14; // r10
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  BOOL v17; // r15d
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // esi
  int v22; // r14d
  unsigned int v23; // ebx
  __int64 v24; // rax
  _WORD *v25; // r13
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  __int64 v28; // rax
  unsigned __int64 v29; // r10
  int v30; // eax
  unsigned __int8 *v31; // r10
  int v32; // ecx
  int v33; // eax
  int v34; // esi
  __int64 v35; // rcx
  int v36; // r14d
  unsigned int v37; // edx
  __int16 v38; // bx
  __int16 v39; // r15
  __int64 v40; // rax
  _WORD *v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // [rsp+0h] [rbp-68h]
  int v44; // [rsp+4h] [rbp-64h]
  int v45; // [rsp+8h] [rbp-60h]
  int v46; // [rsp+Ch] [rbp-5Ch]
  __int64 v47; // [rsp+10h] [rbp-58h]
  int v49; // [rsp+78h] [rbp+10h]
  int v50; // [rsp+80h] [rbp+18h]
  int v51; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 32);
  v49 = *((_DWORD *)a1 + 11) / 2;
  v51 = *((_DWORD *)a1 + 25);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v44 = *((_DWORD *)a1 + 14);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v43 = v8;
  v47 = v9;
  v45 = v2;
  v46 = v3;
  v50 = *((_DWORD *)a1 + 23);
  if ( v6 < v50 )
    return 1LL;
  v11 = *((_DWORD *)a1 + 30) + 2;
  if ( v11 > v8 )
    return 0LL;
  while ( 1 )
  {
    v12 = *v4;
    v13 = v6;
    v14 = v4 + 1;
    v15 = *v14;
    v4 = v14 + 1;
    if ( !v12 )
      break;
    if ( v6 < v51 && v7 < v3 && (int)(v12 + v7) > v2 )
    {
      if ( v7 < v2 )
      {
        v33 = v2 - v7;
        v7 = v2;
        v12 -= v33;
      }
      if ( (int)(v12 + v7) <= v3 )
      {
        v34 = 0;
      }
      else
      {
        v34 = v7 + v12 - v3;
        v12 = v3 - v7;
      }
      v35 = v15 & 0xF;
      v36 = v12 & 1;
      v37 = v12 >> 1;
      v38 = *(_WORD *)(v9 + 4 * (v15 >> 4));
      v39 = *(_WORD *)(v9 + 4 * v35);
      if ( v37 )
      {
        v40 = v7;
        v7 += 2 * v37;
        v41 = (_WORD *)(v5 + 2 * v40);
        do
        {
          *v41 = v38;
          v41[1] = v39;
          v41 += 2;
          --v37;
        }
        while ( v37 );
      }
      if ( v36 )
      {
        v42 = v7++;
        *(_WORD *)(v5 + 2 * v42) = v38;
      }
      v7 += v34;
LABEL_48:
      v9 = v47;
      goto LABEL_50;
    }
    v7 += v12;
LABEL_50:
    v11 += 2;
    if ( v11 > v8 )
      return 0LL;
    v2 = v45;
    v3 = v46;
  }
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v16 = ((unsigned int)(v15 + 1) >> 1) + v11;
      if ( v16 > v8 )
        return 0LL;
      v17 = (((_DWORD)v15 + 1) & 2) != 0;
      if ( v6 >= v51 || v7 >= v3 || (int)v15 + v7 <= v2 )
      {
        v7 += v15;
        v29 = (unsigned __int64)&v4[(unsigned __int64)(unsigned int)(v15 + 1) >> 1];
      }
      else
      {
        v18 = v47;
        if ( v7 < v2 )
        {
          v19 = v2 - v7;
          v7 = v2;
          LODWORD(v15) = v15 - v19;
          v4 += (unsigned __int64)v19 >> 1;
          if ( (v19 & 1) != 0 )
          {
            v7 = v2 + 1;
            v20 = *v4++ & 0xF;
            LODWORD(v15) = v15 - 1;
            *(_WORD *)(v5 + 2LL * v2) = *(_WORD *)(v47 + 4 * v20);
          }
        }
        if ( (int)v15 + v7 <= v3 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v7 + v15 - v3;
          LODWORD(v15) = v3 - v7;
        }
        v22 = v15 & 1;
        v23 = (unsigned int)v15 >> 1;
        if ( v23 )
        {
          v24 = v7;
          v7 += 2 * v23;
          v25 = (_WORD *)(v5 + 2 * v24);
          do
          {
            v26 = *v4++;
            v27 = *(_WORD *)(v47 + 4 * (v26 >> 4));
            v25[1] = *(_WORD *)(v47 + 4 * (v26 & 0xF));
            *v25 = v27;
            v25 += 2;
            --v23;
          }
          while ( v23 );
          v1 = a1;
          v8 = v43;
          v18 = v47;
        }
        if ( v22 )
        {
          v28 = v7++;
          *(_WORD *)(v5 + 2 * v28) = *(_WORD *)(v18 + 4 * ((unsigned __int64)*v4 >> 4));
          v29 = (unsigned __int64)&v4[((unsigned __int64)v21 >> 1) + 1];
        }
        else
        {
          v29 = (unsigned __int64)&v4[(unsigned __int64)(v21 + 1) >> 1];
        }
        v7 += v21;
      }
      v11 = v17 + v16;
      v4 = (unsigned __int8 *)(v17 + v29);
      goto LABEL_48;
    }
    v11 += 2;
    if ( v11 > v8 )
      return 0LL;
    v30 = *v4;
    v31 = v4 + 1;
    v7 += v30;
    v32 = *v31;
    v4 = v31 + 1;
    v6 -= v32;
    v5 += 2LL * v49 * v32;
    if ( v6 < v50 )
    {
      *((_DWORD *)v1 + 34) = v7;
      goto LABEL_31;
    }
    goto LABEL_50;
  }
  --v6;
  v5 += 2LL * v49;
  v7 = v44;
  if ( v13 > v50 )
    goto LABEL_50;
  *((_DWORD *)v1 + 34) = v44;
LABEL_31:
  *((_QWORD *)v1 + 14) = v5;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v4;
  *((_DWORD *)v1 + 31) = v11;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
