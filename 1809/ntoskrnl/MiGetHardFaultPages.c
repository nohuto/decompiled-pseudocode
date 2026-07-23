/*
 * XREFs of MiGetHardFaultPages @ 0x140029BE0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiUseSlabAllocator @ 0x140065C80 (MiUseSlabAllocator.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiRetainSubsection @ 0x140131F58 (MiRetainSubsection.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 */

unsigned __int64 __fastcall MiGetHardFaultPages(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rsi
  BOOL v9; // r14d
  __int64 v10; // r11
  unsigned __int64 v12; // r8
  __int64 v14; // r13
  __int64 v15; // r10
  unsigned int v16; // r15d
  unsigned __int64 result; // rax
  __int64 v18; // r11
  unsigned __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rax
  ULONG_PTR v29; // rcx
  __int64 v30; // [rsp+80h] [rbp+8h]

  v8 = *a1;
  v9 = 0;
  v10 = a3;
  v12 = 0xFFFFFA8000000000uLL;
  if ( *a1 )
  {
    v9 = MiIsPfnFromSlabAllocation(*a1) != 0;
    v23 = (unsigned __int128)((__int64)(v8 - v12) * (__int128)v22) >> 64;
    v24 = 0xFFFFFFFFFLL;
    v30 = ((unsigned __int64)v23 >> 63) + (v23 >> 3);
    while ( 1 )
    {
      v25 = v24 & *(_QWORD *)(v8 + 24);
      if ( v25 == v24 )
        break;
      v8 = v12 + 48 * v25;
      if ( !v9 )
        v9 = MiIsPfnFromSlabAllocation(v8) != 0;
    }
  }
  else
  {
    v30 = 0xFFFFFFFFFLL;
  }
  v14 = a6;
  v15 = *(_QWORD *)(a6 + 208);
  v16 = (*(unsigned __int16 *)(v15 + 32) >> 1) & 0x1F;
  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      result = MiGetAvailablePagesBelowPriority(v10, ((*(_DWORD *)(a4 + 80) >> 3) & 7u) + 1, v12);
      if ( a2 > result )
      {
        if ( !result )
          return result;
        a2 = result;
      }
    }
  }
  result = MiUseSlabAllocator(v10, v15, a7);
  if ( (_DWORD)result && a1[1] < a2 )
  {
    v26 = a5 + 15;
    while ( 1 )
    {
      result = MiGetSlabPage(v18, v16, v26, 0LL);
      a6 = result;
      if ( result == -1LL )
        break;
      v9 = 1;
      v27 = 48 * result - 0x58000000000LL;
      MiSetPfnBlink(v27, v30, 0LL);
      v28 = v27;
      v18 = a3;
      if ( *a1 )
        v28 = v8;
      *a1 = v27;
      ++a1[1];
      v26 = a5 + 15;
      v8 = v28;
      result = a6;
      v30 = a6;
      if ( a1[1] >= a2 )
        goto LABEL_34;
    }
    if ( *v26 )
    {
      a5[16] = a2 - a1[1];
      v29 = *(_QWORD *)(v14 + 208);
      a5[13] = v29;
      result = MiRetainSubsection(v29);
      a2 = a1[1];
    }
LABEL_34:
    LODWORD(v18) = a3;
  }
  v19 = a1[1];
  if ( v19 < a2 )
  {
    v20 = a2 - v19;
    v21 = a5[7];
    a6 = v20;
    result = MiGetPageChain(
               v18,
               v21,
               (*(unsigned __int16 *)(a8 + 10) >> byte_14043B109) + 1,
               v16,
               0,
               -1LL,
               (__int64)&a6);
    if ( result )
    {
      if ( *a1 )
        MiSetPfnBlink(v8, (__int64)(result + 0x58000000000LL) / 48, 0LL);
      else
        *a1 = result;
      result = (unsigned int)a6;
      a1[1] += (unsigned int)a6;
    }
  }
  if ( a1[1] > 1 )
  {
    if ( v9 )
      *(_DWORD *)(v14 + 192) |= 0x100000u;
  }
  return result;
}
