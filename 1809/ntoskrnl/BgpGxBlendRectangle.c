/*
 * XREFs of BgpGxBlendRectangle @ 0x140955208
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14017A014 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1409555A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxBlendColor @ 0x14017A788 (BgpGxBlendColor.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x14095121C (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxBlendRectangle(unsigned int *a1, _DWORD *a2, int *a3, __int64 *a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 *v6; // r14
  _DWORD *v8; // rbp
  unsigned int *v9; // r15
  unsigned int v10; // r11d
  int v11; // r8d
  unsigned int v12; // r10d
  int v13; // r9d
  int v14; // r13d
  int v15; // ecx
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // r12d
  __int64 v21; // r13
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r12d
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // rax
  bool v31; // zf
  int v33; // [rsp+20h] [rbp-88h]
  int v34; // [rsp+24h] [rbp-84h]
  __int64 v35; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h] BYREF
  __int64 v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+50h] [rbp-58h]

  v4 = 0LL;
  v5 = 0;
  v35 = 0LL;
  v6 = a4;
  v34 = 0;
  v8 = a2;
  v9 = a1;
  if ( !a4
    || (v10 = *a1) == 0
    || (v11 = *a2) == 0
    || (v12 = a1[1]) == 0
    || (v13 = a2[1]) == 0
    || a1[2] != 32
    || a2[2] != 32
    || (v14 = *a3, v12 < v13 + *a3)
    || (v15 = a3[1], v10 < v15 + v11) )
  {
    v5 = -1073741811;
    goto LABEL_25;
  }
  v4 = *v6;
  if ( *v6 )
  {
    if ( *(_DWORD *)(v4 + 4) == v13 && *(_DWORD *)v4 == v11 )
    {
LABEL_15:
      v17 = *(_DWORD *)v4;
      v18 = *((_QWORD *)v8 + 3);
      v19 = *(_QWORD *)(v4 + 24);
      v20 = *(_DWORD *)(v4 + 8) >> 3;
      v38 = v18;
      v39 = v19;
      LODWORD(v35) = v20;
      v33 = v17;
      v21 = *((_QWORD *)v9 + 3) + v20 * (v12 * v15 + v14);
      if ( v17 )
      {
        v22 = *(_DWORD *)(v4 + 4);
        v23 = v22;
        do
        {
          v36 = 0;
          if ( v22 )
          {
            v24 = v20;
            v25 = v36;
            v26 = v18;
            v37 = v24;
            v27 = v24;
            v28 = v21 - v18;
            v29 = v19 - v21;
            do
            {
              *(_DWORD *)(v26 + v28 + v29) = BgpGxBlendColor(
                                               *(_DWORD *)(v26 + v28),
                                               *(_DWORD *)v26,
                                               *(_BYTE *)(v26 + 3));
              v26 += v27;
              v23 = *(_DWORD *)(v4 + 4);
              ++v25;
            }
            while ( v25 < v23 );
            v9 = a1;
            v8 = a2;
            v20 = v35;
            v18 = v38;
            v19 = v39;
            v17 = v33;
          }
          v22 = v23;
          v18 += v20 * v8[1];
          v30 = v20 * v9[1];
          v38 = v18;
          v21 += v30;
          v19 += v20 * v22;
          v23 = v22;
          v31 = v17-- == 1;
          v39 = v19;
          v33 = v17;
        }
        while ( !v31 );
        v5 = v34;
        v6 = a4;
      }
LABEL_25:
      if ( v5 >= 0 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v5 = -1073741670;
  }
  else
  {
    HIDWORD(v37) = *a2;
    LODWORD(v37) = v13;
    v16 = BgpGxRectangleCreate(&v37, 32, &v35);
    v4 = v35;
    v5 = v16;
    v34 = v16;
    if ( v16 >= 0 )
    {
      v12 = v9[1];
      v15 = a3[1];
      v14 = *a3;
      goto LABEL_15;
    }
  }
LABEL_26:
  if ( *v6 )
    return (unsigned int)v5;
  if ( v4 )
  {
    BgpGxRectangleDestroy(v4);
    v4 = 0LL;
  }
LABEL_29:
  if ( !*v6 )
    *v6 = v4;
  return (unsigned int)v5;
}
