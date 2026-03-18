/*
 * XREFs of vSrcTranCopyS1D8 @ 0x1C0142830
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
  int v10; // ebp
  unsigned __int8 v11; // si
  int v12; // r13d
  int v13; // ebx
  __int64 v14; // rdi
  unsigned __int64 *v15; // r11
  int v17; // r12d
  unsigned int v18; // r8d
  int v19; // r9d
  unsigned __int64 *v20; // r14
  unsigned __int8 *v21; // rax
  __int64 v22; // rbp
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v24; // r11
  _BYTE *v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // r10
  int v28; // edx
  int v29; // ebp
  __int64 v30; // rcx
  unsigned __int8 *v31; // r9
  __int64 v32; // rbx
  char *v33; // rcx
  char v34; // dl
  unsigned __int8 *v35; // r8
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  int v38; // ebp
  unsigned __int8 *v39; // rdi
  unsigned __int8 *v40; // r8
  unsigned __int8 *v41; // r10
  unsigned __int8 *v42; // rcx
  int v44; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v46; // [rsp+10h] [rbp-58h]

  v9 = a5;
  v10 = a7;
  v11 = a9;
  v12 = a6;
  v13 = a2;
  v14 = 0x101010101010101LL * a9;
  v15 = (unsigned __int64 *)(a4 + (a5 & 0xFFFFFFF8));
  v44 = a5 & 7;
  v17 = 255 >> (a5 & 7);
  v18 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v19 = a3 - (v18 >> 3);
  v45 = a8 * a7;
  v20 = (unsigned __int64 *)((char *)v15 + v45);
  v21 = (unsigned __int8 *)(a1 + ((__int64)a2 >> 3));
  v46 = v21;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    v22 = v19;
    do
    {
      v23 = (unsigned __int64 *)((char *)v15 + v18);
      if ( ((unsigned __int8)v17 & *v21) != 0 )
      {
        v37 = dword_1C02E4F90[(unsigned __int64)(unsigned __int8)(v17 & *v21) >> 4] | ((unsigned __int64)dword_1C02E4F90[(unsigned __int8)v17 & *v21 & 0xF] << 32);
        *v15 = v14 & v37 | *v15 & ~v37;
      }
      v24 = v15 + 1;
      v25 = v21 + 1;
      v26 = 0LL;
      v27 = (unsigned __int64)((char *)v23 - (char *)v24 + 7) >> 3;
      if ( v24 > v23 )
        v27 = 0LL;
      if ( v27 )
      {
        do
        {
          if ( *v25 )
          {
            v36 = dword_1C02E4F90[(unsigned __int64)(unsigned __int8)*v25 >> 4] | ((unsigned __int64)dword_1C02E4F90[*v25 & 0xF] << 32);
            *v24 = v14 & v36 | *v24 & ~v36;
          }
          ++v25;
          ++v24;
          ++v26;
        }
        while ( v26 != v27 );
      }
      v15 = (unsigned __int64 *)((char *)v24 + (int)(a7 - v18));
      v21 = &v25[v22];
    }
    while ( v15 != v20 );
    v12 = a6;
    v13 = a2;
    v11 = a9;
    v10 = a7;
    v9 = a5;
  }
  v28 = v12 & 7;
  if ( (v12 & 7) != 0 )
  {
    if ( ((v12 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v29 = v10 - v28;
      v30 = (__int64)(v12 + v13 - v9) >> 3;
      v21 = (unsigned __int8 *)(a4 + (v12 & 0xFFFFFFFFFFFFFFF8uLL));
      v31 = &v21[v45];
      v32 = v12 & 7;
      v33 = (char *)(a1 + v30);
      do
      {
        v34 = *v33;
        v35 = &v21[v32];
        if ( *v33 )
        {
          do
          {
            if ( v34 < 0 )
              *v21 = v11;
            v34 *= 2;
            ++v21;
          }
          while ( v21 != v35 );
        }
        else
        {
          v21 += v32;
        }
        v21 += v29;
        v33 += a3;
      }
      while ( v21 != v31 );
    }
    else
    {
      LODWORD(v21) = v28 - v44;
      if ( v28 - v44 > 0 )
      {
        v38 = v10 - (_DWORD)v21;
        v39 = v46;
        v40 = (unsigned __int8 *)(a4 + v9);
        v41 = &v40[v45];
        do
        {
          LOBYTE(v21) = *v39 << v44;
          v42 = &v40[(v12 & 7) - (unsigned __int64)(a5 & 7)];
          do
          {
            if ( (char)v21 < 0 )
              *v40 = v11;
            LOBYTE(v21) = 2 * (_BYTE)v21;
            ++v40;
          }
          while ( v40 != v42 );
          v40 += v38;
          v39 += a3;
        }
        while ( v40 != v41 );
      }
    }
  }
  return (char)v21;
}
