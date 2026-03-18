/*
 * XREFs of vSrcOpaqCopyS1D4 @ 0x1C0274A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char vSrcOpaqCopyS1D4(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, char a9, ...)
{
  char v9; // r10
  int v11; // r12d
  int v12; // r14d
  __int64 v14; // rdi
  int v15; // edx
  int v16; // ebx
  __int64 v17; // r15
  unsigned int v18; // r10d
  unsigned __int8 *v19; // r8
  int v20; // r9d
  unsigned __int64 v21; // rax
  int v22; // r11d
  _BYTE *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r9
  unsigned __int8 *v27; // r11
  unsigned int v28; // ecx
  _BYTE *v29; // r8
  int v30; // r10d
  char v31; // si
  _BYTE *v32; // r11
  _BYTE *v33; // r15
  int v34; // ebx
  unsigned __int8 v35; // r9
  _BYTE *v36; // rdi
  int v37; // ecx
  unsigned __int64 v38; // rdx
  int v39; // r14d
  _BYTE *v40; // r11
  char v41; // bl
  __int64 v42; // r12
  _BYTE *v43; // rsi
  unsigned __int8 v44; // r9
  int v45; // edi
  unsigned __int64 v46; // rcx
  unsigned __int8 *v47; // r9
  _BYTE *v48; // r8
  int v49; // r14d
  unsigned __int8 *v50; // rbx
  unsigned __int8 v51; // r11
  unsigned int v52; // edx
  unsigned __int64 v53; // rcx
  __int64 v55; // [rsp+8h] [rbp-18h]
  unsigned __int8 *v56; // [rsp+10h] [rbp-10h]
  __int64 v57; // [rsp+60h] [rbp+40h]
  int v59; // [rsp+98h] [rbp+78h]
  int v60; // [rsp+A0h] [rbp+80h]
  __int64 v61; // [rsp+A8h] [rbp+88h]
  va_list va; // [rsp+A8h] [rbp+88h]
  va_list va1; // [rsp+B0h] [rbp+90h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v61 = va_arg(va1, _QWORD);
  v9 = v61;
  v11 = a6;
  v12 = a7;
  LOBYTE(v61) = v61 | (16 * v61);
  BYTE1(v61) = a9 | (16 * v61);
  BYTE3(v61) = a9 | (16 * BYTE1(v61));
  v14 = a2;
  v15 = a5;
  BYTE2(v61) = v9 | (16 * BYTE3(v61));
  v16 = v14 & 7;
  v57 = a3;
  v17 = a3 * (__int64)a8;
  v60 = a6 - a5 + v14;
  v18 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)v14) & 7;
  v19 = (unsigned __int8 *)(a1 + ((__int64)((int)v14 + 7) >> 3));
  v56 = &v19[v17];
  v20 = v16 != 0 ? 8 - v16 : 0;
  LOBYTE(v21) = v20 + v18;
  v22 = a6 - a5 - (v20 + v18);
  if ( v22 > 0 )
  {
    v23 = (_BYTE *)(a4 + ((__int64)(v20 + a5) >> 1));
    v24 = a3 - (v22 >> 3);
    v25 = a7 - (v22 >> 1);
    v26 = (__int64)v22 >> 3;
    v55 = v24;
    do
    {
      v27 = &v19[v26];
      do
      {
        v28 = *v19++;
        *v23 = va[(unsigned __int64)v28 >> 6];
        v23[1] = va[(v28 >> 4) & 3];
        v23[2] = va[(v28 >> 2) & 3];
        LOBYTE(v21) = va[v28 & 3];
        v23[3] = v21;
        v23 += 4;
      }
      while ( v19 != v27 );
      v19 += v55;
      v23 += v25;
    }
    while ( v19 != v56 );
    v15 = a5;
  }
  if ( (v14 & 7) != 0 )
  {
    LOBYTE(v21) = v14 ^ v60;
    v29 = (_BYTE *)(a4 + ((__int64)v15 >> 1));
    if ( (((unsigned int)v14 ^ v60) & 0xFFFFFFF8) == 0 )
    {
      v30 = v18 - v16;
      if ( v30 > 0 )
      {
        v31 = v16 & 0xFE;
        v32 = (_BYTE *)(a1 + (v14 >> 3));
        v33 = &v32[v17];
        v34 = v16 & 1;
        do
        {
          v35 = *v32 << v31;
          v36 = v29;
          v37 = v30;
          if ( v34 )
          {
            v36 = v29 + 1;
            v37 = v30 - 1;
            *v29 ^= (*v29 ^ va[(unsigned __int64)v35 >> 6]) & 0xF;
            v35 *= 4;
          }
          if ( v37 >= 2 )
          {
            v38 = (unsigned __int64)(unsigned int)v37 >> 1;
            v37 -= 2 * ((unsigned int)v37 >> 1);
            do
            {
              v21 = (unsigned __int64)v35 >> 6;
              v35 *= 4;
              LOBYTE(v21) = va[v21];
              *v36++ = v21;
              --v38;
            }
            while ( v38 );
          }
          if ( v37 )
          {
            v21 = (unsigned __int64)v35 >> 6;
            *v36 = va[v21] ^ (*v36 ^ va[v21]) & 0xF;
          }
          v32 += v57;
          v29 += a7;
        }
        while ( v32 != v33 );
      }
      return v21;
    }
    v59 = 8 - v16;
    v39 = 8 - v16;
    v40 = (_BYTE *)(a1 + (v14 >> 3));
    LODWORD(v21) = (9 - v16) >> 1;
    v41 = v14 & 6;
    v42 = a7 - (int)v21;
    v43 = &v40[v17];
    do
    {
      v44 = *v40 << v41;
      v45 = v59;
      if ( (v59 & 1) != 0 )
      {
        v46 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        *v29 ^= (*v29 ^ va[v46]) & 0xF;
        ++v29;
        v45 = v39 - 1;
      }
      for ( ; v45; v45 -= 2 )
      {
        v21 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        LOBYTE(v21) = va[v21];
        *v29++ = v21;
      }
      v40 += v57;
      v29 += v42;
    }
    while ( v40 != v43 );
    v12 = a7;
    v11 = a6;
  }
  if ( v18 )
  {
    v47 = (unsigned __int8 *)(a1 + ((__int64)v60 >> 3));
    v48 = (_BYTE *)(a4 + ((__int64)(int)(v11 - v18) >> 1));
    LODWORD(v21) = (v18 + 1) >> 1;
    v49 = v12 - v21;
    v50 = &v47[v17];
    do
    {
      v51 = *v47;
      v52 = v18;
      if ( v18 >= 2 )
      {
        v53 = (unsigned __int64)v18 >> 1;
        v52 = v18 - 2 * v53;
        do
        {
          v21 = (unsigned __int64)v51 >> 6;
          v51 *= 4;
          LOBYTE(v21) = va[v21];
          *v48++ = v21;
          --v53;
        }
        while ( v53 );
      }
      if ( v52 )
      {
        v21 = (unsigned __int64)v51 >> 6;
        *v48 = va[v21] ^ (*v48 ^ va[v21]) & 0xF;
        ++v48;
      }
      v47 += v57;
      v48 += v49;
    }
    while ( v47 != v50 );
  }
  return v21;
}
