/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C02A9540
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02BE234 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02BE394 (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  unsigned int v3; // edi
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned int v6; // r13d
  int v7; // eax
  int v8; // r12d
  unsigned int v9; // edi
  int v10; // esi
  int v11; // eax
  unsigned int v12; // r14d
  int v13; // r14d
  int v14; // r10d
  int v15; // r15d
  int *v16; // rdx
  __int64 i; // r11
  unsigned int v18; // r10d
  int v19; // r15d
  int v20; // esi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ecx
  int v25; // r11d
  int *v26; // r9
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // [rsp+20h] [rbp-30h] BYREF
  __int64 v30; // [rsp+28h] [rbp-28h]
  unsigned int v31; // [rsp+30h] [rbp-20h]
  unsigned int v32; // [rsp+34h] [rbp-1Ch]
  unsigned int v33; // [rsp+38h] [rbp-18h]
  unsigned int v34; // [rsp+3Ch] [rbp-14h]
  int v35; // [rsp+A0h] [rbp+50h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 10);
  v4 = (*v1 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
  v5 = (*(_BYTE *)v1 * *((_BYTE *)a1 + 48)) & 3;
  v6 = (*((_DWORD *)a1 + 12) * v1[2]) & 0xFFFFFFFC;
  v7 = v4 - *((_DWORD *)a1 + 8);
  v35 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v8 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3];
  if ( v7 >= 0 )
    v9 = v7 % v3;
  else
    v9 = v3 - ~v7 % v3 - 1;
  v10 = v1[1];
  v11 = v10 - *((_DWORD *)a1 + 9);
  v12 = *((_DWORD *)a1 + 11);
  if ( v11 >= 0 )
    v13 = v11 % v12;
  else
    v13 = v12 - ~v11 % v12 - 1;
  v14 = v8 & aulLeftMask[v5];
  if ( v4 != v6 )
  {
    v14 = aulLeftMask[v5];
    if ( ((*(_BYTE *)v1 * *((_BYTE *)a1 + 48)) & 3) == 0 )
      goto LABEL_16;
  }
  v31 = v9;
  v15 = v13;
  v16 = (int *)(*(_QWORD *)a1 + v4 + (__int64)(*((_DWORD *)a1 + 4) * v10));
  for ( i = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v13; v10 < v1[3]; v16 = (int *)((char *)v16 + *((int *)a1 + 4)) )
  {
    ++v15;
    *v16 = ~v14 & *v16 | v14 & ~*(_DWORD *)(i + v9);
    if ( v15 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v15 = 0;
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
LABEL_16:
    v33 = (v6 - v4) >> 2;
    if ( v6 - v4 >= 4 )
    {
      v18 = *((_DWORD *)a1 + 10);
      v19 = v1[1];
      v20 = v13;
      v21 = v19 * *((_DWORD *)a1 + 4);
      v9 %= v18;
      v32 = v18;
      v31 = v9;
      v34 = v18;
      v22 = v4 + (__int64)v21;
      v23 = *((_DWORD *)a1 + 5) * v13;
      v29 = *(_QWORD *)a1 + v22;
      v30 = *((_QWORD *)a1 + 1) + v23;
      v24 = v1[3];
      if ( (((unsigned __int8)v9 | (unsigned __int8)v18) & 3) != 0 )
      {
        if ( v19 < v24 )
        {
          do
          {
            vFetchShiftNotAndCopy(&v29);
            if ( ++v20 == *((_DWORD *)a1 + 11) )
            {
              v20 = 0;
              v30 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v30 += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v19;
            v29 += *((int *)a1 + 4);
            v31 = v9;
          }
          while ( v19 < v1[3] );
        }
      }
      else
      {
        v34 = v18 >> 2;
        if ( v19 < v24 )
        {
          do
          {
            vFetchNotAndCopy(&v29);
            if ( ++v20 == *((_DWORD *)a1 + 11) )
            {
              v20 = 0;
              v30 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v30 += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v19;
            v29 += *((int *)a1 + 4);
          }
          while ( v19 < v1[3] );
        }
      }
    }
    if ( v35 )
    {
      v25 = v1[1];
      v26 = (int *)(*(_QWORD *)a1 + v6 + (__int64)(v25 * *((_DWORD *)a1 + 4)));
      v27 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v13;
      if ( v25 < v1[3] )
      {
        v28 = (v9 + 4 * v33) % *((_DWORD *)a1 + 10);
        do
        {
          ++v13;
          *v26 = *v26 & ~v8 | v8 & ~*(_DWORD *)(v28 + v27);
          if ( v13 == *((_DWORD *)a1 + 11) )
          {
            v27 = *((_QWORD *)a1 + 1);
            v13 = 0;
          }
          else
          {
            v27 += *((int *)a1 + 5);
          }
          ++v25;
          v26 = (int *)((char *)v26 + *((int *)a1 + 4));
        }
        while ( v25 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
