/*
 * XREFs of ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C0295D60
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C012A440 (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02AC050 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  __int64 v3; // r13
  unsigned int v4; // edi
  int v5; // r15d
  __int64 v7; // r14
  int v8; // r9d
  int v9; // edi
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r12
  signed int v17; // eax
  int v18; // r10d
  int v19; // r11d
  unsigned int v20; // esi
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+28h] [rbp-28h]
  unsigned int v27; // [rsp+30h] [rbp-20h]
  unsigned int v28; // [rsp+34h] [rbp-1Ch]
  unsigned int v29; // [rsp+38h] [rbp-18h]
  unsigned int v30; // [rsp+3Ch] [rbp-14h]
  int v31; // [rsp+98h] [rbp+48h]
  int v32; // [rsp+A0h] [rbp+50h]

  v3 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v5 = a3;
  v7 = *(_QWORD *)a1 + *((_DWORD *)a1 + 4) * a2;
  v8 = a2 - *((_DWORD *)a1 + 9);
  if ( v8 >= 0 )
    v9 = v8 % v4;
  else
    v9 = v4 - ~v8 % v4 - 1;
  v10 = *((_QWORD *)a1 + 1) + v9 * *((_DWORD *)a1 + 5);
  v26 = v10;
  if ( a3 )
  {
    do
    {
      v11 = *((_DWORD *)a1 + 12);
      v12 = *((_DWORD *)a1 + 10);
      v13 = (v11 * *(_DWORD *)v3) & 0xFFFFFFFC;
      v14 = ((_BYTE)v11 * *(_BYTE *)v3) & 3;
      v15 = ((_BYTE)v11 * *(_BYTE *)(v3 + 4)) & 3;
      v16 = (v11 * *(_DWORD *)(v3 + 4)) & 0xFFFFFFFC;
      v32 = ((_BYTE)v11 * *(_BYTE *)(v3 + 4)) & 3;
      v17 = ((v11 * *(_DWORD *)v3) & 0xFFFFFFFC) - *((_DWORD *)a1 + 8);
      v18 = aulLeftMask[v14];
      v19 = ~aulLeftMask[v15];
      v31 = v19;
      if ( v17 >= 0 )
        v20 = v17 % v12;
      else
        v20 = v12 - ~v17 % v12 - 1;
      if ( (_DWORD)v13 == (_DWORD)v16 )
      {
        v27 = v20;
        *(_DWORD *)(v13 + v7) ^= v18 & v19 & *(_DWORD *)(v20 + v10);
      }
      else
      {
        if ( (_DWORD)v14 )
        {
          v27 = v20;
          *(_DWORD *)(v13 + v7) ^= v18 & *(_DWORD *)(v20 + v10);
          LODWORD(v13) = v13 + 4;
          v20 += 4;
        }
        v29 = (unsigned int)(v16 - v13) >> 2;
        if ( (unsigned int)(v16 - v13) >= 4 )
        {
          v21 = *((_DWORD *)a1 + 10);
          v28 = v21;
          v25 = v7 + (unsigned int)v13;
          v20 %= v21;
          v27 = v20;
          v30 = v21;
          if ( (((unsigned __int8)v20 | (unsigned __int8)v21) & 3) != 0 )
          {
            vFetchShiftAndMerge(&v25);
          }
          else
          {
            v30 = v21 >> 2;
            vFetchAndMerge((__int64)&v25);
          }
          v19 = v31;
          v10 = v26;
        }
        if ( v32 )
        {
          v27 = ((int)v20 + 4 * (unsigned __int64)v29) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v16 + v7) ^= v19 & *(_DWORD *)(v27 + v10);
        }
      }
      v22 = *((_DWORD *)a1 + 11);
      v23 = v9 + 1;
      if ( v9 + 1 == v22 )
        v10 = *((_QWORD *)a1 + 1);
      else
        v10 += *((int *)a1 + 5);
      v24 = *((int *)a1 + 4);
      v9 = 0;
      v26 = v10;
      v7 += v24;
      v3 += 8LL;
      if ( v23 != v22 )
        v9 = v23;
      --v5;
    }
    while ( v5 );
  }
}
