/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C02BFBC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     vFetchNotAndCopy @ 0x1C02D0BC4 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02D0D24 (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v2; // r8
  unsigned int v3; // edi
  unsigned int v4; // r9d
  unsigned int v5; // r13d
  int v6; // eax
  int v7; // r10d
  int v8; // r12d
  unsigned int v9; // edi
  int v10; // r11d
  int v11; // eax
  unsigned int v12; // esi
  int v13; // esi
  int v14; // r12d
  int v15; // r14d
  int *v16; // rdx
  __int64 i; // r10
  int v18; // r14d
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ecx
  int v24; // r11d
  int *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r8
  _QWORD v28[6]; // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+98h] [rbp+48h]
  int v30; // [rsp+A0h] [rbp+50h]

  memset(v28, 0, 0x28uLL);
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 10);
  v4 = (*v2 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
  v5 = (*((_DWORD *)a1 + 12) * v2[2]) & 0xFFFFFFFC;
  v30 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3;
  v6 = v4 - *((_DWORD *)a1 + 8);
  v7 = aulLeftMask[(*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3];
  v8 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3];
  v29 = v8;
  if ( v6 >= 0 )
    v9 = v6 % v3;
  else
    v9 = v3 - ~v6 % v3 - 1;
  v10 = v2[1];
  v11 = v10 - *((_DWORD *)a1 + 9);
  v12 = *((_DWORD *)a1 + 11);
  if ( v11 >= 0 )
    v13 = v11 % v12;
  else
    v13 = v12 - ~v11 % v12 - 1;
  if ( v4 != v5 && ((*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3) == 0 )
    goto LABEL_18;
  v14 = v7 & v8;
  LODWORD(v28[2]) = v9;
  v15 = v13;
  if ( v4 != v5 )
    v14 = v7;
  v16 = (int *)(*(_QWORD *)a1 + v4 + (__int64)(*((_DWORD *)a1 + 4) * v10));
  for ( i = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5); v10 < v2[3]; v16 = (int *)((char *)v16 + *((int *)a1 + 4)) )
  {
    ++v15;
    *v16 = *v16 & ~v14 | v14 & ~*(_DWORD *)(i + v9);
    if ( v15 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v15 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v2 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v10;
  }
  if ( v4 != v5 )
  {
    v8 = v29;
    v4 += 4;
    v9 += 4;
LABEL_18:
    LODWORD(v28[3]) = (v5 - v4) >> 2;
    if ( v5 - v4 >= 4 )
    {
      v18 = v2[1];
      HIDWORD(v28[2]) = *((_DWORD *)a1 + 10);
      v19 = *((_DWORD *)a1 + 4) * v18;
      v20 = v13;
      v9 %= HIDWORD(v28[2]);
      LODWORD(v28[2]) = v9;
      HIDWORD(v28[3]) = HIDWORD(v28[2]);
      v21 = v4 + (__int64)v19;
      v22 = v13 * *((_DWORD *)a1 + 5);
      v28[0] = *(_QWORD *)a1 + v21;
      v28[1] = *((_QWORD *)a1 + 1) + v22;
      v23 = v2[3];
      if ( (((unsigned __int8)v9 | BYTE4(v28[2])) & 3) != 0 )
      {
        if ( v18 < v23 )
        {
          do
          {
            vFetchShiftNotAndCopy(v28);
            if ( ++v20 == *((_DWORD *)a1 + 11) )
            {
              v20 = 0;
              v28[1] = *((_QWORD *)a1 + 1);
            }
            else
            {
              v28[1] += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v18;
            v28[0] += *((int *)a1 + 4);
            LODWORD(v28[2]) = v9;
          }
          while ( v18 < v2[3] );
        }
      }
      else
      {
        HIDWORD(v28[3]) = HIDWORD(v28[2]) >> 2;
        if ( v18 < v23 )
        {
          do
          {
            vFetchNotAndCopy(v28);
            if ( ++v20 == *((_DWORD *)a1 + 11) )
            {
              v20 = 0;
              v28[1] = *((_QWORD *)a1 + 1);
            }
            else
            {
              v28[1] += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v18;
            v28[0] += *((int *)a1 + 4);
          }
          while ( v18 < v2[3] );
        }
      }
    }
    if ( v30 )
    {
      v24 = v2[1];
      v25 = (int *)(*(_QWORD *)a1 + v5 + (__int64)(v24 * *((_DWORD *)a1 + 4)));
      v26 = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5);
      if ( v24 < v2[3] )
      {
        v27 = (v9 + 4 * LODWORD(v28[3])) % *((_DWORD *)a1 + 10);
        do
        {
          ++v13;
          *v25 = *v25 & ~v8 | v8 & ~*(_DWORD *)(v27 + v26);
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
          v25 = (int *)((char *)v25 + *((int *)a1 + 4));
        }
        while ( v24 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
