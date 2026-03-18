/*
 * XREFs of ?bSrcCopySRLE8D16@@YAHPEAUBLTINFO@@@Z @ 0x1C0299F80
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
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // edi
  unsigned int v8; // r13d
  int v9; // r15d
  int v10; // r12d
  int v11; // r8d
  int v12; // eax
  __int64 result; // rax
  unsigned int v14; // r11d
  __int64 v15; // rcx
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
  v5 = *((_DWORD *)a1 + 11) / 2;
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 14);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *((_DWORD *)a1 + 22);
  v10 = *((_DWORD *)a1 + 24);
  v11 = *((_DWORD *)a1 + 32);
  v34 = v5;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v12 = *((_DWORD *)a1 + 25);
  v35 = v12;
  v30 = v4;
  v33 = v7;
  if ( v6 < v4 )
    return 1LL;
  v14 = *((_DWORD *)a1 + 30) + 2;
  if ( v14 > v8 )
    return 0LL;
  while ( 1 )
  {
    v15 = *v2;
    v16 = v2[1];
    v2 += 2;
    if ( !(_DWORD)v15 )
      break;
    if ( v6 < v12 && v11 < v10 && (int)v15 + v11 > v9 )
    {
      v26 = *(_DWORD *)(v31 + 4 * v16);
      if ( v11 < v9 )
      {
        v15 = (unsigned int)(v11 - v9 + v15);
        v11 = v9;
      }
      if ( (int)v15 + v11 <= v10 )
      {
        v27 = 0;
      }
      else
      {
        v27 = v11 + v15 - v10;
        v15 = (unsigned int)(v10 - v11);
      }
      if ( (_DWORD)v15 )
      {
        v28 = v11;
        v11 += v15;
        v29 = (_WORD *)(v3 + 2 * v28);
        while ( v15 )
        {
          *v29++ = v26;
          --v15;
        }
        v7 = v33;
      }
      v11 += v27;
LABEL_44:
      v5 = v34;
      goto LABEL_46;
    }
    v11 += v15;
LABEL_46:
    v14 += 2;
    if ( v14 > v8 )
      return 0LL;
    v4 = v30;
    v12 = v35;
  }
  if ( (_DWORD)v16 )
  {
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 != 2 )
    {
      v17 = v16 + v14;
      if ( v17 > v8 )
        return 0LL;
      v18 = v16 & 1;
      if ( v6 >= v35 || v11 >= v10 || (int)v16 + v11 <= v9 )
      {
        v11 += v16;
        v24 = &v2[v16];
      }
      else
      {
        if ( v11 < v9 )
        {
          v19 = v9 - v11;
          v11 = v9;
          v2 += v19;
          LODWORD(v16) = v16 - v19;
        }
        if ( (int)v16 + v11 <= v10 )
        {
          v20 = 0;
        }
        else
        {
          v20 = v11 + v16 - v10;
          LODWORD(v16) = v10 - v11;
        }
        if ( (_DWORD)v16 )
        {
          v21 = v11;
          v11 += v16;
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
        v11 += v20;
        v7 = v33;
      }
      v14 = v18 + v17;
      v2 = &v24[v18];
      goto LABEL_44;
    }
    v14 += 2;
    if ( v14 > v8 )
      return 0LL;
    v25 = v2[1];
    v11 += *v2;
    v2 += 2;
    v6 -= v25;
    v3 += 2LL * v5 * v25;
    if ( v6 < v4 )
    {
      *((_DWORD *)v1 + 34) = v11;
      goto LABEL_29;
    }
    goto LABEL_46;
  }
  --v6;
  v11 = v7;
  v3 += 2LL * v5;
  if ( v6 >= v4 )
    goto LABEL_46;
  *((_DWORD *)v1 + 34) = v7;
LABEL_29:
  result = 1LL;
  *((_DWORD *)v1 + 33) = v6;
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v14;
  return result;
}
