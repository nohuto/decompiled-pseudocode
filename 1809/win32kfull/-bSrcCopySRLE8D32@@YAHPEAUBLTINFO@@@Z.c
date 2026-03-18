/*
 * XREFs of ?bSrcCopySRLE8D32@@YAHPEAUBLTINFO@@@Z @ 0x1C00025E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D32(struct BLTINFO *a1)
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
  unsigned int v12; // r11d
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  int v16; // ebp
  int v17; // ebx
  __int64 v18; // rax
  _DWORD *v19; // rdi
  unsigned int v21; // r11d
  int v22; // ebp
  unsigned int v23; // ecx
  int v24; // edi
  __int64 v25; // rax
  _DWORD *v26; // rbx
  __int64 v27; // rax
  unsigned __int8 *v28; // r10
  int v29; // ecx
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
  v33 = *((_DWORD *)a1 + 11) / 4;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v35 = v11;
  v34 = v4;
  v30 = v6;
  if ( v5 < v4 )
    return 1LL;
  v12 = *((_DWORD *)a1 + 30) + 2;
  if ( v12 > v7 )
    return 0LL;
  while ( 1 )
  {
    v13 = *v2;
    v14 = v5;
    v15 = v2[1];
    v2 += 2;
    if ( (_DWORD)v13 )
    {
      if ( v5 < v11 && v10 < v9 && (int)v13 + v10 > v8 )
      {
        v16 = *(_DWORD *)(v31 + 4LL * (unsigned int)v15);
        if ( v10 < v8 )
        {
          v13 = (unsigned int)(v10 - v8 + v13);
          v10 = v8;
        }
        if ( (int)v13 + v10 > v9 )
        {
          v17 = v10 + v13 - v9;
          v13 = (unsigned int)(v9 - v10);
        }
        else
        {
          v17 = 0;
        }
        if ( (_DWORD)v13 )
        {
          v18 = v10;
          v10 += v13;
          v19 = (_DWORD *)(v3 + 4 * v18);
          while ( v13 )
          {
            *v19++ = v16;
            --v13;
          }
        }
        v10 += v17;
LABEL_16:
        v4 = v34;
        goto LABEL_17;
      }
      v10 += v13;
      goto LABEL_17;
    }
    if ( !(_DWORD)v15 )
    {
      --v5;
      v10 = v6;
      v3 += 4LL * v33;
      if ( v14 <= v4 )
      {
        *((_DWORD *)v1 + 34) = v6;
        goto LABEL_26;
      }
      goto LABEL_17;
    }
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v21 = v15 + v12;
      if ( v21 > v7 )
        return 0LL;
      v22 = v15 & 1;
      if ( v5 >= v35 || v10 >= v9 || (int)v15 + v10 <= v8 )
      {
        v10 += v15;
        v28 = &v2[v15];
      }
      else
      {
        if ( v10 < v8 )
        {
          v23 = v8 - v10;
          v10 = v8;
          v2 += v23;
          LODWORD(v15) = v15 - v23;
        }
        if ( (int)v15 + v10 <= v9 )
        {
          v24 = 0;
        }
        else
        {
          v24 = v10 + v15 - v9;
          LODWORD(v15) = v9 - v10;
        }
        if ( (_DWORD)v15 )
        {
          v25 = v10;
          v10 += v15;
          v26 = (_DWORD *)(v3 + 4 * v25);
          do
          {
            v27 = *v2++;
            *v26++ = *(_DWORD *)(v31 + 4 * v27);
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
          v1 = a1;
        }
        v10 += v24;
        v28 = &v2[v24];
      }
      v12 = v22 + v21;
      v2 = &v28[v22];
      goto LABEL_16;
    }
    v12 += 2;
    if ( v12 > v7 )
      return 0LL;
    v29 = v2[1];
    v10 += *v2;
    v2 += 2;
    v5 -= v29;
    v3 += 4LL * v33 * v29;
    if ( v5 < v4 )
      break;
LABEL_17:
    v12 += 2;
    if ( v12 > v7 )
      return 0LL;
    v6 = v30;
    v11 = v35;
  }
  *((_DWORD *)v1 + 34) = v10;
LABEL_26:
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v12;
  *((_DWORD *)v1 + 33) = v5;
  return 1LL;
}
