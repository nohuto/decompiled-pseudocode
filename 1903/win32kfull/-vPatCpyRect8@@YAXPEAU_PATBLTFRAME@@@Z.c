/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00FE6D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02D0F58 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 *     vFetchShiftAndCopy @ 0x1C02D10EC (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // r8d
  unsigned int v5; // r13d
  int v6; // eax
  int v7; // r11d
  int v8; // r14d
  __int64 v9; // rdi
  int v10; // r10d
  int v11; // eax
  unsigned int v12; // esi
  int v13; // esi
  __int64 v14; // r12
  unsigned int v15; // r9d
  int v16; // r15d
  int v17; // r14d
  int v18; // eax
  int v19; // edx
  unsigned int *v20; // r13
  int v21; // eax
  int *v22; // r11
  __int64 v23; // rax
  unsigned int *v24; // rdx
  int *v25; // rcx
  int *v26; // rax
  int v27; // r15d
  int v28; // r11d
  int *v29; // rdx
  __int64 i; // r9
  int *v31; // rax
  int v32; // r10d
  int *v33; // r8
  unsigned int v34; // edx
  __int64 v35; // r9
  int v36; // [rsp+20h] [rbp-38h]
  _QWORD v37[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v38; // [rsp+A0h] [rbp+48h]
  unsigned int v39; // [rsp+B0h] [rbp+58h]
  int v40; // [rsp+B8h] [rbp+60h]

  memset(v37, 0, 0x28uLL);
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 10);
  v4 = (*v2 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
  v5 = (*((_DWORD *)a1 + 12) * v2[2]) & 0xFFFFFFFC;
  v38 = v5;
  v40 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3;
  v6 = v4 - *((_DWORD *)a1 + 8);
  v7 = aulLeftMask[(*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3];
  v8 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3];
  v36 = v8;
  if ( v6 < 0 )
    LODWORD(v9) = v3 - ~v6 % v3 - 1;
  else
    LODWORD(v9) = v6 % v3;
  v10 = v2[1];
  v11 = v10 - *((_DWORD *)a1 + 9);
  v12 = *((_DWORD *)a1 + 11);
  if ( v11 < 0 )
    v13 = v12 - ~v11 % v12 - 1;
  else
    v13 = v11 % v12;
  if ( v4 != v5 && ((*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3) == 0 )
    goto LABEL_7;
  LODWORD(v37[2]) = v9;
  v27 = v7 & v8;
  if ( v4 != v5 )
    v27 = v7;
  v28 = v13;
  v29 = (int *)(*(_QWORD *)a1 + v4 + (__int64)(*((_DWORD *)a1 + 4) * v10));
  for ( i = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5); v10 < v2[3]; v29 = (int *)((char *)v29 + *((int *)a1 + 4)) )
  {
    ++v28;
    *v29 = *v29 & ~v27 | v27 & *(_DWORD *)((unsigned int)v9 + i);
    if ( v28 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v28 = 0;
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
    v4 += 4;
    LODWORD(v9) = v9 + 4;
LABEL_7:
    v14 = (v5 - v4) >> 2;
    LODWORD(v37[3]) = (v5 - v4) >> 2;
    if ( v5 - v4 >= 4 )
    {
      v15 = *((_DWORD *)a1 + 10);
      v16 = v2[1];
      v17 = v13;
      v18 = v16 * *((_DWORD *)a1 + 4);
      v9 = (unsigned int)v9 % v15;
      v19 = v2[3];
      v39 = v15;
      v37[2] = __PAIR64__(v15, v9);
      v20 = (unsigned int *)(*(_QWORD *)a1 + v4 + (__int64)v18);
      v21 = v13 * *((_DWORD *)a1 + 5);
      v37[0] = v20;
      HIDWORD(v37[3]) = v15;
      v22 = (int *)(*((_QWORD *)a1 + 1) + v21);
      v37[1] = v22;
      if ( (((unsigned __int8)v9 | (unsigned __int8)v15) & 3) != 0 )
      {
        if ( v16 < v19 )
        {
          do
          {
            vFetchShiftAndCopy(v37);
            if ( ++v17 == *((_DWORD *)a1 + 11) )
            {
              v17 = 0;
              v37[1] = *((_QWORD *)a1 + 1);
            }
            else
            {
              v37[1] += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v16;
            v37[0] += *((int *)a1 + 4);
            LODWORD(v37[2]) = v9;
          }
          while ( v16 < v2[3] );
          LODWORD(v14) = v37[3];
        }
      }
      else if ( v16 < v19 )
      {
        v23 = (unsigned int)v9;
        do
        {
          v24 = v20;
          v25 = (int *)((char *)v22 + v23);
          if ( v15 == 8 )
          {
            v31 = v25 + 1;
            if ( (_DWORD)v9 )
              v31 = v22;
            CopyPattern(v20, v14, *v31, *v25);
            v15 = v39;
          }
          else
          {
            while ( v24 < &v20[v14] )
            {
              *v24 = *v25;
              v26 = v25 + 1;
              ++v24;
              v25 = v22;
              if ( v26 != (int *)((char *)v22 + v15) )
                v25 = v26;
            }
          }
          if ( ++v17 == *((_DWORD *)a1 + 11) )
          {
            v22 = (int *)*((_QWORD *)a1 + 1);
            v17 = 0;
          }
          else
          {
            v22 = (int *)((char *)v22 + *((int *)a1 + 5));
          }
          ++v16;
          v2 = (_DWORD *)*((_QWORD *)a1 + 3);
          v20 = (unsigned int *)((char *)v20 + *((int *)a1 + 4));
          v23 = v9;
        }
        while ( v16 < v2[3] );
      }
      v5 = v38;
    }
    if ( v40 )
    {
      v32 = v2[1];
      v33 = (int *)(*(_QWORD *)a1 + v5 + (__int64)(v32 * *((_DWORD *)a1 + 4)));
      v34 = (unsigned int)(v9 + 4 * v14) % *((_DWORD *)a1 + 10);
      v35 = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5);
      if ( v32 < v2[3] )
      {
        do
        {
          ++v13;
          *v33 = *v33 & ~v36 | v36 & *(_DWORD *)(v34 + v35);
          if ( v13 == *((_DWORD *)a1 + 11) )
          {
            v35 = *((_QWORD *)a1 + 1);
            v13 = 0;
          }
          else
          {
            v35 += *((int *)a1 + 5);
          }
          ++v32;
          v33 = (int *)((char *)v33 + *((int *)a1 + 4));
        }
        while ( v32 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
