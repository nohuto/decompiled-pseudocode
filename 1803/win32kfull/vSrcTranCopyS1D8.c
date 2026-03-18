/*
 * XREFs of vSrcTranCopyS1D8 @ 0x1C0126720
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
  int v9; // ebp
  __int64 v10; // r15
  int v11; // r11d
  int v12; // r13d
  int v13; // ebx
  __int64 v14; // rdi
  int v15; // r12d
  char *v16; // r8
  unsigned int v17; // edx
  _BYTE *v18; // r14
  _BYTE *v19; // r9
  int v20; // esi
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  char *v23; // r14
  __int64 v24; // r13
  __int64 v25; // rbp
  char *v26; // r15
  char v27; // cl
  char *v28; // r8
  _BYTE *v29; // r9
  __int64 v30; // rsi
  unsigned __int64 v31; // r10
  int v32; // ecx
  _BYTE *v33; // r9
  __int64 v34; // r10
  char *v35; // rdx
  __int64 v36; // rbx
  char v37; // cl
  _BYTE *v38; // r8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  int v41; // ecx
  int v42; // r11d
  __int64 v43; // rbx
  _BYTE *v44; // r8
  char v45; // dl
  _BYTE *v46; // rcx
  int v48; // [rsp+0h] [rbp-88h]
  _BYTE v49[12]; // [rsp+4h] [rbp-84h]
  char *v50; // [rsp+18h] [rbp-70h]
  __int64 v51; // [rsp+20h] [rbp-68h]
  _BYTE *v52; // [rsp+30h] [rbp-58h]

  v9 = a5;
  v10 = a4;
  v11 = a7;
  v12 = a3;
  v13 = a6;
  *(_DWORD *)&v49[8] = 0;
  v14 = a2;
  v15 = a5 & 7;
  *(_QWORD *)v49 = a5 & 7;
  v16 = (char *)(a4 + (a5 & 0xFFFFFFF8));
  v17 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v18 = (_BYTE *)(a1 + (v14 >> 3));
  v19 = v18;
  v51 = a8 * a7;
  v50 = &v16[v51];
  v20 = v12 - (v17 >> 3);
  v52 = v18;
  LODWORD(v21) = a7 - v17;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    v22 = 0x101010101010101LL * a9;
    v48 = 255 >> (a5 & 7);
    v23 = &v16[v51];
    v24 = (int)v21;
    v25 = v20;
    do
    {
      v26 = &v16[v17];
      LOBYTE(v21) = v48 & *v19;
      if ( (_BYTE)v21 )
      {
        v22 = 0x101010101010101LL * a9;
        v40 = dword_1C02DFEC0[(unsigned __int64)(unsigned __int8)v21 >> 4] | ((unsigned __int64)dword_1C02DFEC0[(unsigned __int8)v48 & *v19 & 0xF] << 32);
        v21 = v22 & v40 | *(_QWORD *)v16 & ~v40;
        *(_QWORD *)v16 = v21;
      }
      v27 = v49[4];
      v28 = v16 + 8;
      v29 = v19 + 1;
      v30 = *(_QWORD *)&v49[4];
      v31 = (unsigned __int64)(v26 - v28 + 7) >> 3;
      if ( v28 > v26 )
        v31 = *(_QWORD *)&v49[4];
      if ( v31 != *(_QWORD *)&v49[4] )
      {
        do
        {
          LOBYTE(v21) = *v29;
          if ( *v29 != v27 )
          {
            v27 = v49[4];
            v39 = dword_1C02DFEC0[(unsigned __int64)(unsigned __int8)*v29 >> 4] | ((unsigned __int64)dword_1C02DFEC0[*v29 & 0xF] << 32);
            v21 = v22 & v39 | *(_QWORD *)v28 & ~v39;
            *(_QWORD *)v28 = v21;
          }
          ++v29;
          v28 += 8;
          ++v30;
        }
        while ( v30 != v31 );
        v23 = v50;
      }
      v16 = &v28[v24];
      v19 = &v29[v25];
    }
    while ( v16 != v23 );
    v11 = a7;
    v13 = a6;
    LODWORD(v14) = a2;
    v18 = v52;
    v9 = a5;
    v15 = a5 & 7;
    v10 = a4;
    v12 = a3;
  }
  v32 = v13 & 7;
  if ( (v13 & 7) != 0 )
  {
    LOBYTE(v21) = v13 ^ v9;
    if ( ((v13 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v21 = v10 + (v13 & 0xFFFFFFFFFFFFFFF8uLL);
      v33 = (_BYTE *)(v21 + v51);
      v34 = v11 - v32;
      v35 = (char *)(a1 + ((__int64)(v13 + (int)v14 - v9) >> 3));
      v36 = v13 & 7;
      do
      {
        v37 = *v35;
        v38 = (_BYTE *)(v36 + v21);
        if ( *v35 == v49[4] )
        {
          v21 += v36;
        }
        else
        {
          do
          {
            if ( v37 < v49[4] )
              *(_BYTE *)v21 = a9;
            v37 *= 2;
            ++v21;
          }
          while ( (_BYTE *)v21 != v38 );
        }
        v21 += v34;
        v35 += v12;
      }
      while ( (_BYTE *)v21 != v33 );
    }
    else
    {
      v41 = v32 - v15;
      if ( v41 > 0 )
      {
        v42 = v11 - v41;
        v21 = v10 + v9;
        v43 = v41;
        v44 = (_BYTE *)(v51 + v21);
        do
        {
          v45 = *v18 << v15;
          v46 = (_BYTE *)(v43 + v21);
          do
          {
            if ( v45 < v49[4] )
              *(_BYTE *)v21 = a9;
            v45 *= 2;
            ++v21;
          }
          while ( (_BYTE *)v21 != v46 );
          v21 += v42;
          v18 += v12;
        }
        while ( (_BYTE *)v21 != v44 );
      }
    }
  }
  return v21;
}
