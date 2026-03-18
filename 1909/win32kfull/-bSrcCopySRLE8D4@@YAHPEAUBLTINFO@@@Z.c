/*
 * XREFs of ?bSrcCopySRLE8D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02C4CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  int v2; // r15d
  unsigned __int8 *v3; // rbp
  __int64 v4; // r10
  unsigned int v5; // esi
  int v6; // r9d
  int v7; // edx
  int v8; // r12d
  __int64 v9; // rax
  int v10; // r14d
  int v11; // ecx
  int v12; // r13d
  int v13; // eax
  int v14; // edx
  __int64 result; // rax
  unsigned int v16; // r9d
  unsigned int v17; // edi
  __int64 v18; // rbx
  __int64 v19; // rax
  char v20; // r9
  unsigned int v21; // r12d
  unsigned int v22; // esi
  int v23; // r15d
  unsigned __int8 *v24; // rbp
  __int64 v25; // rdi
  unsigned int v26; // r12d
  int v27; // r15d
  __int64 v28; // rax
  int v29; // esi
  __int64 v30; // rax
  int v31; // edx
  unsigned int v32; // edi
  __int64 v33; // rax
  unsigned __int8 *v34; // rbp
  char v35; // r9
  __int64 v36; // rax
  unsigned __int8 *v37; // rbp
  unsigned int v38; // ebx
  int v39; // eax
  unsigned __int8 *v40; // rbp
  int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  int v44; // r15d
  int v45; // edi
  unsigned int v46; // edx
  unsigned int i; // esi
  int v48; // [rsp+4h] [rbp-64h]
  int v49; // [rsp+8h] [rbp-60h]
  unsigned int v50; // [rsp+Ch] [rbp-5Ch]
  int v51; // [rsp+10h] [rbp-58h]
  int v52; // [rsp+14h] [rbp-54h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  int v55; // [rsp+78h] [rbp+10h]
  unsigned int v56; // [rsp+80h] [rbp+18h]
  unsigned int v57; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 11);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v6 = *((_DWORD *)a1 + 23);
  v7 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 30);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v10 = *((_DWORD *)a1 + 15);
  v11 = *((_DWORD *)a1 + 22);
  v12 = *((_DWORD *)v1 + 24);
  v53 = v9;
  v13 = *((_DWORD *)v1 + 25);
  v51 = v7;
  v14 = *((_DWORD *)v1 + 32);
  v55 = v13;
  v48 = v2;
  v57 = v5;
  v52 = v11;
  v49 = v6;
  if ( v10 < v6 )
    return 1LL;
  v16 = (unsigned int)(v12 - 1) >> 1;
  v56 = v16;
  v17 = (unsigned int)v11 >> 1;
  v18 = (unsigned int)(v14 >> 1);
  v50 = (unsigned int)v11 >> 1;
  if ( v10 >= v13 )
  {
    v20 = (char)a1;
  }
  else
  {
    if ( (unsigned int)v18 < v17 )
    {
      v19 = v17;
    }
    else
    {
      v19 = v16;
      if ( (unsigned int)v18 <= v16 )
        v19 = (unsigned int)v18;
    }
    v20 = *(_BYTE *)(v19 + v4);
    v13 = *((_DWORD *)v1 + 25);
  }
  v21 = v8 + 2;
  if ( v21 <= v5 )
  {
    while ( 1 )
    {
      v22 = *v3;
      v23 = v10;
      v24 = v3 + 1;
      v25 = *v24;
      v3 = v24 + 1;
      if ( !v22 )
        break;
      if ( v10 < v13 && v14 < v12 )
      {
        if ( (int)(v22 + v14) > v11 )
        {
          if ( v14 < v11 )
          {
            v22 += v14 - v11;
            v14 = v11;
            v18 = (unsigned int)(v11 >> 1);
          }
          if ( (int)(v22 + v14) <= v12 )
          {
            v44 = 0;
          }
          else
          {
            v44 = v14 + v22 - v12;
            v22 = v12 - v14;
          }
          v45 = *(_DWORD *)(v53 + 4 * v25);
          if ( (v14 & 1) != 0 )
          {
            ++v14;
            *(_BYTE *)(v18 + v4) = v20 ^ (v20 ^ v45) & 0xF;
            v18 = (unsigned int)(v18 + 1);
            --v22;
          }
          v20 = (16 * v45) | v45 & 0xF;
          v46 = v22 + v14;
          for ( i = v22 >> 1; i; --i )
          {
            *(_BYTE *)(v18 + v4) = v20;
            v18 = (unsigned int)(v18 + 1);
          }
          if ( (v46 & 1) != 0 )
            v20 = (16 * v45) | v45 & 0xF;
          v14 = v44 + v46;
          goto LABEL_81;
        }
        v13 = v55;
      }
      v14 += v22;
LABEL_49:
      v21 += 2;
      v18 = (unsigned int)(v14 >> 1);
      if ( v21 > v57 )
        return 0LL;
      v11 = v52;
    }
    if ( (_DWORD)v25 )
    {
      if ( (_DWORD)v25 == 1 )
      {
        if ( v10 < v55 )
        {
          if ( v14 >= v11 && v14 < v12 && (v14 & 1) != 0 )
          {
            *(_BYTE *)(v18 + v4) = v20 ^ (*(_BYTE *)(v18 + v4) ^ v20) & 0xF;
          }
          else if ( (v12 & 1) != 0 && v14 >= v12 )
          {
            *(_BYTE *)(v56 + v4) = v20 ^ (v20 ^ *(_BYTE *)(v56 + v4)) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v25 != 2 )
      {
        v26 = v25 + v21;
        if ( v26 > v57 )
          return 0LL;
        v27 = v25 & 1;
        if ( v10 >= v55 || v14 >= v12 || (int)v25 + v14 <= v11 )
        {
          v37 = &v3[v25];
          v14 += v25;
        }
        else
        {
          if ( v14 < v11 )
          {
            v28 = (unsigned int)(v11 - v14);
            v18 = (unsigned int)(v11 >> 1);
            LODWORD(v25) = v25 - v28;
            v14 = v11;
            v3 += v28;
          }
          if ( (int)v25 + v14 <= v12 )
          {
            v29 = 0;
          }
          else
          {
            v29 = v14 + v25 - v12;
            LODWORD(v25) = v12 - v14;
          }
          if ( (v14 & 1) != 0 )
          {
            v30 = *v3;
            ++v14;
            ++v3;
            v20 ^= (v20 ^ *(_BYTE *)(v53 + 4 * v30)) & 0xF;
            *(_BYTE *)(v18 + v4) = v20;
            v18 = (unsigned int)(v18 + 1);
            LODWORD(v25) = v25 - 1;
          }
          v31 = v25 + v14;
          v32 = (unsigned int)v25 >> 1;
          if ( v32 )
          {
            do
            {
              v33 = *v3;
              v34 = v3 + 1;
              v35 = *(_BYTE *)(v53 + 4 * v33);
              v36 = *v34;
              v3 = v34 + 1;
              v20 = *(_BYTE *)(v53 + 4 * v36) & 0xF | (16 * v35);
              *(_BYTE *)(v18 + v4) = v20;
              v18 = (unsigned int)(v18 + 1);
              --v32;
            }
            while ( v32 );
            v1 = a1;
          }
          if ( (v31 & 1) != 0 )
            v20 = v20 & 0xF | (16 * *(_BYTE *)(v53 + 4LL * *v3++));
          v37 = &v3[v29];
          v14 = v29 + v31;
        }
        v21 = v27 + v26;
        v3 = &v37[v27];
        goto LABEL_81;
      }
      if ( v10 >= v55 )
        goto LABEL_40;
      if ( v14 >= v11 && v14 < v12 && (v14 & 1) != 0 )
      {
        v20 ^= (*(_BYTE *)(v18 + v4) ^ v20) & 0xF;
        *(_BYTE *)(v18 + v4) = v20;
        goto LABEL_40;
      }
      if ( (v12 & 1) != 0 && v14 >= v12 )
      {
        v38 = (unsigned int)(v12 - 1) >> 1;
        v20 ^= (v20 ^ *(_BYTE *)(v56 + v4)) & 0xF;
        *(_BYTE *)(v56 + v4) = v20;
      }
      else
      {
LABEL_40:
        v38 = (unsigned int)(v12 - 1) >> 1;
      }
      v21 += 2;
      if ( v21 > v57 )
        return 0LL;
      v39 = *v3;
      v40 = v3 + 1;
      v14 += v39;
      v41 = *v40;
      v3 = v40 + 1;
      v10 -= v41;
      v4 += v48 * v41;
      if ( v10 < v49 )
      {
        *((_DWORD *)v1 + 34) = v14;
LABEL_85:
        *((_QWORD *)v1 + 14) = v4;
        result = 1LL;
        *((_QWORD *)v1 + 13) = v3;
        *((_DWORD *)v1 + 31) = v21;
        *((_DWORD *)v1 + 33) = v10;
        return result;
      }
      v42 = v14 >> 1;
      if ( v10 < v55 )
      {
        v43 = v50;
        if ( v42 >= v50 )
        {
          v43 = v38;
          if ( v42 <= v38 )
            v43 = v14 >> 1;
        }
        v20 = *(_BYTE *)(v43 + v4);
      }
      v13 = v55;
      goto LABEL_49;
    }
    v13 = v55;
    if ( v10 < v55 )
    {
      if ( v14 >= v11 && v14 < v12 && (v14 & 1) != 0 )
      {
        v20 ^= (*(_BYTE *)(v18 + v4) ^ v20) & 0xF;
        *(_BYTE *)(v18 + v4) = v20;
LABEL_62:
        v13 = v55;
        goto LABEL_63;
      }
      if ( (v12 & 1) != 0 && v14 >= v12 )
      {
        v20 ^= (v20 ^ *(_BYTE *)(v56 + v4)) & 0xF;
        *(_BYTE *)(v56 + v4) = v20;
        goto LABEL_62;
      }
    }
LABEL_63:
    --v10;
    v4 += v48;
    v14 = v51;
    if ( v23 <= v49 )
    {
      *((_DWORD *)v1 + 34) = v51;
      goto LABEL_85;
    }
    if ( v10 < v13 )
    {
      v20 = *(_BYTE *)(v50 + v4);
LABEL_81:
      v13 = v55;
      goto LABEL_49;
    }
    goto LABEL_49;
  }
  return 0LL;
}
