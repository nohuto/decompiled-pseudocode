/*
 * XREFs of ?bSrcCopySRLE8D16@@YAHPEAUBLTINFO@@@Z @ 0x1C02C4600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D16(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r10
  __int64 v3; // r14
  int v4; // ebp
  int v5; // esi
  int v6; // ebx
  unsigned int v7; // r13d
  int v8; // r15d
  int v9; // r12d
  int v10; // r8d
  int v11; // eax
  unsigned int v13; // r11d
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  unsigned int v17; // r11d
  int v18; // ebp
  unsigned int v19; // ecx
  int v20; // edi
  __int64 v21; // rax
  _WORD *v22; // rbx
  __int64 v23; // rax
  unsigned __int8 *v24; // r10
  int v25; // ecx
  int v26; // ebp
  int v27; // ebx
  __int64 v28; // rax
  _WORD *v29; // rdi
  int v30; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+8h] [rbp-50h]
  int v33; // [rsp+68h] [rbp+10h]
  int v34; // [rsp+70h] [rbp+18h]
  int v35; // [rsp+78h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 23);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 14);
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v8 = *((_DWORD *)a1 + 22);
  v9 = *((_DWORD *)a1 + 24);
  v10 = *((_DWORD *)a1 + 32);
  v33 = *((_DWORD *)a1 + 11) / 2;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v35 = v11;
  v34 = v4;
  v30 = v6;
  if ( v5 < v4 )
    return 1LL;
  v13 = *((_DWORD *)a1 + 30) + 2;
  if ( v13 > v7 )
    return 0LL;
  while ( 1 )
  {
    v14 = *v2;
    v15 = v5;
    v16 = v2[1];
    v2 += 2;
    if ( !(_DWORD)v14 )
      break;
    if ( v5 < v11 && v10 < v9 && (int)v14 + v10 > v8 )
    {
      v26 = *(_DWORD *)(v31 + 4 * v16);
      if ( v10 < v8 )
      {
        v14 = (unsigned int)(v10 - v8 + v14);
        v10 = v8;
      }
      if ( (int)v14 + v10 <= v9 )
      {
        v27 = 0;
      }
      else
      {
        v27 = v10 + v14 - v9;
        v14 = (unsigned int)(v9 - v10);
      }
      if ( (_DWORD)v14 )
      {
        v28 = v10;
        v10 += v14;
        v29 = (_WORD *)(v3 + 2 * v28);
        while ( v14 )
        {
          *v29++ = v26;
          --v14;
        }
      }
      v10 += v27;
LABEL_43:
      v4 = v34;
      goto LABEL_45;
    }
    v10 += v14;
LABEL_45:
    v13 += 2;
    if ( v13 > v7 )
      return 0LL;
    v6 = v30;
    v11 = v35;
  }
  if ( (_DWORD)v16 )
  {
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 != 2 )
    {
      v17 = v16 + v13;
      if ( v17 > v7 )
        return 0LL;
      v18 = v16 & 1;
      if ( v5 >= v35 || v10 >= v9 || (int)v16 + v10 <= v8 )
      {
        v10 += v16;
        v24 = &v2[v16];
      }
      else
      {
        if ( v10 < v8 )
        {
          v19 = v8 - v10;
          v10 = v8;
          v2 += v19;
          LODWORD(v16) = v16 - v19;
        }
        if ( (int)v16 + v10 <= v9 )
        {
          v20 = 0;
        }
        else
        {
          v20 = v10 + v16 - v9;
          LODWORD(v16) = v9 - v10;
        }
        if ( (_DWORD)v16 )
        {
          v21 = v10;
          v10 += v16;
          v22 = (_WORD *)(v3 + 2 * v21);
          do
          {
            v23 = *v2++;
            *v22++ = *(_WORD *)(v31 + 4 * v23);
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
          v1 = a1;
        }
        v24 = &v2[v20];
        v10 += v20;
      }
      v13 = v18 + v17;
      v2 = &v24[v18];
      goto LABEL_43;
    }
    v13 += 2;
    if ( v13 > v7 )
      return 0LL;
    v25 = v2[1];
    v10 += *v2;
    v2 += 2;
    v5 -= v25;
    v3 += 2LL * v33 * v25;
    if ( v5 < v4 )
    {
      *((_DWORD *)v1 + 34) = v10;
      goto LABEL_27;
    }
    goto LABEL_45;
  }
  --v5;
  v10 = v6;
  v3 += 2LL * v33;
  if ( v15 > v4 )
    goto LABEL_45;
  *((_DWORD *)v1 + 34) = v6;
LABEL_27:
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v13;
  *((_DWORD *)v1 + 33) = v5;
  return 1LL;
}
