/*
 * XREFs of ?bSrcCopySRLE4D32@@YAHPEAUBLTINFO@@@Z @ 0x1C0129600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r10
  __int64 v3; // r14
  int v4; // eax
  int v5; // r15d
  int v6; // ebp
  int v7; // esi
  unsigned int v8; // r13d
  __int64 v9; // rdx
  int v10; // r12d
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edx
  unsigned __int8 *v16; // r10
  unsigned __int64 v17; // rbx
  int v18; // esi
  __int64 v19; // rcx
  int v20; // r15d
  unsigned int v21; // edx
  int v22; // ebx
  int v23; // r12d
  __int64 v24; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // edi
  BOOL v27; // r15d
  unsigned int v28; // esi
  int v29; // r12d
  unsigned int v30; // ebx
  __int64 v31; // rax
  _DWORD *v32; // r13
  unsigned __int64 v33; // rax
  int v34; // ecx
  unsigned __int64 v35; // r10
  __int64 result; // rax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  unsigned __int8 *v41; // r10
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rax
  int v45; // [rsp+0h] [rbp-68h]
  unsigned int v46; // [rsp+4h] [rbp-64h]
  int v47; // [rsp+8h] [rbp-60h]
  int v48; // [rsp+Ch] [rbp-5Ch]
  __int64 v49; // [rsp+10h] [rbp-58h]
  int v51; // [rsp+78h] [rbp+10h]
  int v52; // [rsp+80h] [rbp+18h]
  int v53; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 11) / 4;
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 22);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 24);
  v11 = *((_DWORD *)a1 + 14);
  v12 = *((_DWORD *)v1 + 32);
  v52 = v4;
  v49 = *(_QWORD *)(v9 + 16);
  v13 = *((_DWORD *)v1 + 25);
  v45 = v13;
  v46 = v8;
  v47 = v7;
  v48 = v10;
  v53 = v5;
  v51 = v11;
  if ( v6 < v5 )
    return 1LL;
  v14 = *((_DWORD *)v1 + 30) + 2;
  if ( v14 > v8 )
    return 0LL;
  while ( 1 )
  {
    v15 = *v2;
    v16 = v2 + 1;
    v17 = *v16;
    v2 = v16 + 1;
    if ( !v15 )
      break;
    if ( v6 < v13 && v12 < v10 && (int)(v15 + v12) > v7 )
    {
      if ( v12 < v7 )
      {
        v43 = v7 - v12;
        v12 = v7;
        v15 -= v43;
      }
      if ( (int)(v15 + v12) > v10 )
      {
        v18 = v12 + v15 - v10;
        v15 = v10 - v12;
      }
      else
      {
        v18 = 0;
      }
      v19 = v17 & 0xF;
      v20 = v15 & 1;
      v21 = v15 >> 1;
      v22 = *(_DWORD *)(v49 + 4 * (v17 >> 4));
      v23 = *(_DWORD *)(v49 + 4 * v19);
      if ( v21 )
      {
        v24 = v12;
        v12 += 2 * v21;
        v25 = (_DWORD *)(v3 + 4 * v24);
        do
        {
          *v25 = v22;
          v25[1] = v23;
          v25 += 2;
          --v21;
        }
        while ( v21 );
      }
      if ( v20 )
      {
        v44 = v12++;
        *(_DWORD *)(v3 + 4 * v44) = v22;
      }
      v12 += v18;
      goto LABEL_17;
    }
    v12 += v15;
LABEL_19:
    v14 += 2;
    if ( v14 > v8 )
      return 0LL;
    v7 = v47;
    v10 = v48;
    v13 = v45;
  }
  if ( !(_DWORD)v17 )
  {
    --v6;
    v12 = v11;
    v3 += 4LL * v52;
    if ( v6 < v5 )
    {
      *((_DWORD *)v1 + 34) = v11;
      goto LABEL_41;
    }
    goto LABEL_19;
  }
  if ( (_DWORD)v17 == 1 )
    return 0LL;
  if ( (_DWORD)v17 != 2 )
  {
    v26 = ((unsigned int)(v17 + 1) >> 1) + v14;
    if ( v26 > v8 )
      return 0LL;
    v27 = (((_DWORD)v17 + 1) & 2) != 0;
    if ( v6 >= v45 || v12 >= v10 || (int)v17 + v12 <= v7 )
    {
      v12 += v17;
      v35 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v17 + 1) >> 1];
    }
    else
    {
      if ( v12 < v7 )
      {
        v37 = v7 - v12;
        v12 = v7;
        LODWORD(v17) = v17 - v37;
        v2 += (unsigned __int64)v37 >> 1;
        if ( (v37 & 1) != 0 )
        {
          v12 = v7 + 1;
          v38 = *v2++ & 0xF;
          LODWORD(v17) = v17 - 1;
          *(_DWORD *)(v3 + 4LL * v7) = *(_DWORD *)(v49 + 4 * v38);
        }
      }
      if ( (int)v17 + v12 > v10 )
      {
        v28 = v12 + v17 - v10;
        LODWORD(v17) = v10 - v12;
      }
      else
      {
        v28 = 0;
      }
      v29 = v17 & 1;
      v30 = (unsigned int)v17 >> 1;
      if ( v30 )
      {
        v31 = v12;
        v12 += 2 * v30;
        v32 = (_DWORD *)(v3 + 4 * v31);
        do
        {
          v33 = *v2++;
          v34 = *(_DWORD *)(v49 + 4 * (v33 >> 4));
          LODWORD(v33) = *(_DWORD *)(v49 + 4 * (v33 & 0xF));
          *v32 = v34;
          v32[1] = v33;
          v32 += 2;
          --v30;
        }
        while ( v30 );
        v1 = a1;
        v8 = v46;
      }
      if ( v29 )
      {
        v39 = v12++;
        *(_DWORD *)(v3 + 4 * v39) = *(_DWORD *)(v49 + 4 * ((unsigned __int64)*v2 >> 4));
        v35 = (unsigned __int64)&v2[((unsigned __int64)v28 >> 1) + 1];
      }
      else
      {
        v35 = (unsigned __int64)&v2[(unsigned __int64)(v28 + 1) >> 1];
      }
      v12 += v28;
    }
    v14 = v27 + v26;
    v2 = (unsigned __int8 *)(v27 + v35);
LABEL_17:
    v5 = v53;
LABEL_18:
    v11 = v51;
    goto LABEL_19;
  }
  v14 += 2;
  if ( v14 > v8 )
    return 0LL;
  v40 = *v2;
  v41 = v2 + 1;
  v12 += v40;
  v42 = *v41;
  v2 = v41 + 1;
  v6 -= v42;
  v3 += 4LL * v52 * v42;
  if ( v6 >= v5 )
    goto LABEL_18;
  *((_DWORD *)v1 + 34) = v12;
LABEL_41:
  result = 1LL;
  *((_DWORD *)v1 + 33) = v6;
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v14;
  return result;
}
