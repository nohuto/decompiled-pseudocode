/*
 * XREFs of MiFindPagesForMdl @ 0x140011954
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocateMdlPagesByLists @ 0x140029924 (MiAllocateMdlPagesByLists.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 */

unsigned __int64 __fastcall MiFindPagesForMdl(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int16 a9)
{
  __int64 v9; // rbp
  int v10; // r14d
  _WORD *v11; // rax
  _WORD *v12; // rsi
  unsigned __int64 v13; // rdi
  _WORD *v14; // rcx
  int v15; // ebx
  unsigned __int64 v16; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r10
  unsigned __int64 v21; // r15
  unsigned int v22; // r12d
  __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  unsigned int v25; // ecx
  int v26; // r8d
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r14
  bool v29; // cf
  _WORD v30[2]; // [rsp+60h] [rbp-88h] BYREF
  int v31; // [rsp+64h] [rbp-84h]
  __int64 v32; // [rsp+68h] [rbp-80h]
  __int64 v33; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-70h]
  unsigned __int64 v35; // [rsp+80h] [rbp-68h]
  unsigned __int64 v36; // [rsp+88h] [rbp-60h]
  unsigned __int64 v37; // [rsp+90h] [rbp-58h]
  unsigned int v40; // [rsp+100h] [rbp+18h]

  v9 = a2;
  v10 = a1;
  v36 = qword_14043F5C8;
  v11 = 0LL;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    if ( (a3 & 2) == 0 )
    {
      v12 = (char *)qword_14043B110 + 2 * a9 * (unsigned __int16)KeNumberNodes;
      v11 = &v12[(unsigned __int16)KeNumberNodes];
      goto LABEL_4;
    }
    v30[0] = a9;
  }
  else
  {
    a3 &= ~2u;
    v30[0] = 0;
  }
  v12 = v30;
LABEL_4:
  v13 = *(unsigned int *)(a2 + 40);
  v14 = v12 + 1;
  if ( v12 != v30 )
    v14 = v11;
  v15 = a3 | 0x4000000;
  v37 = (unsigned __int64)v14;
  if ( (a3 & 0x100) == 0 )
    v15 = a3;
  v16 = v13 >> 12;
  if ( (v15 & 0x10052) == 0x10000 )
  {
    result = MiAllocateMdlPagesByLists(v10, a2, v15, a4, a7, a5 - v16, a9);
    v16 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
    if ( (_DWORD)result == 1 )
      return result;
    v15 &= ~0x10000u;
  }
  v18 = a6;
  v19 = a7;
  v20 = a1;
  v21 = a7;
  v32 = a6;
  v22 = ((KeFeatureBits >> 37) & 1) == 0;
LABEL_12:
  while ( 2 )
  {
    while ( 1 )
    {
      v23 = (unsigned __int16)*v12;
      result = *(_QWORD *)(v20 + 16);
      if ( !*(_QWORD *)(1984 * v23 + result + 1808) )
      {
        if ( (_DWORD)InitializationPhase )
          break;
      }
      if ( (v15 & 0x60) != 0 )
      {
        v33 = -1LL;
        v24 = 0LL;
        result = v15 & 0x40;
        v31 = v15 & 0x40;
        if ( (v15 & 0x40) == 0 )
        {
          if ( a8 )
            v24 = a8;
          else
            v24 = a5 - v16;
          result = MiFindContiguousPages(
                     v20,
                     v18,
                     v21,
                     a8,
                     v24,
                     a4,
                     v23,
                     0x80000000,
                     v15 | 0x60000000u,
                     a2,
                     (__int64)&v33);
          v26 = result;
          goto LABEL_33;
        }
        v25 = v22;
        v26 = -1073741267;
        v40 = v22;
        if ( v22 >= 3 )
          goto LABEL_52;
        v27 = a5 - v16;
        v35 = a5 - v16;
        result = (unsigned __int64)&MiLargePageSizes[v22];
        v34 = result;
        while ( 1 )
        {
          v28 = *(_QWORD *)result;
          if ( v27 >= *(_QWORD *)result && v28 >= a8 )
          {
            result = MiFindContiguousPages(
                       v20,
                       v32,
                       v21,
                       v28,
                       v28,
                       a4,
                       (unsigned __int16)*v12,
                       0x80000000,
                       v15 | 0x60000000u,
                       a2,
                       (__int64)&v33);
            v26 = result;
            if ( (result & 0x80000000) == 0LL )
            {
              v22 = v40;
              v24 = v28;
LABEL_32:
              v18 = v32;
LABEL_33:
              if ( v26 < 0 )
                goto LABEL_51;
              v16 += v24;
              if ( v16 == a5 )
                return result;
              v20 = a1;
              v19 = a7;
              if ( v31 )
                goto LABEL_20;
              v21 = v33 - 1;
              result = v33 - v18;
              v29 = v33 - v18 < v24;
              v9 = a2;
              if ( v29 )
                goto LABEL_53;
              goto LABEL_12;
            }
            if ( v28 <= a8 )
              goto LABEL_32;
            v25 = v40;
            result = v34;
            v27 = v35;
            LODWORD(v20) = a1;
          }
          ++v25;
          result += 8LL;
          v40 = v25;
          v34 = result;
          if ( v25 >= 3 )
            goto LABEL_32;
        }
      }
      result = MiFindContiguousPages(
                 v20,
                 v18,
                 v21,
                 0,
                 a5 - v16,
                 a4,
                 v23,
                 0x80000000,
                 v15 | 0x60002000u,
                 v9,
                 (__int64)&v33);
      v16 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
      if ( v16 == a5 )
        return result;
      if ( !a8 || (result = v18 + a8, v18 + a8 <= v18) || result > v36 )
      {
LABEL_51:
        v20 = a1;
LABEL_52:
        v19 = a7;
        break;
      }
      v18 += a8;
      v32 = result;
      if ( v21 + a8 <= v21 || v21 + a8 > v36 )
        v21 = v36;
      else
        v21 += a8;
      v20 = a1;
      v19 = a7;
    }
LABEL_53:
    if ( (v15 & 2) == 0 && (unsigned __int64)++v12 < v37 )
    {
      v18 = a6;
      v21 = v19;
      v32 = a6;
LABEL_20:
      v9 = a2;
      continue;
    }
    return result;
  }
}
