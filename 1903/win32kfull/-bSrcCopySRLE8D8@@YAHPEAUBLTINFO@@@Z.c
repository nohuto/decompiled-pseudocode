/*
 * XREFs of ?bSrcCopySRLE8D8@@YAHPEAUBLTINFO@@@Z @ 0x1C0148710
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D8(struct BLTINFO *a1)
{
  int v2; // r10d
  int v3; // r12d
  int v4; // r9d
  int v5; // r11d
  int v6; // r15d
  unsigned __int8 *v7; // rbp
  __int64 v8; // r13
  int v9; // esi
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // r14d
  size_t v13; // r8
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r15d
  int v18; // ebx
  unsigned int v19; // r14d
  int v20; // r10d
  int v21; // r8d
  _BYTE *v22; // r9
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  unsigned int v26; // ecx
  int v27; // ecx
  int v28; // [rsp+20h] [rbp-68h]
  unsigned int v29; // [rsp+24h] [rbp-64h]
  int v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 15);
  v4 = *((_DWORD *)a1 + 22);
  v5 = *((_DWORD *)a1 + 24);
  v6 = *((_DWORD *)a1 + 14);
  v7 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a1 + 32);
  v32 = *((_DWORD *)a1 + 11);
  v33 = v4;
  v28 = v5;
  v30 = v2;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v29 = v10;
  v34 = v6;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v35 = v11;
  if ( v3 < v2 )
    return 1LL;
  v12 = *((_DWORD *)a1 + 30) + 2;
  if ( v12 > v10 )
    return 0LL;
  while ( 1 )
  {
    v13 = *v7;
    v14 = v3;
    v15 = v7[1];
    v7 += 2;
    if ( (_DWORD)v13 )
    {
      if ( v9 >= v5 || v3 >= v11 || (int)v13 + v9 <= v4 )
      {
        v9 += v13;
      }
      else
      {
        v16 = *(_DWORD *)(v31 + 4 * v15);
        if ( v9 < v4 )
        {
          v13 = (unsigned int)(v9 - v4 + v13);
          v9 = v4;
        }
        if ( (int)v13 + v9 > v5 )
        {
          v17 = v9 + v13 - v5;
          v13 = (unsigned int)(v5 - v9);
        }
        else
        {
          v17 = 0;
        }
        if ( (_DWORD)v13 )
        {
          v18 = v13;
          memset((void *)(v8 + v9), v16, v13);
          v4 = v33;
          v9 += v18;
          v10 = v29;
          v5 = v28;
        }
        v9 += v17;
        v6 = v34;
      }
      goto LABEL_14;
    }
    if ( !(_DWORD)v15 )
    {
      --v3;
      v8 += v32;
      v9 = v6;
      if ( v14 <= v2 )
      {
        *((_DWORD *)a1 + 34) = v6;
        goto LABEL_39;
      }
      goto LABEL_14;
    }
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v19 = v15 + v12;
      if ( v19 > v10 )
        return 0LL;
      v20 = v15 & 1;
      if ( v3 >= v35 || v9 >= v5 || (int)v15 + v9 <= v4 )
      {
        v9 += v15;
        v24 = &v7[v15];
      }
      else
      {
        if ( v9 < v4 )
        {
          v26 = v4 - v9;
          v9 = v4;
          v7 += v26;
          LODWORD(v15) = v15 - v26;
        }
        if ( (int)v15 + v9 > v5 )
        {
          v21 = v9 + v15 - v5;
          LODWORD(v15) = v5 - v9;
        }
        else
        {
          v21 = 0;
        }
        if ( (_DWORD)v15 )
        {
          v22 = (_BYTE *)(v8 + v9);
          v9 += v15;
          do
          {
            v23 = *v7++;
            *v22++ = *(_BYTE *)(v31 + 4 * v23);
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
          v4 = v33;
          v6 = v34;
        }
        v24 = &v7[v21];
        v9 += v21;
      }
      v12 = v20 + v19;
      v7 = &v24[v20];
      goto LABEL_14;
    }
    v12 += 2;
    if ( v12 > v10 )
      return 0LL;
    v27 = v7[1];
    v9 += *v7;
    v7 += 2;
    v3 -= v27;
    v8 += v32 * v27;
    if ( v3 < v2 )
      break;
LABEL_14:
    v12 += 2;
    if ( v12 > v10 )
      return 0LL;
    v2 = v30;
    v11 = v35;
  }
  *((_DWORD *)a1 + 34) = v9;
LABEL_39:
  *((_QWORD *)a1 + 14) = v8;
  *((_QWORD *)a1 + 13) = v7;
  *((_DWORD *)a1 + 31) = v12;
  *((_DWORD *)a1 + 33) = v3;
  return 1LL;
}
