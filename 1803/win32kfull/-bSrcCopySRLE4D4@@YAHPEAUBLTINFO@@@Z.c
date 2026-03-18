/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C029C4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r15d
  int v3; // r8d
  char *v4; // r9
  __int64 v5; // rbx
  int v6; // esi
  int v7; // r13d
  int v8; // r12d
  int v9; // edx
  unsigned int v10; // r14d
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdi
  char v15; // r8
  unsigned int v16; // esi
  unsigned int v17; // ecx
  int v18; // ebp
  unsigned __int8 *v19; // r9
  unsigned __int64 v20; // r14
  unsigned int v21; // esi
  BOOL v22; // ebp
  unsigned int v23; // ecx
  char v24; // al
  char v25; // cl
  unsigned int v26; // ebp
  unsigned int v27; // r15d
  int v28; // r14d
  unsigned int v29; // eax
  char v30; // r14
  __int64 v31; // rdi
  unsigned int v32; // r15d
  unsigned int v33; // eax
  char v34; // dl
  unsigned __int64 v35; // rcx
  unsigned int j; // r15d
  unsigned __int64 v37; // rax
  unsigned int v38; // edi
  int v39; // eax
  unsigned __int8 *v40; // r9
  int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  __int64 v46; // r15
  unsigned int v47; // ebp
  char v48; // di
  char v49; // r14
  char v50; // al
  char v51; // di
  unsigned int v52; // edx
  unsigned int i; // ebp
  int v54; // [rsp+0h] [rbp-78h]
  int v55; // [rsp+0h] [rbp-78h]
  unsigned int v56; // [rsp+4h] [rbp-74h]
  __int64 v57; // [rsp+8h] [rbp-70h]
  int v58; // [rsp+10h] [rbp-68h]
  int v59; // [rsp+14h] [rbp-64h]
  int v60; // [rsp+18h] [rbp-60h]
  BOOL v61; // [rsp+1Ch] [rbp-5Ch]
  int v62; // [rsp+20h] [rbp-58h]
  int v64; // [rsp+88h] [rbp+10h]
  unsigned int v65; // [rsp+90h] [rbp+18h]
  unsigned int v66; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a1 + 25);
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 15);
  v9 = *((_DWORD *)a1 + 32);
  v58 = *((_DWORD *)a1 + 11);
  v60 = v2;
  v64 = v3;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v56 = v10;
  v57 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v62 = *((_DWORD *)a1 + 14);
  v59 = *((_DWORD *)a1 + 23);
  if ( v8 < v59 )
    return 1LL;
  v12 = (unsigned int)v2 >> 1;
  v13 = (unsigned int)(v7 - 1) >> 1;
  v66 = (unsigned int)v2 >> 1;
  v65 = v13;
  v14 = (unsigned int)(v9 >> 1);
  if ( v8 >= v3 )
  {
    v15 = (char)a1;
  }
  else
  {
    if ( (unsigned int)v14 >= (unsigned int)v12 )
    {
      v12 = v13;
      if ( (unsigned int)v14 <= v13 )
        v12 = (unsigned int)v14;
    }
    v15 = *(_BYTE *)(v12 + v5);
  }
  v16 = v6 + 2;
  if ( v16 <= v10 )
  {
    while ( 1 )
    {
      v17 = (unsigned __int8)*v4;
      v18 = v9;
      v19 = (unsigned __int8 *)(v4 + 1);
      v20 = *v19;
      v4 = (char *)(v19 + 1);
      if ( v17 )
      {
        if ( v8 >= v64 || v9 >= v7 || (int)(v17 + v9) <= v2 )
        {
          v9 += v17;
        }
        else
        {
          if ( v9 < v2 )
          {
            v45 = v2 - v9;
            v9 = v2;
            v17 -= v45;
          }
          v46 = v66;
          if ( v18 >= v60 )
            v46 = (unsigned int)v14;
          if ( (int)(v17 + v9) <= v7 )
            v55 = 0;
          else
            v55 = v9 + v17 - v7;
          v47 = v7 - v9;
          if ( (int)(v17 + v9) <= v7 )
            v47 = v17;
          v48 = *(_BYTE *)(v57 + 4 * (v20 >> 4));
          v49 = *(_BYTE *)(v57 + 4 * (v20 & 0xF));
          if ( (v9 & 1) != 0 )
          {
            ++v9;
            v50 = v49 ^ v48;
            *(_BYTE *)(v46 + v5) = v15 ^ (v15 ^ v48) & 0xF;
            v46 = (unsigned int)(v46 + 1);
            v49 = v48;
            --v47;
            v48 ^= v50;
          }
          v51 = 16 * v48;
          v52 = v47 + v9;
          v15 = v51 | v49 & 0xF;
          for ( i = v47 >> 1; i; --i )
          {
            *(_BYTE *)(v46 + v5) = v15;
            v46 = (unsigned int)(v46 + 1);
          }
          if ( (v52 & 1) != 0 )
            v15 = v51 | v51 & 0xF | v49 & 0xF;
          v9 = v55 + v52;
        }
        goto LABEL_97;
      }
      if ( (_DWORD)v20 )
      {
        if ( (_DWORD)v20 == 1 )
        {
          if ( v8 < v64 )
          {
            if ( v9 >= v2 && v9 < v7 && (v9 & 1) != 0 )
            {
              *(_BYTE *)(v14 + v5) = v15 ^ (v15 ^ *(_BYTE *)(v14 + v5)) & 0xF;
            }
            else if ( (v7 & 1) != 0 && v9 >= v7 )
            {
              *(_BYTE *)(v65 + v5) = v15 ^ (v15 ^ *(_BYTE *)(v65 + v5)) & 0xF;
            }
          }
          return 0LL;
        }
        if ( (_DWORD)v20 != 2 )
        {
          v21 = ((unsigned int)(v20 + 1) >> 1) + v16;
          if ( v21 > v56 )
            return 0LL;
          v22 = (((_DWORD)v20 + 1) & 2) != 0;
          v61 = v22;
          if ( v8 >= v64 || v9 >= v7 || (int)v20 + v9 <= v2 )
          {
            v9 += v20;
            v4 += (unsigned __int64)(unsigned int)(v20 + 1) >> 1;
          }
          else
          {
            if ( v9 < v2 )
            {
              v14 = v66;
              v23 = v2 - v9;
              v9 = v2;
              LODWORD(v20) = v20 - v23;
              v4 += (unsigned __int64)v23 >> 1;
              if ( (v23 & 1) != 0 )
              {
                v24 = *v4++;
                v25 = *(_BYTE *)(v57 + 4LL * (v24 & 0xF));
                if ( (v2 & 1) != 0 )
                {
                  v15 ^= (v15 ^ v25) & 0xF;
                  *(_BYTE *)(v66 + v5) = v15;
                  v14 = v66 + 1;
                }
                else
                {
                  v15 = v15 & 0xF | (16 * v25);
                }
                v9 = v2 + 1;
                LODWORD(v20) = v20 - 1;
                if ( !(_DWORD)v20 )
                  goto LABEL_24;
              }
            }
            if ( (int)v20 + v9 <= v7 )
              v26 = 0;
            else
              v26 = v9 + v20 - v7;
            v27 = v7 - v9;
            if ( (int)v20 + v9 <= v7 )
              v27 = v20;
            if ( v27 )
            {
              v28 = v27 + v9;
              v54 = v27 + v9;
              if ( (v9 & 1) != 0 )
              {
                v29 = (unsigned __int8)*v4++;
                v30 = *(_BYTE *)(v57 + 4LL * (v29 & 0xF));
                v15 ^= (v15 ^ *(_BYTE *)(v57 + 4 * ((unsigned __int64)v29 >> 4))) & 0xF;
                *(_BYTE *)(v14 + v5) = v15;
                v31 = (unsigned int)(v14 + 1);
                v32 = (v27 - 1) >> 1;
                if ( v32 )
                {
                  do
                  {
                    v33 = (unsigned __int8)*v4++;
                    v34 = 16 * v30;
                    v30 = *(_BYTE *)(v57 + 4LL * (v33 & 0xF));
                    v15 = v34 | *(_BYTE *)(v57 + 4 * ((unsigned __int64)v33 >> 4)) & 0xF;
                    *(_BYTE *)(v31 + v5) = v15;
                    v31 = (unsigned int)(v31 + 1);
                    --v32;
                  }
                  while ( v32 );
                  v1 = a1;
                }
                if ( (v54 & 1) != 0 )
                {
                  v35 = v26 + 1;
                  v15 = v15 & 0xF | (16 * v30);
                }
                else
                {
                  v35 = v26;
                }
                v28 = v54;
LABEL_44:
                v4 += v35 >> 1;
              }
              else
              {
                for ( j = v27 >> 1; j; --j )
                {
                  v37 = (unsigned __int8)*v4++;
                  v15 = *(_BYTE *)(v57 + 4 * (v37 & 0xF)) & 0xF | (16 * *(_BYTE *)(v57 + 4 * (v37 >> 4)));
                  *(_BYTE *)(v14 + v5) = v15;
                  v14 = (unsigned int)(v14 + 1);
                }
                if ( (v28 & 1) == 0 )
                {
                  v35 = v26 + 1;
                  goto LABEL_44;
                }
                v15 = v15 & 0xF | (16 * *(_BYTE *)(v57 + 4 * ((unsigned __int64)(unsigned __int8)*v4 >> 4)));
                v4 += ((unsigned __int64)v26 >> 1) + 1;
              }
              v9 = v28;
            }
            else
            {
              v4 += (unsigned __int64)(v26 + 1) >> 1;
            }
            v9 += v26;
            v22 = v61;
          }
LABEL_24:
          v16 = v22 + v21;
          v4 += v22;
          goto LABEL_97;
        }
        if ( v8 >= v64 )
          goto LABEL_54;
        if ( v9 >= v2 && v9 < v7 && (v9 & 1) != 0 )
        {
          *(_BYTE *)(v14 + v5) = v15 ^ (v15 ^ *(_BYTE *)(v14 + v5)) & 0xF;
          goto LABEL_54;
        }
        if ( (v7 & 1) != 0 && v9 >= v7 )
        {
          v38 = (unsigned int)(v7 - 1) >> 1;
          *(_BYTE *)(v65 + v5) = v15 ^ (v15 ^ *(_BYTE *)(v65 + v5)) & 0xF;
        }
        else
        {
LABEL_54:
          v38 = (unsigned int)(v7 - 1) >> 1;
        }
        v16 += 2;
        if ( v16 > v56 )
          return 0LL;
        v39 = (unsigned __int8)*v4;
        v40 = (unsigned __int8 *)(v4 + 1);
        v9 += v39;
        v41 = *v40;
        v4 = (char *)(v40 + 1);
        v8 -= v41;
        v5 += v58 * v41;
        if ( v8 < v59 )
        {
          *((_DWORD *)v1 + 34) = v9;
LABEL_110:
          result = 1LL;
          *((_DWORD *)v1 + 33) = v8;
          *((_QWORD *)v1 + 14) = v5;
          *((_QWORD *)v1 + 13) = v4;
          *((_DWORD *)v1 + 31) = v16;
          return result;
        }
        v42 = v66;
        if ( v9 >> 1 >= v66 )
        {
          v42 = v38;
          if ( v9 >> 1 <= v38 )
            v42 = v9 >> 1;
        }
        v43 = v42;
        goto LABEL_76;
      }
      v44 = v64;
      if ( v8 < v64 )
      {
        if ( v9 >= v2 && v9 < v7 && (v9 & 1) != 0 )
        {
          v15 ^= (v15 ^ *(_BYTE *)(v14 + v5)) & 0xF;
          *(_BYTE *)(v14 + v5) = v15;
LABEL_72:
          v44 = v64;
          goto LABEL_73;
        }
        if ( (v7 & 1) != 0 && v9 >= v7 )
        {
          v15 ^= (v15 ^ *(_BYTE *)(v65 + v5)) & 0xF;
          *(_BYTE *)(v65 + v5) = v15;
          goto LABEL_72;
        }
      }
LABEL_73:
      --v8;
      v5 += v58;
      v9 = v62;
      if ( v8 < v59 )
      {
        *((_DWORD *)v1 + 34) = v62;
        goto LABEL_110;
      }
      if ( v8 < v44 )
      {
        v43 = v66;
LABEL_76:
        v15 = *(_BYTE *)(v43 + v5);
      }
LABEL_97:
      v16 += 2;
      v14 = (unsigned int)(v9 >> 1);
      if ( v16 > v56 )
        return 0LL;
      v2 = v60;
    }
  }
  return 0LL;
}
