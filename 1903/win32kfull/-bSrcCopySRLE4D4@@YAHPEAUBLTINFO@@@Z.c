/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02C6860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  char *v2; // r10
  __int64 v3; // rdi
  int v4; // r14d
  int v5; // r15d
  int v6; // r12d
  int v7; // ebx
  int v8; // edx
  unsigned int v9; // r13d
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rbp
  char v16; // r8
  unsigned int v17; // r14d
  unsigned int v18; // esi
  int v19; // r13d
  unsigned __int8 *v20; // r10
  unsigned __int64 v21; // rbx
  unsigned int v22; // r14d
  BOOL v23; // r13d
  unsigned int v24; // ecx
  char v25; // al
  char v26; // cl
  unsigned int v27; // esi
  int v28; // r12d
  unsigned int v29; // eax
  char v30; // r12
  __int64 v31; // rbp
  unsigned int v32; // ebx
  unsigned int v33; // eax
  char v34; // dl
  unsigned __int64 v35; // rcx
  unsigned int j; // ebx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r10
  unsigned int v39; // ebx
  int v40; // eax
  unsigned __int8 *v41; // r10
  int v42; // ecx
  unsigned int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // r13d
  __int64 v47; // rcx
  char v48; // bl
  char v49; // r12
  __int64 v50; // rax
  char v51; // bl
  unsigned int v52; // edx
  unsigned int i; // esi
  __int64 v54; // rax
  unsigned int v55; // [rsp+0h] [rbp-78h]
  unsigned int v56; // [rsp+4h] [rbp-74h]
  int v57; // [rsp+8h] [rbp-70h]
  __int64 v58; // [rsp+10h] [rbp-68h]
  int v59; // [rsp+18h] [rbp-60h]
  int v60; // [rsp+1Ch] [rbp-5Ch]
  int v61; // [rsp+20h] [rbp-58h]
  int v62; // [rsp+24h] [rbp-54h]
  int v63; // [rsp+28h] [rbp-50h]
  int v65; // [rsp+88h] [rbp+10h]
  int v66; // [rsp+90h] [rbp+18h]
  unsigned int v67; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 25);
  v60 = *((_DWORD *)a1 + 11);
  v62 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v63 = v6;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v56 = v9;
  v65 = v11;
  v58 = *(_QWORD *)(v10 + 16);
  v61 = *((_DWORD *)v1 + 23);
  v66 = v7;
  if ( v5 < v61 )
    return 1LL;
  v13 = (unsigned int)v11 >> 1;
  v14 = (unsigned int)(v6 - 1) >> 1;
  v55 = (unsigned int)v11 >> 1;
  v67 = v14;
  v15 = (unsigned int)(v8 >> 1);
  v57 = v6 & 1;
  if ( v5 >= v7 )
  {
    v16 = (char)a1;
  }
  else
  {
    if ( (unsigned int)v15 >= (unsigned int)v13 )
    {
      v13 = v14;
      if ( (unsigned int)v15 <= v14 )
        v13 = (unsigned int)v15;
    }
    v16 = *(_BYTE *)(v13 + v3);
  }
  v17 = v4 + 2;
  if ( v17 <= v9 )
  {
    while ( 1 )
    {
      v18 = (unsigned __int8)*v2;
      v19 = v5;
      v20 = (unsigned __int8 *)(v2 + 1);
      v21 = *v20;
      v2 = (char *)(v20 + 1);
      if ( !v18 )
        break;
      if ( v5 < v66 && v8 < v6 && (int)(v18 + v8) > v11 )
      {
        if ( v8 < v11 )
        {
          LODWORD(v15) = v55;
          v45 = v11 - v8;
          v8 = v11;
          v18 -= v45;
        }
        if ( (int)(v18 + v8) <= v6 )
        {
          v46 = 0;
        }
        else
        {
          v46 = v8 + v18 - v6;
          v18 = v6 - v8;
        }
        v47 = v21 & 0xF;
        v48 = *(_BYTE *)(v58 + 4 * (v21 >> 4));
        v49 = *(_BYTE *)(v58 + 4 * v47);
        if ( (v8 & 1) != 0 )
        {
          v50 = (unsigned int)v15;
          LODWORD(v15) = v15 + 1;
          ++v8;
          *(_BYTE *)(v50 + v3) = v16 ^ (v16 ^ v48) & 0xF;
          --v18;
          LOBYTE(v50) = v49 ^ v48;
          v49 = v48;
          v48 ^= v50;
        }
        v51 = 16 * v48;
        v52 = v18 + v8;
        v16 = v51 | v49 & 0xF;
        for ( i = v18 >> 1; i; --i )
        {
          v54 = (unsigned int)v15;
          LODWORD(v15) = v15 + 1;
          *(_BYTE *)(v54 + v3) = v16;
        }
        if ( (v52 & 1) != 0 )
          v16 = v51 | v51 & 0xF | v49 & 0xF;
        v8 = v46 + v52;
        goto LABEL_90;
      }
      v8 += v18;
LABEL_92:
      v17 += 2;
      v15 = (unsigned int)(v8 >> 1);
      if ( v17 > v56 )
        return 0LL;
      v6 = v63;
    }
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)v21 == 1 )
      {
        if ( v5 < v66 )
        {
          if ( v8 >= v11 && v8 < v6 && (v8 & 1) != 0 )
          {
            *(_BYTE *)(v15 + v3) = v16 ^ (v16 ^ *(_BYTE *)(v15 + v3)) & 0xF;
          }
          else if ( v57 && v8 >= v6 )
          {
            *(_BYTE *)(v67 + v3) = v16 ^ (*(_BYTE *)(v67 + v3) ^ v16) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v21 != 2 )
      {
        v22 = ((unsigned int)(v21 + 1) >> 1) + v17;
        if ( v22 > v56 )
          return 0LL;
        v23 = (((_DWORD)v21 + 1) & 2) != 0;
        if ( v5 >= v66 || v8 >= v6 || (int)v21 + v8 <= v65 )
        {
          v8 += v21;
          v38 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v21 + 1) >> 1];
        }
        else
        {
          if ( v8 < v65 )
          {
            v24 = v65 - v8;
            v15 = v55;
            LODWORD(v21) = v21 - (v65 - v8);
            v8 = v65;
            v2 += (unsigned __int64)v24 >> 1;
            if ( (v24 & 1) != 0 )
            {
              v25 = *v2++;
              v26 = *(_BYTE *)(v58 + 4LL * (v25 & 0xF));
              if ( (v65 & 1) != 0 )
              {
                v16 ^= (v16 ^ v26) & 0xF;
                *(_BYTE *)(v55 + v3) = v16;
                v15 = v55 + 1;
              }
              else
              {
                v16 = v16 & 0xF | (16 * v26);
              }
              v11 = v65;
              v8 = v65 + 1;
              LODWORD(v21) = v21 - 1;
              if ( !(_DWORD)v21 )
              {
                v17 = v23 + v22;
                v2 += v23;
                goto LABEL_92;
              }
            }
          }
          if ( (int)v21 + v8 <= v6 )
          {
            v27 = 0;
          }
          else
          {
            v27 = v8 + v21 - v6;
            LODWORD(v21) = v6 - v8;
          }
          if ( (_DWORD)v21 )
          {
            v28 = v21 + v8;
            v59 = v21 + v8;
            if ( (v8 & 1) != 0 )
            {
              v29 = (unsigned __int8)*v2++;
              v30 = *(_BYTE *)(v58 + 4LL * (v29 & 0xF));
              v16 ^= (v16 ^ *(_BYTE *)(v58 + 4 * ((unsigned __int64)v29 >> 4))) & 0xF;
              *(_BYTE *)(v15 + v3) = v16;
              v31 = (unsigned int)(v15 + 1);
              v32 = (unsigned int)(v21 - 1) >> 1;
              if ( v32 )
              {
                do
                {
                  v33 = (unsigned __int8)*v2++;
                  v34 = 16 * v30;
                  v30 = *(_BYTE *)(v58 + 4LL * (v33 & 0xF));
                  v16 = v34 | *(_BYTE *)(v58 + 4 * ((unsigned __int64)v33 >> 4)) & 0xF;
                  *(_BYTE *)(v31 + v3) = v16;
                  v31 = (unsigned int)(v31 + 1);
                  --v32;
                }
                while ( v32 );
                v1 = a1;
              }
              if ( (v59 & 1) != 0 )
              {
                v35 = v27 + 1;
                v16 = v16 & 0xF | (16 * v30);
              }
              else
              {
                v35 = v27;
              }
              v28 = v59;
LABEL_42:
              v38 = (unsigned __int64)&v2[v35 >> 1];
            }
            else
            {
              for ( j = (unsigned int)v21 >> 1; j; --j )
              {
                v37 = (unsigned __int8)*v2++;
                v16 = *(_BYTE *)(v58 + 4 * (v37 & 0xF)) & 0xF | (16 * *(_BYTE *)(v58 + 4 * (v37 >> 4)));
                *(_BYTE *)(v15 + v3) = v16;
                v15 = (unsigned int)(v15 + 1);
              }
              if ( (v28 & 1) == 0 )
              {
                v35 = v27 + 1;
                goto LABEL_42;
              }
              v16 = v16 & 0xF | (16 * *(_BYTE *)(v58 + 4 * ((unsigned __int64)(unsigned __int8)*v2 >> 4)));
              v38 = (unsigned __int64)&v2[((unsigned __int64)v27 >> 1) + 1];
            }
            v8 = v28;
          }
          else
          {
            v38 = (unsigned __int64)&v2[(unsigned __int64)(v27 + 1) >> 1];
          }
          v8 += v27;
        }
        v17 = v23 + v22;
        v2 = (char *)(v23 + v38);
LABEL_90:
        v11 = v65;
        goto LABEL_92;
      }
      if ( v5 >= v66 )
        goto LABEL_53;
      if ( v8 >= v11 && v8 < v6 && (v8 & 1) != 0 )
      {
        *(_BYTE *)(v15 + v3) = v16 ^ (v16 ^ *(_BYTE *)(v15 + v3)) & 0xF;
        goto LABEL_53;
      }
      if ( v57 && v8 >= v6 )
      {
        v39 = v67;
        *(_BYTE *)(v67 + v3) = v16 ^ (*(_BYTE *)(v67 + v3) ^ v16) & 0xF;
      }
      else
      {
LABEL_53:
        v39 = v67;
      }
      v17 += 2;
      if ( v17 > v56 )
        return 0LL;
      v40 = (unsigned __int8)*v2;
      v41 = (unsigned __int8 *)(v2 + 1);
      v8 += v40;
      v42 = *v41;
      v2 = (char *)(v41 + 1);
      v5 -= v42;
      v3 += v60 * v42;
      if ( v5 < v61 )
      {
        *((_DWORD *)v1 + 34) = v8;
LABEL_95:
        *((_QWORD *)v1 + 14) = v3;
        result = 1LL;
        *((_QWORD *)v1 + 13) = v2;
        *((_DWORD *)v1 + 31) = v17;
        *((_DWORD *)v1 + 33) = v5;
        return result;
      }
      v43 = v55;
      if ( v8 >> 1 >= v55 )
      {
        v43 = v39;
        if ( v8 >> 1 <= v39 )
          v43 = v8 >> 1;
      }
      v16 = *(_BYTE *)(v43 + v3);
      goto LABEL_90;
    }
    v44 = v66;
    if ( v5 < v66 )
    {
      if ( v8 >= v11 && v8 < v6 && (v8 & 1) != 0 )
      {
        v16 ^= (v16 ^ *(_BYTE *)(v15 + v3)) & 0xF;
        *(_BYTE *)(v15 + v3) = v16;
      }
      else
      {
        if ( !v57 || v8 < v6 )
          goto LABEL_72;
        v16 ^= (*(_BYTE *)(v67 + v3) ^ v16) & 0xF;
        *(_BYTE *)(v67 + v3) = v16;
      }
      v44 = v66;
      v11 = v65;
    }
LABEL_72:
    --v5;
    v3 += v60;
    v8 = v62;
    if ( v19 <= v61 )
    {
      *((_DWORD *)v1 + 34) = v62;
      goto LABEL_95;
    }
    if ( v5 < v44 )
      v16 = *(_BYTE *)(v55 + v3);
    goto LABEL_92;
  }
  return 0LL;
}
