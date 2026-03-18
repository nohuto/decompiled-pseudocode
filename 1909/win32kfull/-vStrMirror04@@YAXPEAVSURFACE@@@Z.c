/*
 * XREFs of ?vStrMirror04@@YAXPEAVSURFACE@@@Z @ 0x1C02BBBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStrMirror04(unsigned int **a1)
{
  struct SURFACE *v1; // rsi
  unsigned int *v2; // r15
  int v3; // edx
  int v4; // r8d
  int v5; // ebx
  unsigned int v6; // r13d
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  unsigned int *v10; // r12
  int *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // eax
  int v15; // r8d
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  int v18; // eax
  int v19; // edx
  unsigned int v20; // r11d
  int v21; // r10d
  int v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned int *v24; // [rsp+10h] [rbp-58h]
  int v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h]

  v1 = (struct SURFACE *)a1;
  v2 = a1[10];
  v24 = v2;
  v3 = 0;
  v4 = *((_DWORD *)a1 + 14) / 2;
  v22 = v4;
  v27 = 0;
  if ( *((int *)a1 + 15) > 0 )
  {
    do
    {
      v5 = *((_DWORD *)v1 + 14) - 1;
      v6 = *v2;
      v7 = v5 >> 3;
      v8 = 0;
      v9 = v5 & 7;
      v26 = 0;
      v10 = v2;
      v11 = (int *)&v2[v7];
      v25 = *v11;
      if ( v4 > 0 )
      {
        v12 = 0LL;
        v23 = (unsigned int)v4;
        v13 = (unsigned int)v9;
        do
        {
          if ( v8 == v7 )
          {
            v14 = dword_1C02E37F8[v12];
            v15 = dword_1C02E37D8[v12];
            v16 = v6 & ~v14 | ((v6 & dword_1C02E37F8[v13]) >> dword_1C02E37D8[v13] << v15);
            v17 = (v6 & v14) >> v15;
            v18 = v25;
            v6 = (v17 << dword_1C02E37D8[v13]) | ~dword_1C02E37F8[v13] & v16;
          }
          else
          {
            v19 = dword_1C02E37D8[v12];
            v20 = v6 & dword_1C02E37F8[v12];
            v21 = dword_1C02E37F8[v13];
            v6 = v6 & ~dword_1C02E37F8[v12] | ((v25 & (unsigned int)v21) >> dword_1C02E37D8[v13] << v19);
            v18 = (v20 >> v19 << dword_1C02E37D8[v13]) | v25 & ~v21;
            v25 = v18;
          }
          ++v12;
          --v9;
          --v13;
          if ( (++v26 & 8) != 0 )
          {
            *v10 = v6;
            ++v8;
            ++v10;
            if ( v8 == v7 )
              *v11 = v18;
            v6 = *v10;
            v26 = 0;
            v12 = 0LL;
          }
          if ( v9 < 0 )
          {
            *v11 = v18;
            --v7;
            --v11;
            if ( v7 != v8 )
            {
              v18 = *v11;
              v25 = *v11;
            }
            v9 = 7;
            v13 = 7LL;
          }
          *v10 = v6;
          if ( v8 != v7 )
            *v11 = v18;
          --v23;
        }
        while ( v23 );
        v1 = (struct SURFACE *)a1;
        v2 = v24;
        v3 = v27;
        v4 = v22;
      }
      ++v3;
      v2 = (unsigned int *)((char *)v2 + *((int *)v1 + 22));
      v27 = v3;
      v24 = v2;
    }
    while ( v3 < *((_DWORD *)v1 + 15) );
  }
}
