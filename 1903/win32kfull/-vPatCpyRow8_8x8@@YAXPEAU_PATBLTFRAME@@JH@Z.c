/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02BFD94
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02C85D0 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02D1004 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v3; // r8
  struct _PATBLTFRAME *v4; // r11
  int v5; // eax
  int v6; // edi
  int v7; // edx
  __int64 v8; // r13
  unsigned int *v9; // rcx
  char v10; // di
  unsigned int *v11; // r15
  __int64 v12; // r10
  int v13; // r12d
  int v14; // r14d
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r14d
  __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // r8d
  unsigned int v21; // esi
  unsigned int v22; // r10d
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // edi
  unsigned __int64 v26; // rax
  int v27; // r14d
  int v28; // r14d
  unsigned int *v29; // rcx
  int v30; // r9d
  char v31; // [rsp+20h] [rbp-58h]
  _DWORD v32[2]; // [rsp+28h] [rbp-50h] BYREF
  int *v33; // [rsp+30h] [rbp-48h]
  unsigned int *v34; // [rsp+38h] [rbp-40h]
  unsigned __int64 v35; // [rsp+40h] [rbp-38h]
  _QWORD v36[2]; // [rsp+48h] [rbp-30h] BYREF
  int v37; // [rsp+58h] [rbp-20h]
  int v38; // [rsp+5Ch] [rbp-1Ch]
  int v39; // [rsp+60h] [rbp-18h]
  int v40; // [rsp+64h] [rbp-14h]
  __int64 v41; // [rsp+68h] [rbp-10h]
  char v43; // [rsp+C8h] [rbp+50h]
  unsigned int v45; // [rsp+D8h] [rbp+60h]

  v3 = (int *)*((_QWORD *)a1 + 3);
  v4 = a1;
  v5 = a2 * *((_DWORD *)a1 + 4);
  v36[0] = 0LL;
  v39 = 0;
  v6 = *((_DWORD *)a1 + 8);
  v7 = (a2 - *((_DWORD *)a1 + 9)) & 7;
  v8 = *(_QWORD *)a1 + v5;
  v9 = (unsigned int *)*((_QWORD *)a1 + 1);
  v45 = v6 & 7;
  LOBYTE(v6) = v6 & 3;
  v41 = 0LL;
  v33 = v3;
  LOBYTE(v5) = 8 * (4 - v6);
  v10 = 8 * v6;
  v43 = v5;
  v35 = (unsigned __int64)(v9 + 24);
  v11 = (unsigned int *)((char *)v9 + (unsigned int)(12 * v7));
  v34 = v9;
  v31 = v10;
  do
  {
    v12 = *v3;
    v13 = 0;
    v14 = v3[1];
    v15 = *v3 & 3;
    v16 = v14 - v12;
    v17 = v14 & 3;
    if ( v16 - (-(int)v15 & 3) - v17 >= 0 )
      v13 = (v16 - (-(int)v15 & 3) - v17) >> 2;
    if ( (_DWORD)v15 == 1 )
    {
      if ( v16 == 1 )
      {
        v15 = 4LL;
      }
      else
      {
        if ( v16 != 2 )
          goto LABEL_13;
        v15 = 5LL;
      }
      goto LABEL_12;
    }
    if ( (_DWORD)v15 == 2 && v16 == 1 )
    {
      v15 = 6LL;
LABEL_12:
      v17 = 0;
    }
LABEL_13:
    v37 = 0;
    v36[1] = v32;
    v38 = 8;
    v18 = ((int)v12 >> 2) & 1;
    v40 = 2;
    v19 = v8 + (v12 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)v4 + 8) )
    {
      v21 = *v11;
      v22 = v11[1];
      if ( v45 >= 4 )
      {
        if ( v45 == 4 )
        {
          v20 = v11[1];
        }
        else
        {
          v20 = (v22 << v10) | (v21 >> v43);
          v21 = (v21 << v10) | (v22 >> v43);
        }
      }
      else
      {
        v20 = (v21 << v10) | (v22 >> v43);
        v21 = (v22 << v10) | (v21 >> v43);
      }
      if ( (_DWORD)v18 )
      {
        v23 = v20;
        v20 = v21;
        v21 = v23;
      }
    }
    else
    {
      v20 = v11[v18];
      v21 = v11[(((int)v12 >> 2) & 1) == 0];
    }
    v24 = v13;
    v25 = v20;
    if ( (_DWORD)v15 )
    {
      v15 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v15 )
      {
        v15 = (unsigned int)(v15 - 1);
        if ( (_DWORD)v15 )
        {
          v15 = (unsigned int)(v15 - 1);
          if ( (_DWORD)v15 )
          {
            v15 = (unsigned int)(v15 - 1);
            if ( (_DWORD)v15 )
            {
              v15 = (unsigned int)(v15 - 1);
              if ( !(_DWORD)v15 )
              {
                *(_BYTE *)(v19 + 1) = BYTE1(v20);
                goto LABEL_31;
              }
              if ( (_DWORD)v15 == 1 )
LABEL_31:
                *(_BYTE *)(v19 + 2) = BYTE2(v20);
            }
            else
            {
              *(_BYTE *)(v19 + 1) = BYTE1(v20);
            }
          }
          else
          {
            *(_BYTE *)(v19 + 3) = HIBYTE(v20);
          }
LABEL_36:
          v25 = v21;
          v19 += 4LL;
          v21 = v20;
          goto LABEL_37;
        }
      }
      else
      {
        *(_BYTE *)(v19 + 1) = BYTE1(v20);
      }
      *(_WORD *)(v19 + 2) = HIWORD(v20);
      goto LABEL_36;
    }
LABEL_37:
    if ( v13 <= 7 )
    {
      if ( (unsigned int)v13 >= 2 )
      {
        v26 = (unsigned __int64)(unsigned int)v13 >> 1;
        do
        {
          *(_DWORD *)v19 = v25;
          v24 -= 2;
          *(_DWORD *)(v19 + 4) = v21;
          v19 += 8LL;
          --v26;
        }
        while ( v26 );
      }
      if ( v24 )
      {
        *(_DWORD *)v19 = v25;
        v19 += 4LL;
      }
    }
    else
    {
      v32[0] = v25;
      v32[1] = v21;
      v39 = v13;
      v36[0] = v19;
      vFetchAndCopy(v36, v15);
      v4 = a1;
      v19 += 4LL * v13;
    }
    if ( v17 )
    {
      if ( (v13 & 1) != 0 )
        v25 = v21;
      v27 = v17 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            *(_WORD *)v19 = v25;
            *(_BYTE *)(v19 + 2) = BYTE2(v25);
          }
        }
        else
        {
          *(_WORD *)v19 = v25;
        }
      }
      else
      {
        *(_BYTE *)v19 = v25;
      }
    }
    v29 = v11 + 3;
    v3 = v33 + 2;
    v30 = a3 - 1;
    v11 = v34;
    v8 += *((int *)v4 + 4);
    v10 = v31;
    if ( (unsigned __int64)v29 < v35 )
      v11 = v29;
    v33 += 2;
    --a3;
  }
  while ( v30 );
}
