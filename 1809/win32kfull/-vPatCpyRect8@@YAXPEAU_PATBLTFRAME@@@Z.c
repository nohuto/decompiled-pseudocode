/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00F57C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02BE118 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 *     vFetchShiftAndCopy @ 0x1C02BE2AC (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // r13d
  int v7; // eax
  __int64 v8; // rdi
  int v9; // r11d
  int v10; // eax
  unsigned int v11; // esi
  int v12; // esi
  int v13; // r9d
  __int64 v14; // r11
  __int64 v15; // r9
  int v16; // r15d
  int v17; // r14d
  int v18; // eax
  int v19; // edx
  unsigned int *v20; // r13
  int v21; // eax
  int *v22; // r12
  __int64 v23; // rax
  unsigned int *v24; // rcx
  int *v25; // rdx
  int *v26; // r9
  int *v27; // rax
  int v28; // r14d
  int v29; // eax
  int *v30; // rdx
  __int64 i; // r10
  int *v32; // rax
  int v33; // r10d
  int *v34; // r8
  unsigned int v35; // edx
  __int64 v36; // r9
  int v37; // [rsp+20h] [rbp-38h]
  unsigned int *v38; // [rsp+28h] [rbp-30h] BYREF
  int *v39; // [rsp+30h] [rbp-28h]
  int v40; // [rsp+38h] [rbp-20h]
  unsigned int v41; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v42; // [rsp+40h] [rbp-18h]
  int v43; // [rsp+44h] [rbp-14h]
  unsigned int v44; // [rsp+A0h] [rbp+48h]
  unsigned int v45; // [rsp+B0h] [rbp+58h]
  int v46; // [rsp+B8h] [rbp+60h]

  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 10);
  v4 = (*v2 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
  v5 = (*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3;
  v6 = (*((_DWORD *)a1 + 12) * v2[2]) & 0xFFFFFFFC;
  v44 = v6;
  v7 = v4 - *((_DWORD *)a1 + 8);
  v46 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3;
  v37 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3];
  if ( v7 < 0 )
    LODWORD(v8) = v3 - ~v7 % v3 - 1;
  else
    LODWORD(v8) = v7 % v3;
  v9 = v2[1];
  v10 = v9 - *((_DWORD *)a1 + 9);
  v11 = *((_DWORD *)a1 + 11);
  if ( v10 < 0 )
    v12 = v11 - ~v10 % v11 - 1;
  else
    v12 = v10 % v11;
  v13 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v2 + 8)) & 3] & aulLeftMask[v5];
  if ( v4 != v6 )
  {
    v13 = aulLeftMask[v5];
    if ( ((*(_BYTE *)v2 * *((_BYTE *)a1 + 48)) & 3) == 0 )
      goto LABEL_7;
  }
  v28 = v12;
  v29 = v9 * *((_DWORD *)a1 + 4);
  v40 = v8;
  v30 = (int *)(*(_QWORD *)a1 + v4 + (__int64)v29);
  for ( i = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v12; v9 < v2[3]; v30 = (int *)((char *)v30 + *((int *)a1 + 4)) )
  {
    ++v28;
    *v30 = ~v13 & *v30 | v13 & *(_DWORD *)((unsigned int)v8 + i);
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
    ++v9;
  }
  if ( v4 != v6 )
  {
    v4 += 4;
    LODWORD(v8) = v8 + 4;
LABEL_7:
    v14 = (v6 - v4) >> 2;
    v42 = (v6 - v4) >> 2;
    if ( v6 - v4 >= 4 )
    {
      v15 = *((unsigned int *)a1 + 10);
      v16 = v2[1];
      v17 = v12;
      v18 = v16 * *((_DWORD *)a1 + 4);
      v8 = (unsigned int)v8 % (unsigned int)v15;
      v19 = v2[3];
      v45 = *((_DWORD *)a1 + 10);
      v41 = v45;
      v40 = v8;
      v20 = (unsigned int *)(*(_QWORD *)a1 + v4 + (__int64)v18);
      v21 = *((_DWORD *)a1 + 5) * v12;
      v38 = v20;
      v43 = v15;
      v22 = (int *)(*((_QWORD *)a1 + 1) + v21);
      v39 = v22;
      if ( (((unsigned __int8)v8 | (unsigned __int8)v15) & 3) != 0 )
      {
        if ( v16 < v19 )
        {
          do
          {
            vFetchShiftAndCopy(&v38);
            if ( ++v17 == *((_DWORD *)a1 + 11) )
            {
              v17 = 0;
              v39 = (int *)*((_QWORD *)a1 + 1);
            }
            else
            {
              v39 = (int *)((char *)v39 + *((int *)a1 + 5));
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v16;
            v38 = (unsigned int *)((char *)v38 + *((int *)a1 + 4));
            v40 = v8;
          }
          while ( v16 < v2[3] );
          LODWORD(v14) = v42;
        }
      }
      else if ( v16 < v19 )
      {
        v23 = (unsigned int)v8;
        do
        {
          v24 = v20;
          v25 = (int *)((char *)v22 + v23);
          if ( (_DWORD)v15 == 8 )
          {
            v32 = v25 + 1;
            if ( (_DWORD)v8 )
              v32 = v22;
            CopyPattern(v20, v14, *v32, *v25);
          }
          else
          {
            v26 = (int *)((char *)v22 + v15);
            while ( v24 < &v20[v14] )
            {
              *v24 = *v25;
              v27 = v25 + 1;
              ++v24;
              v25 = v22;
              if ( v27 != v26 )
                v25 = v27;
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
          v15 = v45;
          v23 = v8;
        }
        while ( v16 < v2[3] );
      }
      v6 = v44;
    }
    if ( v46 )
    {
      v33 = v2[1];
      v34 = (int *)(*(_QWORD *)a1 + v6 + (__int64)(v33 * *((_DWORD *)a1 + 4)));
      v35 = (unsigned int)(v8 + 4 * v14) % *((_DWORD *)a1 + 10);
      v36 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v12;
      if ( v33 < v2[3] )
      {
        do
        {
          ++v12;
          *v34 = *v34 & ~v37 | v37 & *(_DWORD *)(v35 + v36);
          if ( v12 == *((_DWORD *)a1 + 11) )
          {
            v36 = *((_QWORD *)a1 + 1);
            v12 = 0;
          }
          else
          {
            v36 += *((int *)a1 + 5);
          }
          ++v33;
          v34 = (int *)((char *)v34 + *((int *)a1 + 4));
        }
        while ( v33 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
