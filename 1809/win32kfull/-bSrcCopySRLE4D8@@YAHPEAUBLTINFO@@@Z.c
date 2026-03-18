/*
 * XREFs of ?bSrcCopySRLE4D8@@YAHPEAUBLTINFO@@@Z @ 0x1C02B0490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  int v2; // r15d
  int v3; // ebp
  int v4; // esi
  int v5; // r12d
  unsigned __int8 *v6; // r10
  __int64 v7; // r14
  int v8; // r8d
  unsigned int v9; // r13d
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // edx
  int v13; // ecx
  unsigned __int8 *v14; // r10
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  BOOL v17; // r15d
  unsigned int v18; // ecx
  __int64 v19; // rdx
  unsigned int v20; // esi
  int v21; // r12d
  unsigned int v22; // ebx
  __int64 v23; // rax
  _BYTE *v24; // r13
  unsigned __int64 v25; // rax
  char v26; // cl
  __int64 v27; // rcx
  unsigned __int64 v28; // r10
  int v29; // eax
  unsigned __int8 *v30; // r10
  int v31; // ecx
  int v32; // esi
  __int64 v33; // rcx
  int v34; // r15d
  unsigned int v35; // edx
  char v36; // bl
  char v37; // r12
  _BYTE *v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // [rsp+0h] [rbp-68h]
  int v41; // [rsp+4h] [rbp-64h]
  int v42; // [rsp+8h] [rbp-60h]
  int v43; // [rsp+Ch] [rbp-5Ch]
  __int64 v44; // [rsp+10h] [rbp-58h]
  int v46; // [rsp+78h] [rbp+10h]
  int v47; // [rsp+80h] [rbp+18h]
  int v48; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 15);
  v4 = *((_DWORD *)a1 + 22);
  v5 = *((_DWORD *)a1 + 24);
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a1 + 32);
  v46 = *((_DWORD *)a1 + 11);
  v42 = v4;
  v43 = v5;
  v48 = v2;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v40 = v9;
  v44 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v47 = *((_DWORD *)a1 + 25);
  v41 = *((_DWORD *)a1 + 14);
  if ( v3 < v2 )
    return 1LL;
  v11 = *((_DWORD *)a1 + 30) + 2;
  if ( v11 > v9 )
    return 0LL;
  while ( 1 )
  {
    v12 = *v6;
    v13 = v3;
    v14 = v6 + 1;
    v15 = *v14;
    v6 = v14 + 1;
    if ( !v12 )
      break;
    if ( v3 < v47 && v8 < v5 && (int)(v12 + v8) > v4 )
    {
      if ( v8 < v4 )
      {
        v12 += v8 - v4;
        v8 = v4;
      }
      if ( (int)(v12 + v8) <= v5 )
      {
        v32 = 0;
      }
      else
      {
        v32 = v8 + v12 - v5;
        v12 = v5 - v8;
      }
      v33 = v15 & 0xF;
      v34 = v12 & 1;
      v35 = v12 >> 1;
      v36 = *(_BYTE *)(v44 + 4 * (v15 >> 4));
      v37 = *(_BYTE *)(v44 + 4 * v33);
      if ( v35 )
      {
        v38 = (_BYTE *)(v8 + v7 + 1);
        v8 += 2 * v35;
        do
        {
          *(v38 - 1) = v36;
          *v38 = v37;
          v38 += 2;
          --v35;
        }
        while ( v35 );
      }
      if ( v34 )
      {
        v39 = v8++;
        *(_BYTE *)(v39 + v7) = v36;
      }
      v8 += v32;
LABEL_48:
      v2 = v48;
      goto LABEL_50;
    }
    v8 += v12;
LABEL_50:
    v11 += 2;
    if ( v11 > v9 )
      return 0LL;
    v4 = v42;
    v5 = v43;
  }
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v16 = ((unsigned int)(v15 + 1) >> 1) + v11;
      if ( v16 > v9 )
        return 0LL;
      v17 = (((_DWORD)v15 + 1) & 2) != 0;
      if ( v3 >= v47 || v8 >= v5 || (int)v15 + v8 <= v4 )
      {
        v8 += v15;
        v28 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(v15 + 1) >> 1];
      }
      else
      {
        if ( v8 < v4 )
        {
          v18 = v4 - v8;
          v8 = v4;
          LODWORD(v15) = v15 - v18;
          v6 += (unsigned __int64)v18 >> 1;
          if ( (v18 & 1) != 0 )
          {
            v8 = v4 + 1;
            v19 = *v6++ & 0xF;
            LODWORD(v15) = v15 - 1;
            *(_BYTE *)(v4 + v7) = *(_BYTE *)(v44 + 4 * v19);
          }
        }
        if ( (int)v15 + v8 <= v5 )
        {
          v20 = 0;
        }
        else
        {
          v20 = v8 + v15 - v5;
          LODWORD(v15) = v5 - v8;
        }
        v21 = v15 & 1;
        v22 = (unsigned int)v15 >> 1;
        if ( v22 )
        {
          v23 = v8;
          v8 += 2 * v22;
          v24 = (_BYTE *)(v23 + v7 + 1);
          do
          {
            v25 = *v6++;
            v26 = *(_BYTE *)(v44 + 4 * (v25 >> 4));
            *v24 = *(_BYTE *)(v44 + 4 * (v25 & 0xF));
            *(v24 - 1) = v26;
            v24 += 2;
            --v22;
          }
          while ( v22 );
          v1 = a1;
          v9 = v40;
        }
        if ( v21 )
        {
          v27 = v8++;
          *(_BYTE *)(v27 + v7) = *(_BYTE *)(v44 + 4 * ((unsigned __int64)*v6 >> 4));
          v28 = (unsigned __int64)&v6[((unsigned __int64)v20 >> 1) + 1];
        }
        else
        {
          v28 = (unsigned __int64)&v6[(unsigned __int64)(v20 + 1) >> 1];
        }
        v8 += v20;
      }
      v11 = v17 + v16;
      v6 = (unsigned __int8 *)(v17 + v28);
      goto LABEL_48;
    }
    v11 += 2;
    if ( v11 > v9 )
      return 0LL;
    v29 = *v6;
    v30 = v6 + 1;
    v8 += v29;
    v31 = *v30;
    v6 = v30 + 1;
    v3 -= v31;
    v7 += v46 * v31;
    if ( v3 < v2 )
    {
      *((_DWORD *)v1 + 34) = v8;
      goto LABEL_31;
    }
    goto LABEL_50;
  }
  --v3;
  v7 += v46;
  v8 = v41;
  if ( v13 > v2 )
    goto LABEL_50;
  *((_DWORD *)v1 + 34) = v41;
LABEL_31:
  *((_QWORD *)v1 + 14) = v7;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v6;
  *((_DWORD *)v1 + 31) = v11;
  *((_DWORD *)v1 + 33) = v3;
  return result;
}
