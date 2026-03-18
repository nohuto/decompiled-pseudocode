/*
 * XREFs of ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C00C0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C014EBCC (vFetchAndMerge.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     vFetchShiftAndMerge @ 0x1C02D0CB0 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  __int64 v6; // r13
  unsigned int v7; // edi
  __int64 v8; // r14
  int v9; // esi
  int v10; // edi
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  signed int v18; // eax
  int v19; // r10d
  int v20; // r11d
  unsigned int v21; // esi
  unsigned int v22; // ecx
  _QWORD v23[6]; // [rsp+20h] [rbp-30h] BYREF
  int v24; // [rsp+98h] [rbp+48h]
  int v25; // [rsp+A0h] [rbp+50h]

  memset(v23, 0, 0x28uLL);
  v6 = *((_QWORD *)a1 + 3);
  v7 = *((_DWORD *)a1 + 11);
  v8 = *(_QWORD *)a1 + a2 * *((_DWORD *)a1 + 4);
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v7;
  else
    v10 = v7 - ~v9 % v7 - 1;
  v11 = *((_QWORD *)a1 + 1) + v10 * *((_DWORD *)a1 + 5);
  for ( v23[1] = v11; a3; --a3 )
  {
    v12 = *((_DWORD *)a1 + 12);
    v13 = *((_DWORD *)a1 + 10);
    v14 = (v12 * *(_DWORD *)v6) & 0xFFFFFFFC;
    v15 = ((_BYTE)v12 * *(_BYTE *)v6) & 3;
    v16 = ((_BYTE)v12 * *(_BYTE *)(v6 + 4)) & 3;
    v17 = (v12 * *(_DWORD *)(v6 + 4)) & 0xFFFFFFFC;
    v25 = ((_BYTE)v12 * *(_BYTE *)(v6 + 4)) & 3;
    v18 = ((v12 * *(_DWORD *)v6) & 0xFFFFFFFC) - *((_DWORD *)a1 + 8);
    v19 = aulLeftMask[v15];
    v20 = ~aulLeftMask[v16];
    v24 = v20;
    if ( v18 >= 0 )
      v21 = v18 % v13;
    else
      v21 = v13 - ~v18 % v13 - 1;
    if ( (_DWORD)v14 == (_DWORD)v17 )
    {
      LODWORD(v23[2]) = v21;
      *(_DWORD *)(v14 + v8) ^= v19 & v20 & *(_DWORD *)(v21 + v11);
    }
    else
    {
      if ( (_DWORD)v15 )
      {
        LODWORD(v23[2]) = v21;
        *(_DWORD *)(v14 + v8) ^= v19 & *(_DWORD *)(v21 + v11);
        LODWORD(v14) = v14 + 4;
        v21 += 4;
      }
      LODWORD(v23[3]) = (unsigned int)(v17 - v14) >> 2;
      if ( (unsigned int)(v17 - v14) >= 4 )
      {
        v22 = *((_DWORD *)a1 + 10);
        v23[0] = v8 + (unsigned int)v14;
        v21 %= v22;
        v23[2] = __PAIR64__(v22, v21);
        HIDWORD(v23[3]) = v22;
        if ( (((unsigned __int8)v21 | (unsigned __int8)v22) & 3) != 0 )
        {
          vFetchShiftAndMerge(v23);
        }
        else
        {
          HIDWORD(v23[3]) = v22 >> 2;
          vFetchAndMerge((__int64)v23);
        }
        v20 = v24;
        v11 = v23[1];
      }
      if ( v25 )
      {
        LODWORD(v23[2]) = ((int)v21 + 4 * (unsigned __int64)LODWORD(v23[3])) % *((unsigned int *)a1 + 10);
        *(_DWORD *)(v17 + v8) ^= v20 & *(_DWORD *)(LODWORD(v23[2]) + v11);
      }
    }
    if ( ++v10 == *((_DWORD *)a1 + 11) )
    {
      v11 = *((_QWORD *)a1 + 1);
      v10 = 0;
    }
    else
    {
      v11 += *((int *)a1 + 5);
    }
    v8 += *((int *)a1 + 4);
    v23[1] = v11;
    v6 += 8LL;
  }
}
