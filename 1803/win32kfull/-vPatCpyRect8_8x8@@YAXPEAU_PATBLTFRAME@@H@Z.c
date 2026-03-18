/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C0294D30
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C029FE50 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C00DC644 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // rbx
  int v4; // edi
  unsigned int v5; // r13d
  char v6; // bp
  char v7; // di
  __int64 v8; // r9
  int v9; // r10d
  int v10; // r12d
  int v11; // ecx
  int v12; // r11d
  int v13; // r14d
  int v14; // r15d
  int v15; // r15d
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int *v19; // rsi
  BOOL v20; // r8d
  unsigned __int64 v21; // r10
  int v22; // eax
  int v23; // r9d
  _BOOL8 v24; // rcx
  int v25; // r8d
  int v26; // ebx
  unsigned int v27; // r14d
  unsigned int v28; // edx
  unsigned int v29; // eax
  int v30; // eax
  _BYTE *v31; // rbp
  int v32; // r8d
  __int64 v33; // r9
  int v34; // edx
  unsigned int v35; // esi
  unsigned int v36; // r13d
  _BYTE *v37; // rdi
  unsigned __int64 v38; // rax
  unsigned int *v39; // rcx
  bool v40; // zf
  char v41; // [rsp+20h] [rbp-D8h]
  int v42; // [rsp+24h] [rbp-D4h]
  int v43; // [rsp+28h] [rbp-D0h]
  char v44; // [rsp+2Ch] [rbp-CCh]
  int v45; // [rsp+30h] [rbp-C8h]
  unsigned int v46; // [rsp+34h] [rbp-C4h]
  int v47; // [rsp+38h] [rbp-C0h]
  _DWORD v48[2]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-B0h]
  unsigned int *v50; // [rsp+50h] [rbp-A8h]
  unsigned int *v51; // [rsp+58h] [rbp-A0h]
  __int64 v52; // [rsp+60h] [rbp-98h]
  int *v53; // [rsp+68h] [rbp-90h]
  __int64 v54; // [rsp+70h] [rbp-88h]
  unsigned int *v55; // [rsp+78h] [rbp-80h]
  _BOOL8 v56; // [rsp+80h] [rbp-78h]
  _QWORD v57[2]; // [rsp+88h] [rbp-70h] BYREF
  int v58; // [rsp+98h] [rbp-60h]
  int v59; // [rsp+9Ch] [rbp-5Ch]
  int v60; // [rsp+A0h] [rbp-58h]
  int v61; // [rsp+A4h] [rbp-54h]
  int v64; // [rsp+110h] [rbp+18h]
  int v65; // [rsp+118h] [rbp+20h]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v50 = (unsigned int *)*((_QWORD *)a1 + 1);
  v53 = v2;
  v4 = *((_DWORD *)a1 + 8) & 3;
  v5 = *((_DWORD *)a1 + 8) & 7;
  v46 = v5;
  v6 = 8 * (4 - v4);
  v7 = 8 * v4;
  v41 = v6;
  v55 = v50 + 24;
  v44 = v7;
  do
  {
    v8 = *v2;
    v9 = v2[1];
    v10 = *v2 & 3;
    v11 = v2[2] - v8;
    v12 = v2[2] & 3;
    v64 = v12;
    v13 = v2[3] - v9;
    v14 = v11 - (-v10 & 3) - v12;
    if ( v14 >= 0 )
      v15 = v14 >> 2;
    else
      v15 = 0;
    if ( v10 == 1 )
    {
      if ( v11 == 1 )
      {
        v10 = 4;
      }
      else
      {
        if ( v11 != 2 )
          goto LABEL_14;
        v10 = 5;
      }
      goto LABEL_13;
    }
    if ( v10 == 2 && v11 == 1 )
    {
      v10 = 6;
LABEL_13:
      v12 = 0;
      v64 = 0;
    }
LABEL_14:
    v16 = *((_DWORD *)v3 + 4);
    v17 = v9 - *((_DWORD *)v3 + 9);
    v58 = 0;
    v18 = ((int)v8 >> 2) & 1;
    v61 = 2;
    v19 = &v50[3 * (v17 & 7)];
    v20 = (((int)v8 >> 2) & 1) == 0;
    v42 = 8 * v16;
    v57[1] = v48;
    v51 = v19;
    v59 = 8;
    v21 = *(_QWORD *)v3 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) + v9 * v16;
    v22 = v13 & 7;
    v23 = (v13 >> 3) + 1;
    v49 = v21;
    v65 = v22;
    if ( v13 > 8 )
      v13 = 8;
    if ( v13 )
    {
      v24 = v20;
      v56 = v20;
      v52 = v18;
      while ( 1 )
      {
        v25 = v22;
        v47 = v13 - 1;
        if ( *((_DWORD *)v3 + 8) )
        {
          v27 = *v19;
          v28 = v19[1];
          if ( v5 >= 4 )
          {
            if ( v5 == 4 )
            {
              v26 = v19[1];
            }
            else
            {
              v26 = (v28 << v7) | (v27 >> v6);
              v27 = (v27 << v7) | (v28 >> v6);
            }
          }
          else
          {
            v26 = (v27 << v7) | (v28 >> v6);
            v27 = (v28 << v7) | (v27 >> v6);
          }
          if ( v52 )
          {
            v29 = v26;
            v26 = v27;
            v27 = v29;
          }
        }
        else
        {
          v26 = v19[v18];
          v27 = v19[v24];
        }
        --v65;
        v30 = v23 - 1;
        v31 = (_BYTE *)v21;
        if ( v25 )
          v30 = v23;
        v45 = v30;
        v23 = v30;
        v32 = v30;
        if ( v30 )
          break;
LABEL_62:
        v3 = a1;
        v39 = v19 + 3;
        v19 = v50;
        v13 = v47;
        v6 = v41;
        v18 = v52;
        v21 += *((int *)a1 + 4);
        v22 = v65;
        if ( v39 < v55 )
          v19 = v39;
        v49 = v21;
        v24 = v56;
        v51 = v19;
        if ( !v47 )
          goto LABEL_65;
      }
      v33 = v42;
      v54 = v42;
      while ( 2 )
      {
        --v32;
        v34 = v15;
        v43 = v32;
        v35 = v26;
        v36 = v27;
        v37 = v31;
        if ( !v10 )
          goto LABEL_44;
        if ( v10 == 1 )
        {
          v31[1] = BYTE1(v26);
        }
        else if ( v10 != 2 )
        {
          if ( v10 == 3 )
          {
            v31[3] = HIBYTE(v26);
          }
          else if ( v10 == 4 )
          {
            v31[1] = BYTE1(v26);
          }
          else
          {
            if ( v10 == 5 )
              v31[1] = BYTE1(v26);
            v31[2] = BYTE2(v26);
          }
LABEL_43:
          v37 = v31 + 4;
          v35 = v27;
          v36 = v26;
LABEL_44:
          if ( v15 <= 7 )
          {
            if ( (unsigned int)v15 >= 2 )
            {
              v38 = (unsigned __int64)(unsigned int)v15 >> 1;
              do
              {
                *(_DWORD *)v37 = v35;
                v34 -= 2;
                *((_DWORD *)v37 + 1) = v36;
                v37 += 8;
                --v38;
              }
              while ( v38 );
            }
            if ( v34 )
            {
              *(_DWORD *)v37 = v35;
              v37 += 4;
            }
          }
          else
          {
            v48[0] = v35;
            v48[1] = v36;
            v60 = v15;
            v57[0] = v37;
            vFetchAndCopy((__int64)v57);
            v12 = v64;
            v32 = v43;
            v33 = v54;
            v37 += 4 * v15;
          }
          if ( v12 )
          {
            if ( (v15 & 1) != 0 )
              v35 = v36;
            switch ( v12 )
            {
              case 1:
                *v37 = v35;
                break;
              case 2:
                *(_WORD *)v37 = v35;
                break;
              case 3:
                *(_WORD *)v37 = v35;
                v37[2] = BYTE2(v35);
                break;
            }
          }
          v31 += v33;
          if ( !v32 )
          {
            v7 = v44;
            v19 = v51;
            v23 = v45;
            v5 = v46;
            v21 = v49;
            goto LABEL_62;
          }
          continue;
        }
        break;
      }
      *((_WORD *)v31 + 1) = HIWORD(v26);
      goto LABEL_43;
    }
LABEL_65:
    v2 = v53 + 4;
    v40 = a2-- == 1;
    v53 += 4;
  }
  while ( !v40 );
}
