/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00DC4C0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndCopy @ 0x1C00DC644 (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C02ABFDC (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  int v1; // eax
  _DWORD *v2; // r8
  unsigned int v4; // edi
  int v5; // r9d
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // r9d
  int v10; // eax
  int v11; // r12d
  unsigned int v12; // edi
  int v13; // esi
  int v14; // eax
  unsigned int v15; // r15d
  int v16; // r15d
  int v17; // edx
  int v18; // r14d
  int v19; // eax
  int v20; // esi
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ecx
  int v24; // r14d
  int *v25; // r10
  __int64 v26; // r11
  int v27; // ecx
  int v28; // r11d
  int *v29; // r9
  __int64 v30; // r10
  __int64 v31; // rdi
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // [rsp+20h] [rbp-38h] BYREF
  __int64 v35; // [rsp+28h] [rbp-30h]
  unsigned int v36; // [rsp+30h] [rbp-28h]
  unsigned int v37; // [rsp+34h] [rbp-24h]
  unsigned int v38; // [rsp+38h] [rbp-20h]
  unsigned int v39; // [rsp+3Ch] [rbp-1Ch]
  int v40; // [rsp+A0h] [rbp+48h]
  int v41; // [rsp+B8h] [rbp+60h]

  v1 = *((_DWORD *)a1 + 12);
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 10);
  v5 = v1 * *v2;
  v6 = (v1 * v2[2]) & 0xFFFFFFFC;
  v7 = ((_BYTE)v1 * *((_BYTE *)v2 + 8)) & 3;
  v41 = ((_BYTE)v1 * *((_BYTE *)v2 + 8)) & 3;
  v8 = v5 & 3;
  v9 = v5 & 0xFFFFFFFC;
  v10 = v9 - *((_DWORD *)a1 + 8);
  v11 = ~aulLeftMask[v7];
  if ( v10 < 0 )
    v12 = v4 - ~v10 % v4 - 1;
  else
    v12 = v10 % v4;
  v13 = v2[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  v15 = *((_DWORD *)a1 + 11);
  if ( v14 < 0 )
    v16 = v15 - ~v14 % v15 - 1;
  else
    v16 = v14 % v15;
  v17 = v11 & aulLeftMask[v8];
  if ( v9 != v6 )
  {
    v17 = aulLeftMask[v8];
    if ( !(_DWORD)v8 )
      goto LABEL_7;
  }
  v36 = v12;
  v24 = v16;
  v25 = (int *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v26 = *((_QWORD *)a1 + 1) + v16 * *((_DWORD *)a1 + 5);
  while ( v13 < v2[3] )
  {
    *v25 = ~v17 & *v25 | v17 & *(_DWORD *)(v26 + v12);
    v27 = v24 + 1;
    v40 = *((_DWORD *)a1 + 11);
    if ( v24 + 1 == v40 )
      v26 = *((_QWORD *)a1 + 1);
    else
      v26 += *((int *)a1 + 5);
    v24 = 0;
    v2 = (_DWORD *)*((_QWORD *)a1 + 3);
    v25 = (int *)((char *)v25 + *((int *)a1 + 4));
    ++v13;
    if ( v27 != v40 )
      v24 = v27;
  }
  if ( v9 != v6 )
  {
    v9 += 4;
    v12 += 4;
LABEL_7:
    v38 = (v6 - v9) >> 2;
    if ( v6 - v9 >= 4 )
    {
      v18 = v2[1];
      v37 = *((_DWORD *)a1 + 10);
      v19 = *((_DWORD *)a1 + 4) * v18;
      v20 = v16;
      v12 %= v37;
      v36 = v12;
      v39 = v37;
      v21 = v9 + (__int64)v19;
      v22 = v16 * *((_DWORD *)a1 + 5);
      v34 = *(_QWORD *)a1 + v21;
      v35 = *((_QWORD *)a1 + 1) + v22;
      v23 = v2[3];
      if ( (((unsigned __int8)v12 | (unsigned __int8)v37) & 3) != 0 )
      {
        if ( v18 < v23 )
        {
          do
          {
            vFetchShiftAndCopy(&v34);
            if ( ++v20 == *((_DWORD *)a1 + 11) )
            {
              v20 = 0;
              v35 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v35 += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v18;
            v34 += *((int *)a1 + 4);
            v36 = v12;
          }
          while ( v18 < v2[3] );
        }
      }
      else
      {
        v39 = v37 >> 2;
        if ( v18 < v23 )
        {
          do
          {
            vFetchAndCopy(&v34);
            if ( ++v20 == *((_DWORD *)a1 + 11) )
            {
              v20 = 0;
              v35 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v35 += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v18;
            v34 += *((int *)a1 + 4);
          }
          while ( v18 < v2[3] );
        }
      }
    }
    if ( v41 )
    {
      v28 = v2[1];
      v29 = (int *)(*(_QWORD *)a1 + v6 + (__int64)(v28 * *((_DWORD *)a1 + 4)));
      v30 = *((_QWORD *)a1 + 1) + v16 * *((_DWORD *)a1 + 5);
      if ( v28 < v2[3] )
      {
        v31 = (v12 + 4 * v38) % *((_DWORD *)a1 + 10);
        do
        {
          *v29 = *v29 & ~v11 | v11 & *(_DWORD *)(v31 + v30);
          v32 = v16 + 1;
          v33 = *((_DWORD *)a1 + 11);
          if ( v16 + 1 == v33 )
            v30 = *((_QWORD *)a1 + 1);
          else
            v30 += *((int *)a1 + 5);
          v16 = 0;
          v29 = (int *)((char *)v29 + *((int *)a1 + 4));
          ++v28;
          if ( v32 != v33 )
            v16 = v32;
        }
        while ( v28 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
