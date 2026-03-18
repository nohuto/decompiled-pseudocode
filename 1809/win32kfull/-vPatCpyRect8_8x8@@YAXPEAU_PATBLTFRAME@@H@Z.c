/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02A8A20
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02B2510 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02BE1C4 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  char v3; // r15
  unsigned int *v4; // r14
  int v5; // r13d
  char v6; // si
  unsigned int v7; // r15d
  char v8; // r13
  struct _PATBLTFRAME *v9; // rbx
  __int64 v10; // r9
  int v11; // r8d
  int v12; // r10d
  int v13; // r12d
  int v14; // r11d
  int v15; // edx
  int v16; // ebp
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx
  unsigned int *v20; // rdi
  BOOL v21; // r8d
  unsigned __int64 v22; // r10
  int v23; // eax
  int v24; // r9d
  _BOOL8 v25; // rcx
  int v26; // r8d
  int v27; // ebx
  unsigned int v28; // r14d
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // eax
  _BYTE *v32; // rbp
  int v33; // r8d
  __int64 v34; // r9
  int v35; // edx
  unsigned int v36; // esi
  unsigned int v37; // r15d
  _BYTE *v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  bool v41; // zf
  int v42; // [rsp+20h] [rbp-D8h]
  int v43; // [rsp+24h] [rbp-D4h]
  int v44; // [rsp+28h] [rbp-D0h]
  char v45; // [rsp+2Ch] [rbp-CCh]
  char v46; // [rsp+30h] [rbp-C8h]
  unsigned int v47; // [rsp+34h] [rbp-C4h]
  int v48; // [rsp+38h] [rbp-C0h]
  int v49; // [rsp+3Ch] [rbp-BCh]
  _DWORD v50[2]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-B0h]
  unsigned int *v52; // [rsp+50h] [rbp-A8h]
  __int64 v53; // [rsp+58h] [rbp-A0h]
  int *v54; // [rsp+60h] [rbp-98h]
  __int64 v55; // [rsp+68h] [rbp-90h]
  unsigned int *v56; // [rsp+70h] [rbp-88h]
  _BOOL8 v57; // [rsp+78h] [rbp-80h]
  _QWORD v58[2]; // [rsp+80h] [rbp-78h] BYREF
  int v59; // [rsp+90h] [rbp-68h]
  int v60; // [rsp+94h] [rbp-64h]
  int v61; // [rsp+98h] [rbp-60h]
  int v62; // [rsp+9Ch] [rbp-5Ch]
  int v65; // [rsp+110h] [rbp+18h]
  int v66; // [rsp+118h] [rbp+20h]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8) & 3;
  v54 = v2;
  v6 = 8 * (4 - v5);
  v7 = v3 & 7;
  v8 = 8 * v5;
  v9 = a1;
  v45 = v8;
  v56 = v4;
  v47 = v7;
  v46 = v6;
  do
  {
    v10 = *v2;
    v11 = 0;
    v12 = v2[1];
    v13 = *v2 & 3;
    v14 = v2[2] & 3;
    v15 = v2[2] - v10;
    v16 = v2[3] - v12;
    v65 = v14;
    if ( v15 - (-v13 & 3) - v14 >= 0 )
      v11 = (v15 - (-v13 & 3) - v14) >> 2;
    v43 = v11;
    if ( v13 == 1 )
    {
      if ( v15 == 1 )
      {
        v13 = 4;
      }
      else
      {
        if ( v15 != 2 )
          goto LABEL_13;
        v13 = 5;
      }
      goto LABEL_12;
    }
    if ( v13 == 2 && v15 == 1 )
    {
      v13 = 6;
LABEL_12:
      v14 = 0;
      v65 = 0;
    }
LABEL_13:
    v17 = *((_DWORD *)v9 + 4);
    v18 = v12 - *((_DWORD *)v9 + 9);
    v59 = 0;
    v19 = ((int)v10 >> 2) & 1;
    v62 = 2;
    v20 = &v4[3 * (v18 & 7)];
    v21 = (((int)v10 >> 2) & 1) == 0;
    v42 = 8 * v17;
    v58[1] = v50;
    v52 = v20;
    v60 = 8;
    v22 = *(_QWORD *)v9 + (v10 & 0xFFFFFFFFFFFFFFFCuLL) + v12 * v17;
    v23 = v16 & 7;
    v24 = (v16 >> 3) + 1;
    v51 = v22;
    v66 = v23;
    if ( v16 > 8 )
      v16 = 8;
    if ( v16 )
    {
      v25 = v21;
      v57 = v21;
      v53 = v19;
      while ( 1 )
      {
        v26 = v23;
        v49 = v16 - 1;
        if ( *((_DWORD *)v9 + 8) )
        {
          v28 = *v20;
          v29 = v20[1];
          if ( v7 >= 4 )
          {
            if ( v7 == 4 )
            {
              v27 = v20[1];
            }
            else
            {
              v27 = (v29 << v8) | (v28 >> v6);
              v28 = (v28 << v8) | (v29 >> v6);
            }
          }
          else
          {
            v27 = (v28 << v8) | (v29 >> v6);
            v28 = (v29 << v8) | (v28 >> v6);
          }
          if ( v53 )
          {
            v30 = v27;
            v27 = v28;
            v28 = v30;
          }
        }
        else
        {
          v27 = v20[v19];
          v28 = v20[v25];
        }
        --v66;
        v31 = v24 - 1;
        v32 = (_BYTE *)v22;
        if ( v26 )
          v31 = v24;
        v48 = v31;
        v24 = v31;
        v33 = v31;
        if ( v31 )
          break;
LABEL_61:
        v4 = v56;
        v40 = (unsigned __int64)(v20 + 3);
        v9 = a1;
        v20 = v56;
        v16 = v49;
        v19 = v53;
        v22 += *((int *)a1 + 4);
        v51 = v22;
        v23 = v66;
        if ( v40 < (unsigned __int64)(v56 + 24) )
          v20 = (unsigned int *)v40;
        v25 = v57;
        v52 = v20;
        if ( !v49 )
          goto LABEL_64;
      }
      v34 = v42;
      v55 = v42;
      while ( 2 )
      {
        --v33;
        v35 = v43;
        v44 = v33;
        v36 = v27;
        v37 = v28;
        v38 = v32;
        if ( !v13 )
          goto LABEL_43;
        if ( v13 == 1 )
        {
          v32[1] = BYTE1(v27);
        }
        else if ( v13 != 2 )
        {
          if ( v13 == 3 )
          {
            v32[3] = HIBYTE(v27);
          }
          else if ( v13 == 4 )
          {
            v32[1] = BYTE1(v27);
          }
          else
          {
            if ( v13 == 5 )
              v32[1] = BYTE1(v27);
            v32[2] = BYTE2(v27);
          }
LABEL_42:
          v38 = v32 + 4;
          v36 = v28;
          v37 = v27;
LABEL_43:
          if ( v43 <= 7 )
          {
            if ( (unsigned int)v43 >= 2 )
            {
              v39 = (unsigned __int64)(unsigned int)v43 >> 1;
              do
              {
                *(_DWORD *)v38 = v36;
                v35 -= 2;
                *((_DWORD *)v38 + 1) = v37;
                v38 += 8;
                --v39;
              }
              while ( v39 );
            }
            if ( v35 )
            {
              *(_DWORD *)v38 = v36;
              v38 += 4;
            }
          }
          else
          {
            v50[0] = v36;
            v50[1] = v37;
            v61 = v43;
            v58[0] = v38;
            vFetchAndCopy(v58, (unsigned int)v43);
            v14 = v65;
            v38 += 4 * v43;
            v33 = v44;
            v34 = v55;
          }
          if ( v14 )
          {
            if ( (v43 & 1) != 0 )
              v36 = v37;
            switch ( v14 )
            {
              case 1:
                *v38 = v36;
                break;
              case 2:
                *(_WORD *)v38 = v36;
                break;
              case 3:
                *(_WORD *)v38 = v36;
                v38[2] = BYTE2(v36);
                break;
            }
          }
          v32 += v34;
          if ( !v33 )
          {
            v8 = v45;
            v20 = v52;
            v6 = v46;
            v7 = v47;
            v24 = v48;
            v22 = v51;
            goto LABEL_61;
          }
          continue;
        }
        break;
      }
      *((_WORD *)v32 + 1) = HIWORD(v27);
      goto LABEL_42;
    }
LABEL_64:
    v2 = v54 + 4;
    v41 = a2-- == 1;
    v54 += 4;
  }
  while ( !v41 );
}
