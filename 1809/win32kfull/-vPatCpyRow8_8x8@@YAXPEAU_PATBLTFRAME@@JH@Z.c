/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02A923C
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02B2530 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02BE1C4 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int v4; // eax
  int v5; // r11d
  int *v6; // r8
  int v7; // edx
  __int64 v8; // r12
  int v9; // edi
  char v10; // di
  unsigned int *v11; // r14
  __int64 v12; // r10
  int v13; // r15d
  int v14; // ebp
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // ebp
  __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // r8d
  unsigned int v21; // esi
  unsigned int v22; // r10d
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // edi
  unsigned __int64 v26; // rax
  int v27; // ebp
  int v28; // ebp
  unsigned int *v29; // rcx
  _DWORD v30[2]; // [rsp+20h] [rbp-98h] BYREF
  int *v31; // [rsp+28h] [rbp-90h]
  unsigned int *v32; // [rsp+30h] [rbp-88h]
  unsigned int *v33; // [rsp+38h] [rbp-80h]
  _QWORD v34[2]; // [rsp+40h] [rbp-78h] BYREF
  int v35; // [rsp+50h] [rbp-68h]
  int v36; // [rsp+54h] [rbp-64h]
  int v37; // [rsp+58h] [rbp-60h]
  int v38; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v39; // [rsp+C0h] [rbp+8h]
  char v40; // [rsp+C8h] [rbp+10h]
  int v41; // [rsp+D0h] [rbp+18h]
  char v42; // [rsp+D8h] [rbp+20h]

  v41 = a3;
  v4 = a2 * *((_DWORD *)a1 + 4);
  v5 = a3;
  v6 = (int *)*((_QWORD *)a1 + 3);
  v31 = v6;
  v7 = (a2 - *((_DWORD *)a1 + 9)) & 7;
  v8 = *(_QWORD *)a1 + v4;
  v39 = *((_DWORD *)a1 + 8) & 7;
  v9 = *((_DWORD *)a1 + 8) & 3;
  v32 = (unsigned int *)*((_QWORD *)a1 + 1);
  LOBYTE(v4) = 8 * (4 - v9);
  v10 = 8 * v9;
  v40 = v4;
  v33 = v32 + 24;
  v11 = (unsigned int *)((char *)v32 + (unsigned int)(12 * v7));
  v42 = v10;
  do
  {
    v12 = *v6;
    v13 = 0;
    v14 = v6[1];
    v15 = *v6 & 3;
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
    v35 = 0;
    v34[1] = v30;
    v36 = 8;
    v18 = ((int)v12 >> 2) & 1;
    v38 = 2;
    v19 = v8 + (v12 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)a1 + 8) )
    {
      v21 = *v11;
      v22 = v11[1];
      if ( v39 >= 4 )
      {
        if ( v39 == 4 )
        {
          v20 = v11[1];
        }
        else
        {
          v20 = (v22 << v10) | (v21 >> v40);
          v21 = (v21 << v10) | (v22 >> v40);
        }
      }
      else
      {
        v20 = (v21 << v10) | (v22 >> v40);
        v21 = (v22 << v10) | (v21 >> v40);
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
      v30[0] = v25;
      v30[1] = v21;
      v37 = v13;
      v34[0] = v19;
      vFetchAndCopy(v34, v15);
      v5 = v41;
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
    v6 = v31 + 2;
    v11 = v32;
    --v5;
    v10 = v42;
    v8 += *((int *)a1 + 4);
    v31 += 2;
    if ( v29 < v33 )
      v11 = v29;
    v41 = v5;
  }
  while ( v5 );
}
