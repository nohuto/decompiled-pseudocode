/*
 * XREFs of ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C0360
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     vFetchNotAndCopy @ 0x1C02D1074 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02D11D4 (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
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
  __int64 v23; // rax
  _QWORD v24[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+90h] [rbp+40h]
  int v26; // [rsp+98h] [rbp+48h]

  memset(v24, 0, 0x28uLL);
  v6 = *((_QWORD *)a1 + 3);
  v7 = *((_DWORD *)a1 + 11);
  v25 = v6;
  v8 = *(_QWORD *)a1 + a2 * *((_DWORD *)a1 + 4);
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v7;
  else
    v10 = v7 - ~v9 % v7 - 1;
  v11 = *((_QWORD *)a1 + 1) + v10 * *((_DWORD *)a1 + 5);
  for ( v24[1] = v11; a3; --a3 )
  {
    v12 = *((_DWORD *)a1 + 12);
    v13 = (v12 * *(_DWORD *)(v6 + 4)) & 0xFFFFFFFC;
    v14 = ((_BYTE)v12 * *(_BYTE *)(v6 + 4)) & 3;
    v15 = ((_BYTE)v12 * *(_BYTE *)v6) & 3;
    v26 = ((_BYTE)v12 * *(_BYTE *)(v6 + 4)) & 3;
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
      LODWORD(v24[2]) = v21;
      *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~(v19 & v18) | v19 & v18 & *(_DWORD *)(v21 + v11);
    }
    else
    {
      if ( (_DWORD)v15 )
      {
        LODWORD(v24[2]) = v21;
        *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~v18 | v18 & ~*(_DWORD *)(v21 + v11);
        LODWORD(v16) = v16 + 4;
        v21 += 4;
      }
      LODWORD(v24[3]) = (unsigned int)(v13 - v16) >> 2;
      if ( (unsigned int)(v13 - v16) >= 4 )
      {
        v22 = *((_DWORD *)a1 + 10);
        v24[0] = v8 + (unsigned int)v16;
        v21 %= v22;
        v24[2] = __PAIR64__(v22, v21);
        HIDWORD(v24[3]) = v22;
        if ( (((unsigned __int8)v21 | (unsigned __int8)v22) & 3) != 0 )
        {
          vFetchShiftNotAndCopy(v24);
        }
        else
        {
          HIDWORD(v24[3]) = v22 >> 2;
          vFetchNotAndCopy(v24);
        }
        v6 = v25;
        v11 = v24[1];
      }
      if ( v26 )
      {
        LODWORD(v24[2]) = ((int)v21 + 4 * (unsigned __int64)LODWORD(v24[3])) % *((unsigned int *)a1 + 10);
        *(_DWORD *)(v13 + v8) = *(_DWORD *)(v13 + v8) & ~v19 | v19 & ~*(_DWORD *)(LODWORD(v24[2]) + v11);
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
    v23 = *((int *)a1 + 4);
    v6 += 8LL;
    v24[1] = v11;
    v8 += v23;
    v25 = v6;
  }
}
