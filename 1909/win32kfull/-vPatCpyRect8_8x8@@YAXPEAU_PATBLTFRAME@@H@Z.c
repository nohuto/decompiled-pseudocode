/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02BF0F0
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02C8100 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02D0B54 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // r14
  unsigned int *v4; // rdx
  int v5; // r11d
  char v6; // cl
  char v7; // si
  char v8; // r11
  __int64 v9; // r9
  unsigned int v10; // r12d
  int v11; // r10d
  int v12; // r13d
  int v13; // ebx
  int v14; // edx
  int v15; // r15d
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edx
  int v19; // ebx
  unsigned int *v20; // rdi
  BOOL v21; // r8d
  unsigned __int64 v22; // r10
  int v23; // r9d
  __int64 v24; // rax
  _BOOL8 v25; // rcx
  int v26; // r8d
  int v27; // ebx
  unsigned int v28; // r15d
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // eax
  _BYTE *v32; // r14
  int v33; // r8d
  __int64 v34; // r10
  unsigned __int64 v35; // rdx
  unsigned int v36; // esi
  unsigned int v37; // r12d
  _BYTE *v38; // rdi
  char v39; // r9
  unsigned __int64 v40; // rax
  unsigned int *v41; // rcx
  bool v42; // zf
  int v43; // [rsp+20h] [rbp-79h]
  unsigned int v44; // [rsp+24h] [rbp-75h]
  int v45; // [rsp+28h] [rbp-71h]
  int v46; // [rsp+2Ch] [rbp-6Dh]
  char v47; // [rsp+30h] [rbp-69h]
  char v48; // [rsp+34h] [rbp-65h]
  int v49; // [rsp+38h] [rbp-61h]
  int v50; // [rsp+3Ch] [rbp-5Dh]
  _DWORD v51[2]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-51h]
  unsigned int *v53; // [rsp+50h] [rbp-49h]
  unsigned int *v54; // [rsp+58h] [rbp-41h]
  __int64 v55; // [rsp+60h] [rbp-39h]
  int *v56; // [rsp+68h] [rbp-31h]
  __int64 v57; // [rsp+70h] [rbp-29h]
  unsigned __int64 v58; // [rsp+78h] [rbp-21h]
  _BOOL8 v59; // [rsp+80h] [rbp-19h]
  _QWORD v60[2]; // [rsp+88h] [rbp-11h] BYREF
  int v61; // [rsp+98h] [rbp-1h]
  int v62; // [rsp+9Ch] [rbp+3h]
  int v63; // [rsp+A0h] [rbp+7h]
  int v64; // [rsp+A4h] [rbp+Bh]
  __int64 v65; // [rsp+A8h] [rbp+Fh]
  int v68; // [rsp+110h] [rbp+77h]
  int v69; // [rsp+118h] [rbp+7Fh]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = (unsigned int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = v5;
  v60[0] = 0LL;
  v63 = 0;
  LOBYTE(v5) = v5 & 3;
  v65 = 0LL;
  v7 = 8 * (4 - v5);
  v44 = v6 & 7;
  v8 = 8 * v5;
  v47 = v8;
  v56 = v2;
  v53 = v4;
  v48 = v7;
  v58 = (unsigned __int64)(v4 + 24);
  do
  {
    v9 = *v2;
    v10 = 0;
    v11 = v2[1];
    v12 = *v2 & 3;
    v13 = v2[2] & 3;
    v14 = v2[2] - v9;
    v15 = v2[3] - v11;
    v68 = v13;
    if ( v14 - (-v12 & 3) - v13 >= 0 )
      v10 = (v14 - (-v12 & 3) - v13) >> 2;
    v69 = v10;
    if ( v12 == 1 )
    {
      if ( v14 == 1 )
      {
        v68 = 0;
        v12 = 4;
        goto LABEL_13;
      }
      if ( v14 == 2 )
      {
        v12 = 5;
LABEL_12:
        v68 = 0;
      }
    }
    else if ( v12 == 2 && v14 == 1 )
    {
      v12 = 6;
      goto LABEL_12;
    }
LABEL_13:
    v16 = *((_DWORD *)v3 + 4);
    v17 = v11 - *((_DWORD *)v3 + 9);
    v61 = 0;
    v18 = ((int)v9 >> 2) & 1;
    v64 = 2;
    v19 = v15 & 7;
    v43 = v19;
    v20 = &v53[3 * (v17 & 7)];
    v21 = (((int)v9 >> 2) & 1) == 0;
    v54 = v20;
    v22 = *(_QWORD *)v3 + (v9 & 0xFFFFFFFFFFFFFFFCuLL) + v11 * v16;
    v23 = (v15 >> 3) + 1;
    v45 = 8 * v16;
    v52 = v22;
    v60[1] = v51;
    v62 = 8;
    if ( v15 > 8 )
      v15 = 8;
    if ( v15 )
    {
      v24 = v18;
      v25 = v21;
      v55 = v18;
      v59 = v21;
      while ( 1 )
      {
        v26 = v19;
        v50 = v15 - 1;
        if ( *((_DWORD *)v3 + 8) )
        {
          v28 = *v20;
          v29 = v20[1];
          if ( v44 >= 4 )
          {
            if ( v44 == 4 )
            {
              v27 = v20[1];
            }
            else
            {
              v27 = (v29 << v8) | (v28 >> v7);
              v28 = (v28 << v8) | (v29 >> v7);
            }
          }
          else
          {
            v27 = (v28 << v8) | (v29 >> v7);
            v28 = (v29 << v8) | (v28 >> v7);
          }
          if ( v55 )
          {
            v30 = v27;
            v27 = v28;
            v28 = v30;
          }
        }
        else
        {
          v27 = v20[v24];
          v28 = v20[v25];
        }
        --v43;
        v31 = v23 - 1;
        v32 = (_BYTE *)v22;
        if ( v26 )
          v31 = v23;
        v49 = v31;
        v23 = v31;
        v33 = v31;
        if ( v31 )
          break;
LABEL_61:
        v3 = a1;
        v41 = v20 + 3;
        v20 = v53;
        v15 = v50;
        v19 = v43;
        v22 += *((int *)a1 + 4);
        v24 = v55;
        v52 = v22;
        if ( (unsigned __int64)v41 < v58 )
          v20 = v41;
        v25 = v59;
        v54 = v20;
        if ( !v50 )
          goto LABEL_64;
      }
      v34 = v45;
      v57 = v45;
      while ( 2 )
      {
        --v33;
        v35 = v10;
        v46 = v33;
        v36 = v27;
        v37 = v28;
        v38 = v32;
        if ( !v12 )
          goto LABEL_43;
        if ( v12 == 1 )
        {
          v32[1] = BYTE1(v27);
        }
        else if ( v12 != 2 )
        {
          if ( v12 == 3 )
          {
            v32[3] = HIBYTE(v27);
          }
          else if ( v12 == 4 )
          {
            v32[1] = BYTE1(v27);
          }
          else
          {
            if ( v12 == 5 )
              v32[1] = BYTE1(v27);
            v32[2] = BYTE2(v27);
          }
LABEL_42:
          v38 = v32 + 4;
          v36 = v28;
          v37 = v27;
LABEL_43:
          v39 = v69;
          if ( v69 <= 7 )
          {
            if ( (unsigned int)v35 >= 2 )
            {
              v40 = v35 >> 1;
              do
              {
                *(_DWORD *)v38 = v36;
                LODWORD(v35) = v35 - 2;
                *((_DWORD *)v38 + 1) = v37;
                v38 += 8;
                --v40;
              }
              while ( v40 );
            }
            if ( (_DWORD)v35 )
            {
              *(_DWORD *)v38 = v36;
              v38 += 4;
            }
          }
          else
          {
            v51[0] = v36;
            v51[1] = v37;
            v63 = v69;
            v60[0] = v38;
            vFetchAndCopy(v60, v35);
            v39 = v69;
            v33 = v46;
            v34 = v57;
            v38 += 4 * v69;
          }
          if ( v68 )
          {
            if ( (v39 & 1) != 0 )
              v36 = v37;
            switch ( v68 )
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
          v10 = v69;
          v32 += v34;
          if ( !v33 )
          {
            v8 = v47;
            v20 = v54;
            v7 = v48;
            v23 = v49;
            v22 = v52;
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
    v2 = v56 + 4;
    v42 = a2-- == 1;
    v56 += 4;
  }
  while ( !v42 );
}
