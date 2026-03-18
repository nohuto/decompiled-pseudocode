/*
 * XREFs of ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02BF6E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     vFetchAndCopy @ 0x1C02D0B54 (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C02D0C3C (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  __int64 v6; // r11
  unsigned int v7; // ebx
  __int64 v8; // r14
  int v9; // esi
  int v10; // ebx
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  int v17; // eax
  int v18; // r8d
  int v19; // r13d
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD v25[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+90h] [rbp+40h]
  int v27; // [rsp+98h] [rbp+48h]

  memset(v25, 0, 0x28uLL);
  v6 = *((_QWORD *)a1 + 3);
  v7 = *((_DWORD *)a1 + 11);
  v26 = v6;
  v8 = *(_QWORD *)a1 + a2 * *((_DWORD *)a1 + 4);
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v7;
  else
    v10 = v7 - ~v9 % v7 - 1;
  v11 = *((_QWORD *)a1 + 1) + v10 * *((_DWORD *)a1 + 5);
  for ( v25[1] = v11; a3; --a3 )
  {
    v12 = *((_DWORD *)a1 + 12);
    v13 = (v12 * *(_DWORD *)(v6 + 4)) & 0xFFFFFFFC;
    v14 = ((_BYTE)v12 * *(_BYTE *)(v6 + 4)) & 3;
    v15 = ((_BYTE)v12 * *(_BYTE *)v6) & 3;
    v27 = ((_BYTE)v12 * *(_BYTE *)(v6 + 4)) & 3;
    v16 = (v12 * *(_DWORD *)v6) & 0xFFFFFFFC;
    v17 = v16 - *((_DWORD *)a1 + 8);
    v18 = aulLeftMask[v15];
    v19 = ~aulLeftMask[v14];
    v20 = *((_DWORD *)a1 + 10);
    if ( v17 >= 0 )
      v21 = v17 % v20;
    else
      v21 = v20 - ~v17 % v20 - 1;
    if ( (_DWORD)v16 == (_DWORD)v13 )
    {
      LODWORD(v25[2]) = v21;
      *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~(v19 & v18) | v19 & v18 & *(_DWORD *)(v21 + v11);
    }
    else
    {
      if ( (_DWORD)v15 )
      {
        LODWORD(v25[2]) = v21;
        *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~v18 | v18 & *(_DWORD *)(v21 + v11);
        LODWORD(v16) = v16 + 4;
        v21 += 4;
      }
      LODWORD(v25[3]) = (unsigned int)(v13 - v16) >> 2;
      if ( (unsigned int)(v13 - v16) >= 4 )
      {
        v22 = *((_DWORD *)a1 + 10);
        v23 = v21 % v22;
        v25[2] = __PAIR64__(v22, v23);
        v25[0] = v8 + (unsigned int)v16;
        v21 %= v22;
        HIDWORD(v25[3]) = v22;
        if ( (((unsigned __int8)v23 | (unsigned __int8)v22) & 3) != 0 )
        {
          vFetchShiftAndCopy(v25);
        }
        else
        {
          HIDWORD(v25[3]) = v22 >> 2;
          vFetchAndCopy(v25, v23);
        }
        v6 = v26;
        v11 = v25[1];
      }
      if ( v27 )
      {
        LODWORD(v25[2]) = ((int)v21 + 4 * (unsigned __int64)LODWORD(v25[3])) % *((unsigned int *)a1 + 10);
        *(_DWORD *)(v13 + v8) = *(_DWORD *)(v13 + v8) & ~v19 | v19 & *(_DWORD *)(LODWORD(v25[2]) + v11);
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
    v24 = *((int *)a1 + 4);
    v6 += 8LL;
    v25[1] = v11;
    v8 += v24;
    v26 = v6;
  }
}
