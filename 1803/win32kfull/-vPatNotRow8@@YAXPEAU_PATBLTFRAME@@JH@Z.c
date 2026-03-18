/*
 * XREFs of ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C0295B50
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02ABF64 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02AC0C4 (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  int v5; // r15d
  __int64 v7; // r14
  int v8; // r9d
  int v9; // edi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  int v16; // eax
  int v17; // r8d
  int v18; // r13d
  unsigned int v19; // esi
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
  __int64 v31; // [rsp+90h] [rbp+40h]
  int v32; // [rsp+98h] [rbp+48h]

  v3 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v5 = a3;
  v31 = v3;
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
      v12 = (v11 * *(_DWORD *)(v3 + 4)) & 0xFFFFFFFC;
      v13 = ((_BYTE)v11 * *(_BYTE *)(v3 + 4)) & 3;
      v14 = ((_BYTE)v11 * *(_BYTE *)v3) & 3;
      v32 = ((_BYTE)v11 * *(_BYTE *)(v3 + 4)) & 3;
      v15 = (v11 * *(_DWORD *)v3) & 0xFFFFFFFC;
      v16 = v15 - *((_DWORD *)a1 + 8);
      v17 = aulLeftMask[v14];
      v18 = ~aulLeftMask[v13];
      v19 = *((_DWORD *)a1 + 10);
      if ( v16 >= 0 )
        v20 = v16 % v19;
      else
        v20 = v19 - ~v16 % v19 - 1;
      if ( (_DWORD)v15 == (_DWORD)v12 )
      {
        v27 = v20;
        *(_DWORD *)(v15 + v7) = *(_DWORD *)(v15 + v7) & ~(v18 & v17) | v18 & v17 & *(_DWORD *)(v20 + v10);
      }
      else
      {
        if ( (_DWORD)v14 )
        {
          v27 = v20;
          *(_DWORD *)(v15 + v7) = *(_DWORD *)(v15 + v7) & ~v17 | v17 & ~*(_DWORD *)(v20 + v10);
          LODWORD(v15) = v15 + 4;
          v20 += 4;
        }
        v29 = (unsigned int)(v12 - v15) >> 2;
        if ( (unsigned int)(v12 - v15) >= 4 )
        {
          v21 = *((_DWORD *)a1 + 10);
          v28 = v21;
          v25 = v7 + (unsigned int)v15;
          v20 %= v21;
          v27 = v20;
          v30 = v21;
          if ( (((unsigned __int8)v20 | (unsigned __int8)v21) & 3) != 0 )
          {
            vFetchShiftNotAndCopy(&v25);
          }
          else
          {
            v30 = v21 >> 2;
            vFetchNotAndCopy(&v25);
          }
          v3 = v31;
          v10 = v26;
        }
        if ( v32 )
        {
          v27 = ((int)v20 + 4 * (unsigned __int64)v29) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v12 + v7) = *(_DWORD *)(v12 + v7) & ~v18 | v18 & ~*(_DWORD *)(v27 + v10);
        }
      }
      v22 = *((_DWORD *)a1 + 11);
      v23 = v9 + 1;
      if ( v9 + 1 == v22 )
        v10 = *((_QWORD *)a1 + 1);
      else
        v10 += *((int *)a1 + 5);
      v24 = *((int *)a1 + 4);
      v3 += 8LL;
      v26 = v10;
      v9 = 0;
      v31 = v3;
      v7 += v24;
      if ( v23 != v22 )
        v9 = v23;
      --v5;
    }
    while ( v5 );
  }
}
