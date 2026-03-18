/*
 * XREFs of vDirectStretch8 @ 0x1C02AB180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vDirectStretch8(__int64 a1)
{
  __int64 v1; // r8
  int *v3; // r10
  int v4; // edx
  unsigned __int8 *v5; // rsi
  int v6; // r13d
  int v7; // r12d
  int v8; // r8d
  __int64 v9; // r11
  int v10; // r9d
  int v11; // r14d
  int v12; // ebx
  unsigned int v13; // r15d
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  unsigned __int8 *v23; // r11
  bool v24; // cf
  int *v25; // r12
  int v26; // r9d
  unsigned int v27; // eax
  unsigned __int8 *v28; // r11
  int v29; // r8d
  unsigned __int8 *v30; // r11
  int v31; // edx
  unsigned __int8 *v32; // r11
  int v33; // eax
  bool v34; // zf
  __int64 v36; // [rsp+0h] [rbp-68h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  int v38; // [rsp+70h] [rbp+8h]
  int v39; // [rsp+78h] [rbp+10h]
  int v40; // [rsp+80h] [rbp+18h]
  int v41; // [rsp+88h] [rbp+20h]

  v1 = *(int *)(a1 + 28);
  v3 = (int *)(v1 + *(_QWORD *)(a1 + 16));
  v4 = *(_DWORD *)(a1 + 32) - v1;
  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v6 = *(_DWORD *)(a1 + 52);
  v7 = ((_BYTE)v1 + *(_BYTE *)(a1 + 16)) & 3;
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(unsigned int *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 24) - v4;
  v11 = *(_DWORD *)(a1 + 44);
  v12 = ((_BYTE)v3 + (_BYTE)v4) & 3;
  v13 = *(_DWORD *)(a1 + 60);
  LODWORD(v14) = -v7 & 3;
  v38 = *(_DWORD *)(a1 + 36);
  v40 = v7;
  v15 = v4 - v14 - v12;
  v39 = v12;
  v16 = 0;
  v41 = v6;
  if ( v38 > 0 )
  {
    if ( v8 )
      v16 = v8 * *(_DWORD *)(a1 + 8);
    v17 = v15;
    v18 = v9;
    v19 = v16;
    v20 = v10;
    v36 = v17;
    v37 = v10;
    while ( 1 )
    {
      v21 = *(_DWORD *)(a1 + 56);
      v22 = v13 + v6;
      v23 = v5;
      if ( v7 == 1 )
        break;
      if ( v7 == 2 )
        goto LABEL_10;
      if ( v7 == 3 )
        goto LABEL_11;
LABEL_12:
      v25 = (int *)((char *)v3 + v36);
      if ( v3 != (int *)((char *)v3 + v36) )
      {
        do
        {
          v26 = *v23;
          v27 = v21 + v11 + v11;
          v28 = &v23[(v21 + v11 < v21) + v18];
          v24 = v27 < v21 + v11;
          v21 = v27 + v11 + v11;
          v29 = *v28;
          v30 = &v28[v24 + v18];
          v31 = *v30;
          v32 = &v30[(v27 + v11 < v27) + v18];
          v24 = v21 < v27 + v11;
          v33 = *v32;
          v23 = &v32[v24 + v18];
          *v3++ = v26 | ((v29 | ((v31 | (v33 << 8)) << 8)) << 8);
        }
        while ( v3 != v25 );
        v19 = v16;
        v20 = v37;
      }
      if ( v39 == 1 )
        goto LABEL_20;
      LOBYTE(v14) = v39 - 2;
      if ( v39 == 2 )
        goto LABEL_19;
      if ( v39 == 3 )
      {
        v24 = v21 + v11 < v21;
        *(_BYTE *)v3 = *v23;
        v21 += v11;
        v23 += v18 + v24;
        v3 = (int *)((char *)v3 + 1);
LABEL_19:
        *(_BYTE *)v3 = *v23;
        v23 += v18 + (v21 + v11 < v21);
        v3 = (int *)((char *)v3 + 1);
LABEL_20:
        LOBYTE(v14) = *v23;
        *(_BYTE *)v3 = *v23;
        v3 = (int *)((char *)v3 + 1);
      }
      v5 += v19;
      if ( v22 < v13 )
      {
        v14 = *(int *)(a1 + 8);
        v5 += v14;
      }
      v7 = v40;
      v3 = (int *)((char *)v3 + v20);
      v34 = v38-- == 1;
      v13 = v22;
      v6 = v41;
      if ( v34 )
        return v14;
    }
    v24 = v21 + v11 < v21;
    *(_BYTE *)v3 = *v5;
    v21 += v11;
    v23 = &v5[v24 + v18];
    v3 = (int *)((char *)v3 + 1);
LABEL_10:
    v24 = v21 + v11 < v21;
    *(_BYTE *)v3 = *v23;
    v21 += v11;
    v23 += v18 + v24;
    v3 = (int *)((char *)v3 + 1);
LABEL_11:
    v24 = v21 + v11 < v21;
    *(_BYTE *)v3 = *v23;
    v21 += v11;
    v23 += v18 + v24;
    v3 = (int *)((char *)v3 + 1);
    goto LABEL_12;
  }
  return v14;
}
