/*
 * XREFs of ?bSrcCopySRLE8D24@@YAHPEAUBLTINFO@@@Z @ 0x1C02AE490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r15d
  int v3; // ebp
  int v4; // r8d
  int v5; // r13d
  int v6; // r12d
  unsigned __int8 *v7; // r11
  __int64 v8; // r14
  int v9; // r9d
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rdi
  unsigned int v17; // ebx
  int v18; // r15d
  unsigned int v19; // ecx
  __int64 v20; // r12
  int v21; // esi
  __int64 v22; // r13
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int8 *v26; // r11
  int v27; // ecx
  int v28; // r12d
  int v29; // r8d
  int v30; // edi
  int v31; // r9d
  __int64 v32; // rdi
  int v33; // [rsp+0h] [rbp-68h]
  int v34; // [rsp+4h] [rbp-64h]
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  __int64 v37; // [rsp+10h] [rbp-58h]
  int v39; // [rsp+78h] [rbp+10h]
  unsigned int v40; // [rsp+80h] [rbp+18h]
  int v41; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 15);
  v4 = *((_DWORD *)a1 + 22);
  v5 = *((_DWORD *)a1 + 24);
  v6 = *((_DWORD *)a1 + 14);
  v7 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a1 + 32);
  v39 = *((_DWORD *)a1 + 11);
  v34 = v4;
  v33 = v5;
  v35 = v2;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v40 = v10;
  v36 = v6;
  v37 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v41 = v11;
  if ( v3 < v2 )
    return 1LL;
  v13 = *((_DWORD *)a1 + 30) + 2;
  if ( v13 > v10 )
    return 0LL;
  while ( 1 )
  {
    v14 = *v7;
    v15 = v3;
    v16 = v7[1];
    v7 += 2;
    if ( v14 )
    {
      if ( v3 >= v11 || v9 >= v5 || v14 + v9 <= v4 )
      {
        v9 += v14;
      }
      else
      {
        v28 = *(_DWORD *)(v37 + 4 * v16);
        if ( v9 < v4 )
        {
          v14 += v9 - v4;
          v9 = v4;
        }
        if ( v14 + v9 <= v5 )
        {
          v29 = 0;
        }
        else
        {
          v29 = v9 + v14 - v5;
          v14 = v5 - v9;
        }
        v30 = 3 * v9;
        v31 = v14 + v9;
        if ( v14 )
        {
          v32 = (unsigned int)(v30 + 2);
          do
          {
            *(_BYTE *)(v32 + v8) = BYTE2(v28);
            *(_BYTE *)((unsigned int)(v32 - 2) + v8) = v28;
            *(_BYTE *)((unsigned int)(v32 - 1) + v8) = BYTE1(v28);
            v32 = (unsigned int)(v32 + 3);
            --v14;
          }
          while ( v14 );
          v10 = v40;
        }
        v9 = v29 + v31;
      }
      goto LABEL_44;
    }
    if ( !(_DWORD)v16 )
      break;
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 == 2 )
    {
      v13 += 2;
      if ( v13 > v10 )
        return 0LL;
      v27 = v7[1];
      v9 += *v7;
      v7 += 2;
      v3 -= v27;
      v8 += v39 * v27;
      if ( v3 < v2 )
      {
        *((_DWORD *)v1 + 34) = v9;
        goto LABEL_27;
      }
    }
    else
    {
      v17 = v16 + v13;
      if ( v17 > v10 )
        return 0LL;
      v18 = v16 & 1;
      if ( v3 >= v41 || v9 >= v5 || (int)v16 + v9 <= v4 )
      {
        v9 += v16;
        v26 = &v7[v16];
      }
      else
      {
        if ( v9 < v4 )
        {
          v19 = v4 - v9;
          v9 = v4;
          v7 += v19;
          LODWORD(v16) = v16 - v19;
        }
        v20 = (unsigned int)(3 * v9);
        if ( (int)v16 + v9 <= v5 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v9 + v16 - v5;
          LODWORD(v16) = v5 - v9;
        }
        if ( (_DWORD)v16 )
        {
          v22 = (unsigned int)(v20 + 2);
          v9 += v16;
          do
          {
            v23 = *v7++;
            v24 = *(_DWORD *)(v37 + 4 * v23);
            *(_BYTE *)(v20 + v8) = v24;
            v25 = (unsigned int)(v22 - 1);
            v20 = (unsigned int)(v20 + 3);
            *(_BYTE *)(v22 + v8) = BYTE2(v24);
            v22 = (unsigned int)(v22 + 3);
            *(_BYTE *)(v25 + v8) = BYTE1(v24);
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
          v1 = a1;
          v5 = v33;
        }
        v26 = &v7[v21];
        v9 += v21;
        v10 = v40;
      }
      v13 = v18 + v17;
      v7 = &v26[v18];
    }
LABEL_44:
    v13 += 2;
    if ( v13 > v10 )
      return 0LL;
    v4 = v34;
    v2 = v35;
    v6 = v36;
    v11 = v41;
  }
  --v3;
  v8 += v39;
  v9 = v6;
  if ( v15 > v2 )
    goto LABEL_44;
  *((_DWORD *)v1 + 34) = v6;
LABEL_27:
  *((_QWORD *)v1 + 14) = v8;
  *((_QWORD *)v1 + 13) = v7;
  *((_DWORD *)v1 + 31) = v13;
  *((_DWORD *)v1 + 33) = v3;
  return 1LL;
}
