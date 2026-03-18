/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C014EA30
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C014EBCC (vFetchAndMerge.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     vFetchShiftAndMerge @ 0x1C02D0CB0 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v2; // r8
  unsigned int v3; // edi
  unsigned int v4; // r9d
  unsigned int v5; // r12d
  __int64 v6; // r13
  int v7; // eax
  int v8; // r11d
  int v9; // r15d
  unsigned int v10; // edi
  int v11; // r10d
  int v12; // eax
  unsigned int v13; // esi
  int v14; // esi
  int v15; // r14d
  int v16; // eax
  int v17; // r15d
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  int v21; // r14d
  int v22; // r11d
  _DWORD *v23; // rcx
  __int64 i; // rdx
  int v25; // r10d
  _DWORD *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  _QWORD v29[6]; // [rsp+20h] [rbp-30h] BYREF
  int v30; // [rsp+80h] [rbp+30h]

  memset(v29, 0, 0x28uLL);
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 10);
  v4 = (*v2 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
  v5 = (*((_DWORD *)a1 + 12) * v2[2]) & 0xFFFFFFFC;
  v6 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3;
  v7 = v4 - *((_DWORD *)a1 + 8);
  v8 = aulLeftMask[(*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3];
  v9 = ~aulLeftMask[v6];
  v30 = v9;
  if ( v7 < 0 )
    v10 = v3 - ~v7 % v3 - 1;
  else
    v10 = v7 % v3;
  v11 = v2[1];
  v12 = v11 - *((_DWORD *)a1 + 9);
  v13 = *((_DWORD *)a1 + 11);
  if ( v12 < 0 )
    v14 = v13 - ~v12 % v13 - 1;
  else
    v14 = v12 % v13;
  if ( v4 != v5 && ((*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3) == 0 )
    goto LABEL_7;
  LODWORD(v29[2]) = v10;
  v21 = v9 & v8;
  if ( v4 != v5 )
    v21 = v8;
  v22 = v14;
  v23 = (_DWORD *)(*(_QWORD *)a1 + v4 + (__int64)(*((_DWORD *)a1 + 4) * v11));
  for ( i = *((_QWORD *)a1 + 1) + v14 * *((_DWORD *)a1 + 5); v11 < v2[3]; v23 = (_DWORD *)((char *)v23 + *((int *)a1 + 4)) )
  {
    ++v22;
    *v23 ^= v21 & *(_DWORD *)(v10 + i);
    if ( v22 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v22 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v2 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v11;
  }
  if ( v4 != v5 )
  {
    v4 += 4;
    v10 += 4;
LABEL_7:
    LODWORD(v29[3]) = (v5 - v4) >> 2;
    if ( v5 - v4 >= 4 )
    {
      v15 = v2[1];
      HIDWORD(v29[2]) = *((_DWORD *)a1 + 10);
      v16 = *((_DWORD *)a1 + 4) * v15;
      v17 = v14;
      v10 %= HIDWORD(v29[2]);
      LODWORD(v29[2]) = v10;
      HIDWORD(v29[3]) = HIDWORD(v29[2]);
      v18 = v4 + (__int64)v16;
      v19 = v14 * *((_DWORD *)a1 + 5);
      v29[0] = *(_QWORD *)a1 + v18;
      v29[1] = *((_QWORD *)a1 + 1) + v19;
      v20 = v2[3];
      if ( (((unsigned __int8)v10 | BYTE4(v29[2])) & 3) != 0 )
      {
        if ( v15 < v20 )
        {
          do
          {
            vFetchShiftAndMerge(v29);
            if ( ++v17 == *((_DWORD *)a1 + 11) )
            {
              v17 = 0;
              v29[1] = *((_QWORD *)a1 + 1);
            }
            else
            {
              v29[1] += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v15;
            v29[0] += *((int *)a1 + 4);
            LODWORD(v29[2]) = v10;
          }
          while ( v15 < v2[3] );
        }
      }
      else
      {
        HIDWORD(v29[3]) = HIDWORD(v29[2]) >> 2;
        if ( v15 < v20 )
        {
          do
          {
            vFetchAndMerge(v29);
            if ( ++v17 == *((_DWORD *)a1 + 11) )
            {
              v17 = 0;
              v29[1] = *((_QWORD *)a1 + 1);
            }
            else
            {
              v29[1] += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v15;
            v29[0] += *((int *)a1 + 4);
          }
          while ( v15 < v2[3] );
        }
      }
    }
    if ( (_DWORD)v6 )
    {
      v25 = v2[1];
      v26 = (_DWORD *)(*(_QWORD *)a1 + v5 + (__int64)(v25 * *((_DWORD *)a1 + 4)));
      v27 = *((_QWORD *)a1 + 1) + v14 * *((_DWORD *)a1 + 5);
      v28 = (v10 + 4 * LODWORD(v29[3])) % *((_DWORD *)a1 + 10);
      if ( v25 < v2[3] )
      {
        do
        {
          ++v14;
          *v26 ^= v30 & *(_DWORD *)(v28 + v27);
          if ( v14 == *((_DWORD *)a1 + 11) )
          {
            v27 = *((_QWORD *)a1 + 1);
            v14 = 0;
          }
          else
          {
            v27 += *((int *)a1 + 5);
          }
          ++v25;
          v26 = (_DWORD *)((char *)v26 + *((int *)a1 + 4));
        }
        while ( v25 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
