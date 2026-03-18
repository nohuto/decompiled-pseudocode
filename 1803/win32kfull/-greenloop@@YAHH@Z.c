/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C00D59E0
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C00D588C (-redloop@@YAHXZ.c)
 * Callees:
 *     ?blueloop@@YAHH@Z @ 0x1C00D5EFC (-blueloop@@YAHH@Z.c)
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // r14d
  int v2; // r9d
  int v3; // r15d
  int v4; // eax
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // edx
  int v8; // r13d
  int v9; // r12d
  int v10; // ecx
  __int64 v11; // r9
  int v12; // eax
  char v13; // r11
  int v14; // edi
  int v15; // r10d
  int v16; // eax
  int v17; // r8d
  int v18; // edx
  int v19; // ebx
  unsigned int *v20; // rax
  _BYTE *v21; // r9
  int v22; // ebp
  int v23; // esi
  unsigned int v24; // ecx
  int v25; // r8d
  unsigned int v26; // eax
  int v27; // edx
  unsigned int *v28; // rcx
  _BYTE *v29; // r9
  int v30; // ecx
  int v31; // r15d
  int v32; // ebx
  int v33; // r12d
  __int64 v34; // rdi
  int v35; // r13d
  __int64 v36; // rsi
  int v37; // ecx
  int v38; // ebp
  int v39; // eax
  int v40; // r15d
  int v41; // r8d
  int v42; // eax
  int v44; // [rsp+20h] [rbp-78h]
  __int64 v45; // [rsp+28h] [rbp-70h]
  __int64 v46; // [rsp+30h] [rbp-68h]
  __int64 v47; // [rsp+38h] [rbp-60h]
  __int64 v48; // [rsp+40h] [rbp-58h]
  int v49; // [rsp+A0h] [rbp+8h]
  int v50; // [rsp+A8h] [rbp+10h]
  int v51; // [rsp+B0h] [rbp+18h]
  int v52; // [rsp+B8h] [rbp+20h]

  v1 = 2 * dword_1C0326F1C;
  if ( a1 )
  {
    v2 = dword_1C0326EC0;
    v5 = 0;
    v3 = dword_1C0326ED8;
    v4 = 31;
    dword_1C0327228 = 0;
    dword_1C032722C = 31;
    dword_1C0327234 = 0;
    dword_1C0327224 = dword_1C0326EC0;
    dword_1C0327230 = dword_1C0326ED8;
    dword_1C0327238 = 32;
  }
  else
  {
    v2 = dword_1C0327224;
    v3 = dword_1C0327230;
    v4 = dword_1C032722C;
    v5 = dword_1C0327228;
  }
  v6 = v4;
  v44 = v4;
  v7 = 0;
  v8 = dword_1C0326ECC;
  v51 = dword_1C0326ECC;
  v9 = v3;
  v46 = qword_1C0326EE8;
  v47 = qword_1C0326EE8;
  v52 = v5;
  v10 = v2;
  v11 = qword_1C0326EE8;
  v45 = qword_1C0326F00;
  v48 = qword_1C0326F00;
  v12 = 1;
  v49 = 0;
  v50 = v10;
  if ( v10 <= v6 )
  {
    v13 = dword_1C0326F24;
    v14 = dword_1C032725C;
    v15 = dword_1C0327260;
    while ( 1 )
    {
      if ( v12 )
      {
        v16 = dword_1C0326EBC;
        v14 = 0;
        v15 = 31;
        dword_1C032725C = 0;
        dword_1C0327260 = 31;
        dword_1C032726C = 0;
        dword_1C0327258 = dword_1C0326EBC;
        dword_1C0327264 = dword_1C0326ED4;
        dword_1C0327268 = 32;
      }
      else
      {
        v16 = dword_1C0327258;
      }
      v17 = dword_1C0327264;
      v18 = v16;
      v19 = 0;
      v20 = (unsigned int *)v11;
      v21 = (_BYTE *)v45;
      v22 = v14;
      v23 = v15;
      v24 = v8;
      if ( v18 <= v15 )
      {
        while ( *v20 <= v24 )
        {
          v24 += v17;
          ++v18;
          v17 += v1;
          ++v20;
          ++v21;
          if ( v18 > v15 )
            goto LABEL_16;
        }
        if ( v18 > dword_1C0327258 )
        {
          dword_1C0327258 = v18;
          v8 = v24;
          v46 = (__int64)v20;
          v22 = v18;
          v45 = (__int64)v21;
          dword_1C0327264 = v17;
        }
        v19 = 1;
        if ( v18 <= v15 )
        {
          while ( *v20 > v24 )
          {
            *v20 = v24;
            ++v18;
            v24 += v17;
            *v21++ = v13;
            v17 += v1;
            ++v20;
            if ( v18 > v15 )
              goto LABEL_16;
          }
          v23 = v18 - 1;
        }
      }
LABEL_16:
      v25 = dword_1C0327264 - v1;
      v26 = v8 - (dword_1C0327264 - v1);
      v27 = dword_1C0327258 - 1;
      v28 = (unsigned int *)(v46 - 4);
      v29 = (_BYTE *)(v45 - 1);
      if ( v19 )
        goto LABEL_17;
      if ( v27 >= v14 )
        break;
LABEL_38:
      v7 = v49;
      v30 = v50;
      if ( v49 )
      {
        v44 = v50 - 1;
        goto LABEL_28;
      }
LABEL_27:
      v8 += v9;
      v51 += v9;
      v11 = v46 + 128;
      v47 += 128LL;
      v45 += 32LL;
      v9 += v1;
      v48 += 32LL;
      v12 = 0;
      v50 = v30 + 1;
      v46 += 128LL;
      if ( v30 + 1 > dword_1C032722C )
        goto LABEL_28;
    }
    while ( *v28 <= v26 )
    {
      v25 -= v1;
      --v27;
      v26 -= v25;
      --v28;
      --v29;
      if ( v27 < v14 )
        goto LABEL_38;
    }
    dword_1C0327258 = v27;
    v8 = v26;
    v46 = (__int64)v28;
    v23 = v27;
    v45 = (__int64)v29;
    dword_1C0327264 = v25;
LABEL_17:
    if ( v27 >= v14 )
    {
      while ( *v28 > v26 )
      {
        *v28 = v26;
        v25 -= v1;
        *v29 = v13;
        v26 -= v25;
        --v29;
        --v27;
        --v28;
        if ( v27 < v14 )
          goto LABEL_22;
      }
      v22 = v27 + 1;
    }
LABEL_22:
    v7 = v49;
    v30 = v50;
    if ( v23 < dword_1C032726C )
      v15 = v23;
    dword_1C0327260 = v15;
    if ( v22 > dword_1C0327268 )
      v14 = v22;
    dword_1C032726C = v23;
    dword_1C032725C = v14;
    dword_1C0327268 = v22;
    if ( !v49 )
    {
      if ( v50 > dword_1C0327224 )
      {
        v3 = v9;
        qword_1C0326EE8 = v47;
        qword_1C0326F00 = v48;
        dword_1C0326ECC = v51;
        dword_1C0327224 = v50;
        dword_1C0327230 = v9;
        v52 = v50;
      }
      v7 = 1;
      v49 = 1;
    }
    goto LABEL_27;
  }
LABEL_28:
  v31 = v3 - v1;
  v32 = dword_1C0327224 - 1;
  v33 = dword_1C0326ECC - v31;
  v34 = qword_1C0326EE8 - 128;
  v35 = dword_1C0327228;
  v36 = qword_1C0326F00 - 32;
  dword_1C0327240 = v31;
  v37 = 1;
  dword_1C0326EC8 = dword_1C0326ECC - v31;
  dword_1C032723C = dword_1C0326ECC - v31;
  qword_1C0326EE0 = qword_1C0326EE8 - 128;
  qword_1C0327248 = qword_1C0326EE8 - 128;
  qword_1C0326EF8 = qword_1C0326F00 - 32;
  qword_1C0327250 = qword_1C0326F00 - 32;
  if ( dword_1C0327224 - 1 < dword_1C0327228 )
  {
LABEL_33:
    v41 = v52;
    goto LABEL_45;
  }
  v38 = v31;
  while ( 1 )
  {
    v39 = blueloop(v37);
    v7 = v49;
    if ( v39 )
    {
      if ( !v49 )
      {
        v7 = 1;
        dword_1C0327224 = v32;
        v49 = 1;
        qword_1C0326EE8 = v34;
        qword_1C0326F00 = v36;
        dword_1C0326ECC = v33;
        dword_1C0327230 = v31;
        v44 = v32;
      }
      v40 = v38;
      goto LABEL_32;
    }
    v40 = v38;
    if ( v49 )
      break;
LABEL_32:
    qword_1C0326EE0 -= 128LL;
    v31 = v40 - v1;
    dword_1C0326EC8 -= v31;
    v33 -= v31;
    qword_1C0326EF8 -= 32LL;
    v34 -= 128LL;
    v36 -= 32LL;
    qword_1C0327248 = v34;
    --v32;
    qword_1C0327250 = v36;
    v37 = 0;
    dword_1C0327240 = v31;
    dword_1C032723C = v33;
    v38 = v31;
    if ( v32 < v35 )
      goto LABEL_33;
  }
  v41 = v32 + 1;
LABEL_45:
  if ( v7 )
  {
    v42 = dword_1C032722C;
    if ( v44 < dword_1C0327234 )
      v42 = v44;
    dword_1C0327234 = v44;
    dword_1C032722C = v42;
    if ( v41 > dword_1C0327238 )
      v35 = v41;
    dword_1C0327238 = v41;
    dword_1C0327228 = v35;
  }
  return v7;
}
