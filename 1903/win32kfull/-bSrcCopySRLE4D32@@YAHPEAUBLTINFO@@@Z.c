/*
 * XREFs of ?bSrcCopySRLE4D32@@YAHPEAUBLTINFO@@@Z @ 0x1C014B260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r10
  __int64 v3; // r12
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // r13d
  int v7; // r14d
  int v8; // r8d
  __int64 v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // edx
  int v12; // ecx
  unsigned __int8 *v13; // r10
  unsigned __int64 v14; // rbx
  int v15; // esi
  __int64 v16; // rcx
  int v17; // r14d
  unsigned int v18; // edx
  int v19; // ebx
  int v20; // r15d
  __int64 v21; // rax
  _DWORD *v22; // rcx
  unsigned int v23; // edi
  BOOL v24; // r15d
  __int64 v25; // rdx
  unsigned int v26; // esi
  int v27; // r14d
  unsigned int v28; // ebx
  __int64 v29; // rax
  _DWORD *v30; // r13
  unsigned __int64 v31; // rax
  int v32; // ecx
  unsigned __int64 v33; // r10
  __int64 result; // rax
  unsigned int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  unsigned __int8 *v39; // r10
  int v40; // ecx
  int v41; // eax
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
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 15);
  v5 = *((_DWORD *)a1 + 22);
  v6 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 32);
  v49 = *((_DWORD *)a1 + 11) / 4;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v51 = *((_DWORD *)a1 + 25);
  v44 = *((_DWORD *)a1 + 14);
  v43 = v6;
  v47 = v9;
  v45 = v5;
  v46 = v7;
  v50 = *((_DWORD *)a1 + 23);
  if ( v4 < v50 )
    return 1LL;
  v10 = *((_DWORD *)a1 + 30) + 2;
  if ( v10 > v6 )
    return 0LL;
  while ( 1 )
  {
    v11 = *v2;
    v12 = v4;
    v13 = v2 + 1;
    v14 = *v13;
    v2 = v13 + 1;
    if ( v11 )
    {
      if ( v4 < v51 && v8 < v7 && (int)(v11 + v8) > v5 )
      {
        if ( v8 < v5 )
        {
          v41 = v5 - v8;
          v8 = v5;
          v11 -= v41;
        }
        if ( (int)(v11 + v8) > v7 )
        {
          v15 = v8 + v11 - v7;
          v11 = v7 - v8;
        }
        else
        {
          v15 = 0;
        }
        v16 = v14 & 0xF;
        v17 = v11 & 1;
        v18 = v11 >> 1;
        v19 = *(_DWORD *)(v9 + 4 * (v14 >> 4));
        v20 = *(_DWORD *)(v9 + 4 * v16);
        if ( v18 )
        {
          v21 = v8;
          v8 += 2 * v18;
          v22 = (_DWORD *)(v3 + 4 * v21);
          do
          {
            *v22 = v19;
            v22[1] = v20;
            v22 += 2;
            --v18;
          }
          while ( v18 );
        }
        if ( v17 )
        {
          v42 = v8++;
          *(_DWORD *)(v3 + 4 * v42) = v19;
        }
        v8 += v15;
LABEL_17:
        v9 = v47;
        goto LABEL_18;
      }
      v8 += v11;
      goto LABEL_18;
    }
    if ( !(_DWORD)v14 )
    {
      --v4;
      v3 += 4LL * v49;
      v8 = v44;
      if ( v12 <= v50 )
      {
        *((_DWORD *)v1 + 34) = v44;
        goto LABEL_40;
      }
      goto LABEL_18;
    }
    if ( (_DWORD)v14 == 1 )
      return 0LL;
    if ( (_DWORD)v14 != 2 )
    {
      v23 = ((unsigned int)(v14 + 1) >> 1) + v10;
      if ( v23 > v6 )
        return 0LL;
      v24 = (((_DWORD)v14 + 1) & 2) != 0;
      if ( v4 >= v51 || v8 >= v7 || (int)v14 + v8 <= v5 )
      {
        v8 += v14;
        v33 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v14 + 1) >> 1];
      }
      else
      {
        v25 = v47;
        if ( v8 < v5 )
        {
          v35 = v5 - v8;
          v8 = v5;
          LODWORD(v14) = v14 - v35;
          v2 += (unsigned __int64)v35 >> 1;
          if ( (v35 & 1) != 0 )
          {
            v8 = v5 + 1;
            v36 = *v2++ & 0xF;
            LODWORD(v14) = v14 - 1;
            *(_DWORD *)(v3 + 4LL * v5) = *(_DWORD *)(v47 + 4 * v36);
          }
        }
        if ( (int)v14 + v8 > v7 )
        {
          v26 = v8 + v14 - v7;
          LODWORD(v14) = v7 - v8;
        }
        else
        {
          v26 = 0;
        }
        v27 = v14 & 1;
        v28 = (unsigned int)v14 >> 1;
        if ( v28 )
        {
          v29 = v8;
          v8 += 2 * v28;
          v30 = (_DWORD *)(v3 + 4 * v29);
          do
          {
            v31 = *v2++;
            v32 = *(_DWORD *)(v47 + 4 * (v31 >> 4));
            LODWORD(v31) = *(_DWORD *)(v47 + 4 * (v31 & 0xF));
            *v30 = v32;
            v30[1] = v31;
            v30 += 2;
            --v28;
          }
          while ( v28 );
          v1 = a1;
          v6 = v43;
          v25 = v47;
        }
        if ( v27 )
        {
          v37 = v8++;
          *(_DWORD *)(v3 + 4 * v37) = *(_DWORD *)(v25 + 4 * ((unsigned __int64)*v2 >> 4));
          v33 = (unsigned __int64)&v2[((unsigned __int64)v26 >> 1) + 1];
        }
        else
        {
          v33 = (unsigned __int64)&v2[(unsigned __int64)(v26 + 1) >> 1];
        }
        v8 += v26;
      }
      v10 = v24 + v23;
      v2 = (unsigned __int8 *)(v24 + v33);
      goto LABEL_17;
    }
    v10 += 2;
    if ( v10 > v6 )
      return 0LL;
    v38 = *v2;
    v39 = v2 + 1;
    v8 += v38;
    v40 = *v39;
    v2 = v39 + 1;
    v4 -= v40;
    v3 += 4LL * v49 * v40;
    if ( v4 < v50 )
      break;
LABEL_18:
    v10 += 2;
    if ( v10 > v6 )
      return 0LL;
    v5 = v45;
    v7 = v46;
  }
  *((_DWORD *)v1 + 34) = v8;
LABEL_40:
  *((_QWORD *)v1 + 14) = v3;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v10;
  *((_DWORD *)v1 + 33) = v4;
  return result;
}
