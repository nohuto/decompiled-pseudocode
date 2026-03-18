/*
 * XREFs of vDirectStretch8 @ 0x1C02D01B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vDirectStretch8(__int64 a1)
{
  int v2; // r12d
  int *v3; // r10
  int v4; // edx
  unsigned __int8 *v5; // rsi
  int v6; // r13d
  int v7; // ecx
  __int64 v8; // r9
  int v9; // r8d
  int v10; // r14d
  unsigned int v11; // r15d
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned __int8 *v19; // r11
  bool v20; // cf
  int *v21; // r12
  int v22; // r9d
  unsigned int v23; // eax
  unsigned __int8 *v24; // r11
  int v25; // r8d
  unsigned __int8 *v26; // r11
  int v27; // edx
  unsigned __int8 *v28; // r11
  int v29; // eax
  bool v30; // zf
  __int64 v32; // [rsp+0h] [rbp-68h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  int v34; // [rsp+70h] [rbp+8h]
  int v35; // [rsp+78h] [rbp+10h]
  int v36; // [rsp+88h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 36);
  v3 = (int *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 28));
  v4 = 0;
  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v6 = (*(_BYTE *)(a1 + 16) + (unsigned __int8)*(_DWORD *)(a1 + 28)) & 3;
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  LODWORD(v8) = *(_DWORD *)(a1 + 24) - v7;
  v9 = *(_DWORD *)(a1 + 48);
  v10 = *(_DWORD *)(a1 + 44);
  v11 = *(_DWORD *)(a1 + 60);
  v35 = *(_DWORD *)(a1 + 52);
  v34 = v2;
  LODWORD(v12) = -v6 & 3;
  v36 = ((_BYTE)v3 + (_BYTE)v7) & 3;
  v13 = v7 - v12 - v36;
  if ( v2 > 0 )
  {
    if ( v9 )
      v4 = v9 * *(_DWORD *)(a1 + 8);
    v14 = v13;
    v15 = *(unsigned int *)(a1 + 40);
    v16 = v4;
    v8 = (int)v8;
    v32 = v4;
    v33 = (int)v8;
    while ( 1 )
    {
      v17 = *(_DWORD *)(a1 + 56);
      v18 = v11 + v35;
      v19 = v5;
      if ( v6 == 1 )
        break;
      if ( v6 == 2 )
        goto LABEL_10;
      if ( v6 == 3 )
        goto LABEL_11;
LABEL_12:
      v21 = (int *)((char *)v3 + v14);
      if ( v3 != v21 )
      {
        do
        {
          v22 = *v19;
          v23 = v17 + v10 + v10;
          v24 = &v19[(v17 + v10 < v17) + v15];
          v20 = v23 < v17 + v10;
          v17 = v23 + v10 + v10;
          v25 = *v24;
          v26 = &v24[v20 + v15];
          v27 = *v26;
          v28 = &v26[(v23 + v10 < v23) + v15];
          v20 = v17 < v23 + v10;
          v29 = *v28;
          v19 = &v28[v20 + v15];
          *v3++ = v22 | ((v25 | ((v27 | (v29 << 8)) << 8)) << 8);
        }
        while ( v3 != v21 );
        v18 = v11 + v35;
        v16 = v32;
        v8 = v33;
      }
      if ( v36 == 1 )
        goto LABEL_20;
      LOBYTE(v12) = v36 - 2;
      if ( v36 == 2 )
        goto LABEL_19;
      if ( v36 == 3 )
      {
        v20 = v17 + v10 < v17;
        *(_BYTE *)v3 = *v19;
        v17 += v10;
        v19 += v15 + v20;
        v3 = (int *)((char *)v3 + 1);
LABEL_19:
        *(_BYTE *)v3 = *v19;
        v19 += v15 + (v17 + v10 < v17);
        v3 = (int *)((char *)v3 + 1);
LABEL_20:
        LOBYTE(v12) = *v19;
        *(_BYTE *)v3 = *v19;
        v3 = (int *)((char *)v3 + 1);
      }
      v5 += v16;
      if ( v18 < v11 )
      {
        v12 = *(int *)(a1 + 8);
        v5 += v12;
      }
      v14 = v13;
      v3 = (int *)((char *)v3 + v8);
      v30 = v34-- == 1;
      v11 = v18;
      if ( v30 )
        return v12;
    }
    v20 = v17 + v10 < v17;
    *(_BYTE *)v3 = *v5;
    v17 += v10;
    v19 = &v5[v20 + v15];
    v3 = (int *)((char *)v3 + 1);
LABEL_10:
    v20 = v17 + v10 < v17;
    *(_BYTE *)v3 = *v19;
    v17 += v10;
    v19 += v15 + v20;
    v3 = (int *)((char *)v3 + 1);
LABEL_11:
    v20 = v17 + v10 < v17;
    *(_BYTE *)v3 = *v19;
    v17 += v10;
    v19 += v15 + v20;
    v3 = (int *)((char *)v3 + 1);
    goto LABEL_12;
  }
  return v12;
}
