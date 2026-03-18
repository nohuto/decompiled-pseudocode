/*
 * XREFs of vSrcTranCopyS1D8 @ 0x1C0147230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D8(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9)
{
  int v9; // r15d
  __int64 v10; // r12
  int v11; // r11d
  int v12; // r13d
  int v13; // ebx
  __int64 v14; // rdi
  unsigned int v15; // ebp
  char *v16; // r8
  unsigned int v17; // edx
  _BYTE *v18; // r14
  _BYTE *v19; // r9
  int v20; // esi
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  char *v23; // rbp
  __int64 v24; // r13
  __int64 v25; // r15
  char *v26; // r12
  char *v27; // r8
  _BYTE *v28; // r9
  __int64 v29; // rsi
  unsigned __int64 v30; // r10
  int v31; // ecx
  _BYTE *v32; // r9
  __int64 v33; // r10
  char *v34; // rdx
  __int64 v35; // rbx
  char v36; // cl
  _BYTE *v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  int v40; // r11d
  unsigned __int8 *v41; // rdx
  unsigned __int8 *v42; // r9
  unsigned __int8 *v43; // rcx
  int v45; // [rsp+0h] [rbp-88h]
  char *v46; // [rsp+18h] [rbp-70h]
  __int64 v47; // [rsp+20h] [rbp-68h]

  v9 = a5;
  v10 = a4;
  v11 = a7;
  v12 = a3;
  v13 = a6;
  v14 = a2;
  v15 = a5 & 7;
  v16 = (char *)(a4 + (a5 & 0xFFFFFFF8));
  v17 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v18 = (_BYTE *)(a1 + (v14 >> 3));
  v19 = v18;
  v47 = a8 * a7;
  v46 = &v16[v47];
  v20 = v12 - (v17 >> 3);
  LODWORD(v21) = a7 - v17;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    v22 = 0x101010101010101LL * a9;
    v45 = 255 >> (a5 & 7);
    v23 = &v16[v47];
    v24 = (int)v21;
    v25 = v20;
    do
    {
      v26 = &v16[v17];
      LOBYTE(v21) = v45 & *v19;
      if ( (_BYTE)v21 )
      {
        v22 = 0x101010101010101LL * a9;
        v39 = dword_1C02D2F30[(unsigned __int64)(unsigned __int8)v21 >> 4] | ((unsigned __int64)dword_1C02D2F30[(unsigned __int8)v45 & *v19 & 0xF] << 32);
        v21 = v22 & v39 | *(_QWORD *)v16 & ~v39;
        *(_QWORD *)v16 = v21;
      }
      v27 = v16 + 8;
      v28 = v19 + 1;
      v29 = 0LL;
      v30 = (unsigned __int64)(v26 - v27 + 7) >> 3;
      if ( v27 > v26 )
        v30 = 0LL;
      if ( v30 )
      {
        do
        {
          LOBYTE(v21) = *v28;
          if ( *v28 )
          {
            v38 = dword_1C02D2F30[(unsigned __int64)(unsigned __int8)*v28 >> 4] | ((unsigned __int64)dword_1C02D2F30[*v28 & 0xF] << 32);
            v21 = v22 & v38 | *(_QWORD *)v27 & ~v38;
            *(_QWORD *)v27 = v21;
          }
          ++v28;
          v27 += 8;
          ++v29;
        }
        while ( v29 != v30 );
        v23 = v46;
      }
      v16 = &v27[v24];
      v19 = &v28[v25];
    }
    while ( v16 != v23 );
    v11 = a7;
    v13 = a6;
    LODWORD(v14) = a2;
    v15 = a5 & 7;
    v9 = a5;
    v10 = a4;
    v12 = a3;
  }
  v31 = v13 & 7;
  if ( (v13 & 7) != 0 )
  {
    if ( ((v13 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v21 = v10 + (v13 & 0xFFFFFFFFFFFFFFF8uLL);
      v32 = (_BYTE *)(v21 + v47);
      v33 = v11 - v31;
      v34 = (char *)(a1 + ((__int64)(v13 + (int)v14 - v9) >> 3));
      v35 = v13 & 7;
      do
      {
        v36 = *v34;
        v37 = (_BYTE *)(v35 + v21);
        if ( *v34 )
        {
          do
          {
            if ( v36 < 0 )
              *(_BYTE *)v21 = a9;
            v36 *= 2;
            ++v21;
          }
          while ( (_BYTE *)v21 != v37 );
        }
        else
        {
          v21 += v35;
        }
        v21 += v33;
        v34 += v12;
      }
      while ( (_BYTE *)v21 != v32 );
    }
    else
    {
      LODWORD(v21) = v31 - v15;
      if ( (int)(v31 - v15) > 0 )
      {
        v40 = v11 - v21;
        v41 = (unsigned __int8 *)(v10 + v9);
        v42 = &v41[v47];
        do
        {
          LOBYTE(v21) = *v18 << v15;
          v43 = &v41[(v13 & 7) - (unsigned __int64)v15];
          do
          {
            if ( (v21 & 0x80u) != 0LL )
              *v41 = a9;
            LOBYTE(v21) = 2 * v21;
            ++v41;
          }
          while ( v41 != v43 );
          v41 += v40;
          v18 += v12;
        }
        while ( v41 != v42 );
      }
    }
  }
  return v21;
}
