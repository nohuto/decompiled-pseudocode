/*
 * XREFs of sbit_Embolden @ 0x1C02B8D68
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02B9DC0 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall sbit_Embolden(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6)
{
  unsigned __int16 v6; // bp
  char *v7; // rsi
  __int64 v8; // r14
  int v9; // eax
  int v10; // r12d
  char v11; // cl
  __int64 v12; // rcx
  char *v13; // r13
  char *v14; // rbx
  unsigned __int64 v15; // r15
  char v16; // dl
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r13
  unsigned __int64 v21; // rsi
  char *v22; // rcx
  char *v23; // rdi
  size_t v24; // r8
  int v25; // r13d
  int v26; // r12d
  char v27; // cl
  int v28; // r10d
  char v29; // r14
  int v30; // r8d
  char v31; // r11
  unsigned int v32; // r9d
  char v33; // cl
  char v34; // dl
  char *v35; // rdi
  unsigned __int64 v36; // r13
  __int64 v37; // rbp
  __int64 v38; // rbx
  size_t v39; // r8
  char *v40; // r14
  char *v41; // r10
  int v42; // ecx
  int v43; // esi
  char v44; // r11
  int v45; // r9d
  int v46; // r8d
  unsigned int v47; // edx
  char *v48; // r10
  char v49; // al
  char *i; // rdi
  char *v51; // rcx
  __int64 v52; // r11
  char v53; // r8
  int v54; // r10d
  int v55; // r9d
  char *v56; // rdx
  char *v57; // rax
  __int64 v58; // r11
  int v59; // ecx
  char v60; // r8
  int v61; // r10d
  int v62; // r9d
  char *v63; // rdx
  char v64; // [rsp+20h] [rbp-78h]
  char v65; // [rsp+20h] [rbp-78h]
  int v66; // [rsp+28h] [rbp-70h]
  unsigned int v67; // [rsp+2Ch] [rbp-6Ch]
  __int64 v68; // [rsp+40h] [rbp-58h]
  char *v69; // [rsp+48h] [rbp-50h]
  char *v70; // [rsp+50h] [rbp-48h]
  char v72; // [rsp+B0h] [rbp+18h]
  char v73; // [rsp+B0h] [rbp+18h]

  if ( !a3 )
    return;
  v6 = a4;
  v7 = a1;
  if ( !a1 )
    return;
  v8 = ((unsigned int)a2 + 7) >> 3;
  v67 = ((unsigned int)a2 + 7) >> 3;
  if ( a5 < 0 )
    v9 = (a5 + a2 + 7) / 8;
  else
    v9 = (a2 - a5 + 7) / 8;
  v10 = a4;
  v11 = a2 - a5;
  v66 = a4;
  if ( a5 < 0 )
    v11 = a5 + a2;
  v12 = v11 & 7;
  v13 = &v7[a4 * (a3 - 1)];
  v70 = v13;
  if ( a6 < 0 )
  {
    v15 = (unsigned __int64)&v7[a4 * (a3 - 1)];
    v14 = &v7[-(a6 * a4)];
  }
  else
  {
    v14 = v7;
    v15 = (unsigned __int64)&v7[a4 * (a3 - a6 - 1)];
  }
  v69 = v14;
  if ( a5 > 0 )
  {
    v16 = byte_1C02E8418[v12];
    v17 = (unsigned __int64)v14;
    v64 = v16;
    if ( (unsigned __int64)v14 > v15 )
      goto LABEL_62;
    v18 = v9;
    v19 = (unsigned int)v8;
    v20 = a4;
    v21 = a4 - (unsigned __int64)(unsigned int)v8;
    v68 = v9;
    while ( 1 )
    {
      v22 = (char *)(v17 + v18);
      v23 = (char *)(v17 + v19 - 1);
      *(v22 - 1) &= v16;
      v24 = v17 + v19 + v21 - (_QWORD)v22;
      if ( (unsigned __int64)v22 > v17 + v19 + v21 )
        v24 = 0LL;
      if ( v24 )
        memset(v22, 0, v24);
      if ( (unsigned __int64)v23 >= v17 )
        break;
LABEL_34:
      v18 = v68;
      v17 += v20;
      v16 = v64;
      if ( v17 > v15 )
        goto LABEL_61;
    }
    v25 = a5;
    v26 = (a5 + 7) / 8;
LABEL_20:
    v27 = *v23;
    v28 = 1;
    v72 = *v23;
    v29 = -1;
LABEL_21:
    v30 = 0;
    if ( v26 < 0 )
      goto LABEL_31;
    v31 = v29;
    v32 = v28;
    while ( 1 )
    {
      if ( (unsigned __int64)&v23[-v30] < v17 )
      {
LABEL_30:
        v25 = a5;
LABEL_31:
        ++v28;
        --v29;
        if ( v28 > v25 )
        {
          *v23-- = v27;
          if ( (unsigned __int64)v23 < v17 )
          {
            v20 = a4;
            goto LABEL_34;
          }
          goto LABEL_20;
        }
        goto LABEL_21;
      }
      if ( v32 <= 7 )
        break;
      if ( v32 + 7 <= 6 )
      {
        v27 = (v23[-v30] << v31) | v72;
        goto LABEL_28;
      }
LABEL_29:
      ++v30;
      v32 -= 8;
      v31 += 8;
      if ( v30 > v26 )
        goto LABEL_30;
    }
    v27 = ((unsigned __int8)v23[-v30] >> (v28 - 8 * v30)) | v72;
LABEL_28:
    v72 = v27;
    goto LABEL_29;
  }
  if ( a5 >= 0 )
    goto LABEL_63;
  v33 = byte_1C02EC8C0[a5 + 24];
  v34 = byte_1C02E8418[a2 & 7];
  v65 = v34;
  v73 = v33;
  if ( (unsigned __int64)v14 > v15 )
    goto LABEL_63;
  v35 = &v14[v8];
  v36 = a4 - (unsigned __int64)(unsigned int)v8;
  v37 = -(__int64)(unsigned int)v8;
  v38 = a4;
  do
  {
    v39 = v36;
    v40 = &v35[v37];
    v35[v37] &= v33;
    *(v35 - 1) &= v34;
    if ( v35 > &v35[v36] )
      v39 = 0LL;
    if ( v39 )
      memset(v35, 0, v39);
    v41 = v35 - 1;
    if ( v40 <= v35 - 1 )
    {
      v42 = -a5;
      v43 = (7 - a5) / 8;
      while ( 1 )
      {
        v44 = *v40;
        v45 = 1;
        if ( v42 < 1 )
          goto LABEL_58;
        do
        {
          v46 = 0;
          if ( v43 < 0 )
            goto LABEL_56;
          v47 = v45;
          do
          {
            v48 = &v40[v46];
            if ( v48 > v35 - 1 )
              break;
            if ( v47 <= 7 )
            {
              v49 = *v48 << v47;
LABEL_53:
              v44 |= v49;
              goto LABEL_54;
            }
            if ( v47 + 7 <= 6 )
            {
              v49 = (unsigned __int8)*v48 >> (8 * v46 - v45);
              goto LABEL_53;
            }
LABEL_54:
            ++v46;
            v47 -= 8;
          }
          while ( v46 <= v43 );
          v42 = -a5;
LABEL_56:
          ++v45;
        }
        while ( v45 <= v42 );
        v41 = v35 - 1;
LABEL_58:
        *v40++ = v44;
        if ( v40 > v41 )
        {
          v38 = a4;
          break;
        }
      }
    }
    v33 = v73;
    v35 += v38;
    v34 = v65;
  }
  while ( (unsigned __int64)&v35[v37] <= v15 );
LABEL_61:
  LODWORD(v8) = v67;
  v13 = v70;
  v10 = v66;
  v7 = a1;
  v14 = v69;
LABEL_62:
  v6 = a4;
LABEL_63:
  if ( a6 <= 0 )
  {
    if ( a6 < 0 )
    {
      while ( 1 )
      {
        v14 -= v6;
        if ( v14 < v7 )
          break;
        if ( v10 )
          memset(v14, 0, v10);
      }
      for ( ; (unsigned __int64)v7 < v15; v7 += v6 )
      {
        v57 = v7;
        if ( (_DWORD)v8 )
        {
          v58 = (unsigned int)v8;
          v59 = -a6;
          do
          {
            v60 = *v57;
            v61 = 1;
            if ( v59 >= 1 )
            {
              v62 = v10;
              do
              {
                v63 = &v57[v62];
                if ( (unsigned __int64)v63 >= v6 + v15 )
                  break;
                v60 |= *v63;
                ++v61;
                v62 += v10;
              }
              while ( v61 <= v59 );
            }
            *v57++ = v60;
            --v58;
          }
          while ( v58 );
        }
      }
    }
  }
  else
  {
    for ( i = (char *)(v6 + v15); i <= v13; i += v6 )
    {
      if ( v10 )
        memset(i, 0, v10);
    }
    for ( ; v13 > v14; v13 -= v6 )
    {
      v51 = v13;
      if ( (_DWORD)v8 )
      {
        v52 = (unsigned int)v8;
        do
        {
          v53 = *v51;
          v54 = 1;
          if ( a6 >= 1 )
          {
            v55 = v10;
            do
            {
              v56 = &v51[-v55];
              if ( v56 < v14 )
                break;
              v53 |= *v56;
              ++v54;
              v55 += v10;
            }
            while ( v54 <= a6 );
          }
          *v51++ = v53;
          --v52;
        }
        while ( v52 );
      }
    }
  }
}
