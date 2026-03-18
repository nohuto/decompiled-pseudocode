/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C012A2B0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C012A440 (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02AC050 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  int v1; // eax
  _DWORD *v2; // r8
  unsigned int v4; // edi
  int v5; // r9d
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // edi
  int v12; // r11d
  int v13; // eax
  unsigned int v14; // r15d
  int v15; // r15d
  int v16; // r10d
  int v17; // r14d
  int v18; // eax
  int v19; // esi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  int v23; // esi
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  int v26; // r14d
  int v27; // r13d
  int v28; // r10d
  _DWORD *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r11
  int v32; // edx
  int v33; // r8d
  __int64 v34; // [rsp+20h] [rbp-30h] BYREF
  __int64 v35; // [rsp+28h] [rbp-28h]
  unsigned int v36; // [rsp+30h] [rbp-20h]
  unsigned int v37; // [rsp+34h] [rbp-1Ch]
  unsigned int v38; // [rsp+38h] [rbp-18h]
  unsigned int v39; // [rsp+3Ch] [rbp-14h]
  int v40; // [rsp+98h] [rbp+48h]
  int v41; // [rsp+A0h] [rbp+50h]

  v1 = *((_DWORD *)a1 + 12);
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 10);
  v5 = v1 * *v2;
  v6 = (v1 * v2[2]) & 0xFFFFFFFC;
  v7 = ((_BYTE)v1 * *((_BYTE *)v2 + 8)) & 3;
  v40 = ((_BYTE)v1 * *((_BYTE *)v2 + 8)) & 3;
  v8 = v5 & 3;
  v9 = v5 & 0xFFFFFFFC;
  v10 = v9 - *((_DWORD *)a1 + 8);
  v41 = ~aulLeftMask[v7];
  if ( v10 < 0 )
    v11 = v4 - ~v10 % v4 - 1;
  else
    v11 = v10 % v4;
  v12 = v2[1];
  v13 = v12 - *((_DWORD *)a1 + 9);
  v14 = *((_DWORD *)a1 + 11);
  if ( v13 < 0 )
    v15 = v14 - ~v13 % v14 - 1;
  else
    v15 = v13 % v14;
  v16 = ~aulLeftMask[v7] & aulLeftMask[v8];
  if ( v9 != v6 )
  {
    v16 = aulLeftMask[v8];
    if ( !(_DWORD)v8 )
      goto LABEL_7;
  }
  v36 = v11;
  v23 = v15;
  v24 = (_DWORD *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v12));
  v25 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
  if ( v12 < v2[3] )
  {
    do
    {
      v26 = v23 + 1;
      *v24 ^= v16 & *(_DWORD *)(v11 + v25);
      v27 = *((_DWORD *)a1 + 11);
      if ( v23 + 1 == v27 )
        v25 = *((_QWORD *)a1 + 1);
      else
        v25 += *((int *)a1 + 5);
      v23 = 0;
      v2 = (_DWORD *)*((_QWORD *)a1 + 3);
      v24 = (_DWORD *)((char *)v24 + *((int *)a1 + 4));
      ++v12;
      if ( v26 != v27 )
        v23 = v26;
    }
    while ( v12 < v2[3] );
    LODWORD(v7) = v40;
  }
  if ( v9 != v6 )
  {
    v9 += 4;
    v11 += 4;
LABEL_7:
    v38 = (v6 - v9) >> 2;
    if ( v6 - v9 >= 4 )
    {
      v17 = v2[1];
      v37 = *((_DWORD *)a1 + 10);
      v18 = *((_DWORD *)a1 + 4) * v17;
      v19 = v15;
      v11 %= v37;
      v36 = v11;
      v39 = v37;
      v20 = v9 + (__int64)v18;
      v21 = v15 * *((_DWORD *)a1 + 5);
      v34 = *(_QWORD *)a1 + v20;
      v35 = *((_QWORD *)a1 + 1) + v21;
      v22 = v2[3];
      if ( (((unsigned __int8)v11 | (unsigned __int8)v37) & 3) != 0 )
      {
        if ( v17 < v22 )
        {
          do
          {
            vFetchShiftAndMerge(&v34);
            if ( ++v19 == *((_DWORD *)a1 + 11) )
            {
              v19 = 0;
              v35 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v35 += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v17;
            v34 += *((int *)a1 + 4);
            v36 = v11;
          }
          while ( v17 < v2[3] );
        }
      }
      else
      {
        v39 = v37 >> 2;
        if ( v17 < v22 )
        {
          do
          {
            vFetchAndMerge(&v34);
            if ( ++v19 == *((_DWORD *)a1 + 11) )
            {
              v19 = 0;
              v35 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v35 += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v17;
            v34 += *((int *)a1 + 4);
          }
          while ( v17 < v2[3] );
        }
      }
    }
    if ( (_DWORD)v7 )
    {
      v28 = v2[1];
      v29 = (_DWORD *)(*(_QWORD *)a1 + v6 + (__int64)(v28 * *((_DWORD *)a1 + 4)));
      v30 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v28 < v2[3] )
      {
        v31 = (v11 + 4 * v38) % *((_DWORD *)a1 + 10);
        do
        {
          v32 = v15 + 1;
          *v29 ^= v41 & *(_DWORD *)(v31 + v30);
          v33 = *((_DWORD *)a1 + 11);
          if ( v15 + 1 == v33 )
            v30 = *((_QWORD *)a1 + 1);
          else
            v30 += *((int *)a1 + 5);
          v15 = 0;
          v29 = (_DWORD *)((char *)v29 + *((int *)a1 + 4));
          ++v28;
          if ( v32 != v33 )
            v15 = v32;
        }
        while ( v28 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
