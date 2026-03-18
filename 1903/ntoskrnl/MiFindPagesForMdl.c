/*
 * XREFs of MiFindPagesForMdl @ 0x1400EF844
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400EF404 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiAllocateMdlPagesByLists @ 0x1401569B4 (MiAllocateMdlPagesByLists.c)
 */

unsigned __int64 __fastcall MiFindPagesForMdl(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        ULONG_PTR a7,
        unsigned __int64 a8,
        int a9)
{
  int *v9; // r11
  __int64 v10; // rbp
  int v11; // ebx
  int *v12; // r14
  unsigned __int64 v13; // rsi
  int *v14; // rcx
  int v15; // edi
  unsigned __int64 v16; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r10
  unsigned int v22; // r13d
  ULONG_PTR v23; // r12
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  unsigned int v26; // ecx
  int v27; // r8d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r15
  bool v30; // cf
  int v31; // [rsp+60h] [rbp-88h] BYREF
  int v32; // [rsp+64h] [rbp-84h]
  unsigned __int64 v33; // [rsp+68h] [rbp-80h]
  __int64 v34; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-70h]
  unsigned __int64 v36; // [rsp+80h] [rbp-68h]
  unsigned __int64 v37; // [rsp+88h] [rbp-60h]
  unsigned __int64 v38; // [rsp+90h] [rbp-58h]
  unsigned int v41; // [rsp+100h] [rbp+18h]

  v9 = 0LL;
  v10 = a2;
  v11 = a1;
  v37 = qword_14046A348;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    if ( (a3 & 2) == 0 )
    {
      v12 = (int *)(qword_140465A50 + 4LL * a9 * (unsigned int)(unsigned __int16)KeNumberNodes);
      v9 = &v12[(unsigned __int16)KeNumberNodes];
      goto LABEL_4;
    }
    v31 = a9;
  }
  else
  {
    a3 &= ~2u;
    v31 = 0;
  }
  v12 = &v31;
LABEL_4:
  v13 = *(unsigned int *)(a2 + 40);
  v14 = v12 + 1;
  if ( v12 != &v31 )
    v14 = v9;
  v15 = a3 | 0x4000000;
  v38 = (unsigned __int64)v14;
  if ( (a3 & 0x100) == 0 )
    v15 = a3;
  v16 = v13 >> 12;
  if ( (v15 & 0x10052) == 0x10000 )
  {
    result = MiAllocateMdlPagesByLists(v11, a2, v15, a4, a7, a5 - v16, a9);
    v16 = (unsigned __int64)*(unsigned int *)(v10 + 40) >> 12;
    if ( (_DWORD)result == 1 )
      return result;
    v15 &= ~0x10000u;
  }
  v18 = a6;
  v19 = a7;
  v20 = a8;
  v21 = a1;
  v33 = a6;
  v22 = ((KeFeatureBits >> 37) & 1) == 0;
  v23 = a7;
LABEL_12:
  while ( 2 )
  {
    while ( 1 )
    {
      v24 = (unsigned int)*v12;
      result = *(_QWORD *)(v21 + 16);
      if ( !*(_QWORD *)(1984 * v24 + result + 1808) )
      {
        if ( (_DWORD)InitializationPhase )
          break;
      }
      if ( (v15 & 0x60) != 0 )
      {
        v34 = -1LL;
        v25 = 0LL;
        result = v15 & 0x40;
        v32 = v15 & 0x40;
        if ( (v15 & 0x40) == 0 )
        {
          if ( v20 )
            v25 = v20;
          else
            v25 = a5 - v16;
          result = MiFindContiguousPages(v21, v18, v23, v20, v25, a4, v24, 0x80000000, v15 | 0x60000000u, a2, &v34);
          v27 = result;
          goto LABEL_33;
        }
        v26 = v22;
        v27 = -1073741267;
        v41 = v22;
        if ( v22 >= 3 )
          goto LABEL_52;
        v28 = a5 - v16;
        v36 = a5 - v16;
        result = (unsigned __int64)&MiLargePageSizes[v22];
        v35 = result;
        while ( 1 )
        {
          v29 = *(_QWORD *)result;
          if ( v28 >= *(_QWORD *)result && v29 >= a8 )
          {
            result = MiFindContiguousPages(v21, v33, v23, v29, v29, a4, v24, 0x80000000, v15 | 0x60000000u, a2, &v34);
            v27 = result;
            if ( (result & 0x80000000) == 0LL )
            {
              v22 = v41;
              v25 = v29;
LABEL_32:
              v18 = v33;
LABEL_33:
              if ( v27 < 0 )
                goto LABEL_51;
              v16 += v25;
              if ( v16 == a5 )
                return result;
              v20 = a8;
              v21 = a1;
              v19 = a7;
              if ( v32 )
                goto LABEL_20;
              v23 = v34 - 1;
              result = v34 - v18;
              v30 = v34 - v18 < v25;
              v10 = a2;
              if ( v30 )
                goto LABEL_53;
              goto LABEL_12;
            }
            if ( v29 <= a8 )
              goto LABEL_32;
            v26 = v41;
            result = v35;
            v28 = v36;
            v21 = a1;
          }
          ++v26;
          result += 8LL;
          v41 = v26;
          v35 = result;
          if ( v26 >= 3 )
            goto LABEL_32;
        }
      }
      result = MiFindContiguousPages(v21, v18, v23, 0LL, a5 - v16, a4, v24, 0x80000000, v15 | 0x60002000u, v10, &v34);
      v16 = (unsigned __int64)*(unsigned int *)(v10 + 40) >> 12;
      if ( v16 == a5 )
        return result;
      v20 = a8;
      if ( !a8 || (result = v18 + a8, v18 + a8 <= v18) || result > v37 )
      {
LABEL_51:
        v21 = a1;
LABEL_52:
        v19 = a7;
        break;
      }
      v18 += a8;
      v33 = result;
      if ( v23 + a8 <= v23 || v23 + a8 > v37 )
        v23 = v37;
      else
        v23 += a8;
      v21 = a1;
      v19 = a7;
    }
LABEL_53:
    if ( (v15 & 2) == 0 && (unsigned __int64)++v12 < v38 )
    {
      v18 = a6;
      v23 = v19;
      v20 = a8;
      v33 = a6;
LABEL_20:
      v10 = a2;
      continue;
    }
    return result;
  }
}
