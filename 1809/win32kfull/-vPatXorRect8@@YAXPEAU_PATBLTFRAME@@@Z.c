/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C014AB80
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C014AD18 (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02BE320 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  unsigned int v3; // esi
  unsigned int v4; // r9d
  __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 v7; // r13
  int v8; // eax
  unsigned int v9; // esi
  int v10; // r10d
  int v11; // eax
  unsigned int v12; // edi
  int v13; // edi
  int v14; // r11d
  int v15; // r15d
  int v16; // eax
  int v17; // r14d
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  int v21; // r14d
  _DWORD *v22; // rcx
  __int64 i; // rdx
  int v24; // r10d
  _DWORD *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-30h] BYREF
  __int64 v29; // [rsp+28h] [rbp-28h]
  unsigned int v30; // [rsp+30h] [rbp-20h]
  unsigned int v31; // [rsp+34h] [rbp-1Ch]
  unsigned int v32; // [rsp+38h] [rbp-18h]
  unsigned int v33; // [rsp+3Ch] [rbp-14h]
  int v34; // [rsp+80h] [rbp+30h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 10);
  v4 = (*v1 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
  v5 = (*(_BYTE *)v1 * *((_BYTE *)a1 + 48)) & 3;
  v6 = (*((_DWORD *)a1 + 12) * v1[2]) & 0xFFFFFFFC;
  v7 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v8 = v4 - *((_DWORD *)a1 + 8);
  v34 = ~aulLeftMask[v7];
  if ( v8 < 0 )
    v9 = v3 - ~v8 % v3 - 1;
  else
    v9 = v8 % v3;
  v10 = v1[1];
  v11 = v10 - *((_DWORD *)a1 + 9);
  v12 = *((_DWORD *)a1 + 11);
  if ( v11 < 0 )
    v13 = v12 - ~v11 % v12 - 1;
  else
    v13 = v11 % v12;
  v14 = ~aulLeftMask[v7] & aulLeftMask[v5];
  if ( v4 != v6 )
  {
    v14 = aulLeftMask[v5];
    if ( ((*(_BYTE *)v1 * *((_BYTE *)a1 + 48)) & 3) == 0 )
      goto LABEL_7;
  }
  v30 = v9;
  v21 = v13;
  v22 = (_DWORD *)(*(_QWORD *)a1 + v4 + (__int64)(*((_DWORD *)a1 + 4) * v10));
  for ( i = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v13; v10 < v1[3]; v22 = (_DWORD *)((char *)v22 + *((int *)a1 + 4)) )
  {
    ++v21;
    *v22 ^= v14 & *(_DWORD *)(v9 + i);
    if ( v21 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v21 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v1 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v10;
  }
  if ( v4 != v6 )
  {
    v4 += 4;
    v9 += 4;
LABEL_7:
    v32 = (v6 - v4) >> 2;
    if ( v6 - v4 >= 4 )
    {
      v15 = v1[1];
      v31 = *((_DWORD *)a1 + 10);
      v16 = *((_DWORD *)a1 + 4) * v15;
      v17 = v13;
      v9 %= v31;
      v30 = v9;
      v33 = v31;
      v18 = v4 + (__int64)v16;
      v19 = *((_DWORD *)a1 + 5) * v13;
      v28 = *(_QWORD *)a1 + v18;
      v29 = *((_QWORD *)a1 + 1) + v19;
      v20 = v1[3];
      if ( (((unsigned __int8)v9 | (unsigned __int8)v31) & 3) != 0 )
      {
        if ( v15 < v20 )
        {
          do
          {
            vFetchShiftAndMerge(&v28);
            if ( ++v17 == *((_DWORD *)a1 + 11) )
            {
              v17 = 0;
              v29 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v29 += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v15;
            v28 += *((int *)a1 + 4);
            v30 = v9;
          }
          while ( v15 < v1[3] );
        }
      }
      else
      {
        v33 = v31 >> 2;
        if ( v15 < v20 )
        {
          do
          {
            vFetchAndMerge(&v28);
            if ( ++v17 == *((_DWORD *)a1 + 11) )
            {
              v17 = 0;
              v29 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v29 += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v15;
            v28 += *((int *)a1 + 4);
          }
          while ( v15 < v1[3] );
        }
      }
    }
    if ( (_DWORD)v7 )
    {
      v24 = v1[1];
      v25 = (_DWORD *)(*(_QWORD *)a1 + v6 + (__int64)(v24 * *((_DWORD *)a1 + 4)));
      v26 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v13;
      v27 = (v9 + 4 * v32) % *((_DWORD *)a1 + 10);
      if ( v24 < v1[3] )
      {
        do
        {
          ++v13;
          *v25 ^= v34 & *(_DWORD *)(v27 + v26);
          if ( v13 == *((_DWORD *)a1 + 11) )
          {
            v26 = *((_QWORD *)a1 + 1);
            v13 = 0;
          }
          else
          {
            v26 += *((int *)a1 + 5);
          }
          ++v24;
          v25 = (_DWORD *)((char *)v25 + *((int *)a1 + 4));
        }
        while ( v24 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
