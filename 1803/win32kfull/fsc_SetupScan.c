/*
 * XREFs of fsc_SetupScan @ 0x1C02C351C
 * Callers:
 *     fsc_FillGlyph @ 0x1C02B6618 (fsc_FillGlyph.c)
 * Callees:
 *     FixPointers @ 0x1C02C2CD0 (FixPointers.c)
 */

__int64 __fastcall fsc_SetupScan(
        __int16 *a1,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        __int64 *a10)
{
  int v10; // r11d
  int v11; // r10d
  int v12; // r9d
  char v14; // r8
  __int64 (__fastcall *v15)(int, int); // rax
  __int64 (__fastcall *v16)(int, int); // rax
  __int64 (__fastcall *v17)(int, int); // rax
  unsigned __int64 *v18; // r15
  int v19; // eax
  unsigned __int64 *v20; // rbx
  unsigned __int64 *v22; // rdi
  unsigned __int64 *v23; // r14
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // r10
  unsigned int v26; // r12d
  __int64 v27; // rdx
  __int16 v28; // r8
  __int16 v29; // ax
  __int64 v30; // rax
  unsigned __int64 v31; // r10
  unsigned __int64 *v32; // rsi
  __int16 v33; // r14
  int v34; // edi
  __int64 v35; // rax
  unsigned __int64 *v36; // rbx
  unsigned __int64 *v37; // r8
  unsigned __int64 *v38; // r9
  unsigned __int64 *v39; // r10
  unsigned __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // r11
  __int16 v43; // bp
  __int16 v44; // ax
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  char v52; // [rsp+70h] [rbp+18h]

  v10 = a4;
  v11 = *a1;
  v12 = a1[2];
  dword_1C032FE28 = a1[1];
  dword_1C032FE2C = a1[3];
  dword_1C032FE30 = v11;
  dword_1C032FE34 = v12;
  dword_1C032FE3C = a3;
  dword_1C032FE40 = v10;
  if ( (a2 & 6) == 4 )
  {
    dword_1C032FF32 = 65538;
    v14 = 1;
    if ( a3 != v11 || (v15 = AddHorizSmartScan, v10 != v12) )
      v15 = AddHorizSmartBand;
    qword_1C032FED8 = (__int64)v15;
    v16 = AddVertSmartScan;
  }
  else
  {
    dword_1C032FF32 = 1;
    v14 = 0;
    if ( a3 != v11 || (v17 = AddHorizSimpleScan, v10 != v12) )
      v17 = AddHorizSimpleBand;
    qword_1C032FED8 = (__int64)v17;
    v16 = AddVertSimpleScan;
  }
  v18 = (unsigned __int64 *)qword_1C032FF38;
  qword_1C032FEE0 = (__int64)v16;
  v19 = a3 - v10;
  v20 = (unsigned __int64 *)(v19 * 8 + qword_1C032FF38);
  qword_1C032FF38 = (__int64)v20;
  if ( (unsigned __int64)v20 > qword_1C032FF48 )
  {
    qword_1C032FE58 = 0LL;
    return 6657LL;
  }
  qword_1C032FE58 = (__int64)v18;
  if ( !v18 )
    return 6657LL;
  v22 = &v20[v19];
  qword_1C032FF38 = (__int64)v22;
  if ( (unsigned __int64)v22 > qword_1C032FF48 )
  {
    qword_1C032FE60 = 0LL;
    return 6657LL;
  }
  qword_1C032FE60 = (__int64)v20;
  if ( !v20 )
    return 6657LL;
  v23 = &v22[v19];
  qword_1C032FF38 = (__int64)v23;
  if ( (unsigned __int64)v23 > qword_1C032FF48 )
  {
    qword_1C032FE68 = 0LL;
    return 6657LL;
  }
  qword_1C032FE68 = (__int64)&v20[v19];
  if ( !v22 )
    return 6657LL;
  v24 = &v23[v19];
  qword_1C032FF38 = (__int64)v24;
  if ( (unsigned __int64)v24 > qword_1C032FF48 )
  {
    qword_1C032FE70 = 0LL;
    return 6657LL;
  }
  qword_1C032FE70 = (__int64)&v22[v19];
  if ( !v23 )
    return 6657LL;
  v25 = (unsigned __int64)&v24[v19];
  qword_1C032FF38 = v25;
  if ( v25 > qword_1C032FF48 )
  {
    qword_1C032FE78 = 0LL;
    return 6657LL;
  }
  qword_1C032FE78 = (__int64)&v23[v19];
  if ( !v24 )
    return 6657LL;
  v26 = a9;
  dword_1C032FF28 = a9;
  dword_1C032FF2C = 0;
  if ( a7 > 0x7FFFFFF )
    return 6657LL;
  v52 = v14;
  qword_1C032FF38 = v25 + ((int)((a7 << (v14 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( qword_1C032FF38 > (unsigned __int64)qword_1C032FF48 || !v25 )
    return 6657LL;
  if ( a10 != (__int64 *)a10[4] )
    FixPointers(a10);
  v27 = *a10;
  v28 = 0;
  if ( (__int16)v10 < (__int16)a3 )
  {
    do
    {
      while ( *(__int16 *)v27 <= (__int16)v10 )
      {
        v29 = *(_WORD *)(v27 + 2);
        v27 = *(_QWORD *)(v27 + 8);
        v28 += v29 << v52;
      }
      *v18 = v25;
      LOWORD(v10) = v10 + 1;
      *v22 = v25;
      ++v18;
      ++v22;
      v30 = 2LL * v28;
      v31 = v30 + v25;
      *v20++ = v31;
      *v23 = v31;
      v25 = v30 + v31;
      *v24 = v25;
      ++v23;
      ++v24;
    }
    while ( (__int16)v10 < (__int16)a3 );
    v26 = a9;
  }
  if ( (a2 & 2) == 0 )
  {
    v32 = (unsigned __int64 *)qword_1C032FF40;
    v33 = a1[3];
    v34 = a1[1];
    v35 = v33 - v34;
    v36 = (unsigned __int64 *)(v35 * 8 + qword_1C032FF40);
    qword_1C032FF40 = (__int64)v36;
    if ( (unsigned __int64)v36 > qword_1C032FF50 )
    {
      qword_1C032FE98 = 0LL;
      return 6657LL;
    }
    qword_1C032FE98 = (__int64)v32;
    if ( !v32 )
      return 6657LL;
    v37 = &v36[v35];
    qword_1C032FF40 = (__int64)&v36[v35];
    if ( (unsigned __int64)&v36[v35] > qword_1C032FF50 )
    {
      qword_1C032FEA0 = 0LL;
      return 6657LL;
    }
    qword_1C032FEA0 = (__int64)v36;
    if ( !v36 )
      return 6657LL;
    v38 = &v37[v35];
    qword_1C032FF40 = (__int64)&v37[v35];
    if ( (unsigned __int64)&v37[v35] > qword_1C032FF50 )
    {
      qword_1C032FEA8 = 0LL;
      return 6657LL;
    }
    qword_1C032FEA8 = (__int64)&v36[v35];
    if ( !v37 )
      return 6657LL;
    v39 = &v38[v35];
    qword_1C032FF40 = (__int64)&v38[v35];
    if ( (unsigned __int64)&v38[v35] > qword_1C032FF50 )
    {
      qword_1C032FEB0 = 0LL;
      return 6657LL;
    }
    qword_1C032FEB0 = (__int64)&v37[v35];
    if ( !v38 )
      return 6657LL;
    v40 = (unsigned __int64)&v39[v35];
    qword_1C032FF40 = (__int64)&v39[v35];
    if ( (unsigned __int64)&v39[v35] > qword_1C032FF50 )
    {
      qword_1C032FEB8 = 0LL;
      return 6657LL;
    }
    qword_1C032FEB8 = (__int64)&v38[v35];
    v41 = (__int64)&v39[v35];
    if ( !v39 )
      return 6657LL;
    if ( a5 )
    {
      dword_1C032FE4C = 0x7FFFFFFF;
      v40 += (a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      qword_1C032FF40 = v41 + ((a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v40 > qword_1C032FF50 )
        v41 = 0LL;
      qword_1C032FE50 = v41;
    }
    if ( a8 > 0x7FFFFFF )
      return 6657LL;
    qword_1C032FF40 = v40 + ((int)((a8 << (v52 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( qword_1C032FF40 > (unsigned __int64)qword_1C032FF50 || !v40 )
      return 6657LL;
    v42 = a10[1];
    v43 = 0;
    if ( (__int16)v34 < v33 )
    {
      do
      {
        while ( *(__int16 *)v42 <= (__int16)v34 )
        {
          v44 = *(_WORD *)(v42 + 2);
          v42 = *(_QWORD *)(v42 + 8);
          v43 += v44 << v52;
        }
        *v32 = v40;
        LOWORD(v34) = v34 + 1;
        *v37 = v40;
        ++v32;
        ++v37;
        v45 = 2LL * v43;
        v46 = v45 + v40;
        *v36++ = v46;
        *v38 = v46;
        v40 = v45 + v46;
        *v39 = v40;
        ++v38;
        ++v39;
      }
      while ( (__int16)v34 < a1[3] );
      v26 = a9;
    }
    if ( (a2 & 4) != 0 )
    {
      if ( v26 >= 0x10000000 )
        return 6657LL;
      v47 = qword_1C032FF40;
      v48 = (int)(4 * v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v49 = v48 + qword_1C032FF40;
      qword_1C032FF40 = v49;
      if ( v49 > qword_1C032FF50 )
      {
        qword_1C032FF18 = 0LL;
        return 6657LL;
      }
      qword_1C032FF18 = v47;
      if ( !v47 )
        return 6657LL;
      qword_1C032FF40 = v49 + v48;
      if ( v49 + v48 > qword_1C032FF50 )
      {
        qword_1C032FF20 = 0LL;
        return 6657LL;
      }
      qword_1C032FF20 = v49;
      if ( !v49 )
        return 6657LL;
    }
  }
  return 0LL;
}
