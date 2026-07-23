/*
 * XREFs of MiMakeTransitionHeatBatch @ 0x1402CEE04
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiTryLockLeafPage @ 0x1400829FC (MiTryLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiGetPrototypePteBoundaries @ 0x1402C7854 (MiGetPrototypePteBoundaries.c)
 *     MiAddPageToHeatRanges @ 0x1402CECC0 (MiAddPageToHeatRanges.c)
 *     MiGetTransitionPageHeatList @ 0x1402CEDB4 (MiGetTransitionPageHeatList.c)
 */

__int64 __fastcall MiMakeTransitionHeatBatch(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r11
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  int v9; // r12d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 PrototypePteBoundaries; // rax
  unsigned __int64 v19; // rdx
  PSLIST_ENTRY TransitionPageHeatList; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r10
  unsigned __int64 v27; // rdx
  __int16 v28; // cx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  _QWORD *v31; // r10
  __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  MiSetNonResidentPteHeat(a1 + 2, 0);
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 0LL;
  v7 = a1[1] | 0x8000000000000000uLL;
  v8 = 0LL;
  if ( (a1[5] & 0x200000000000000LL) != 0 )
  {
    v9 = 1;
    PrototypePteBoundaries = MiGetPrototypePteBoundaries(v7, &v32);
    if ( !PrototypePteBoundaries )
      return v8;
    v13 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v19 = PrototypePteBoundaries + 8 * v32;
    v17 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( (v7 & 0xFFFFFFFFFFFFF000uLL) < PrototypePteBoundaries )
      v13 = PrototypePteBoundaries;
    if ( v17 >= v19 )
      v17 = v19 - 8;
  }
  else
  {
    v9 = 0;
    v10 = (__int64)(v7 << 25) >> 16;
    if ( v10 > 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(v10) != 6 )
        return v8;
      v13 = v7 & 0xFFFFFFFFFFFFF000uLL;
      v17 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      if ( !v5 )
        return v8;
      v11 = v10 & 0x7FFFFFE00000LL;
      if ( v11 >= (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 )
        v12 = (v11 >> 9) & 0x7FFFFFFFF8LL;
      else
        v12 = 8
            * ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) & 0xFFFFFFFFFLL);
      v13 = v12 - 0x98000000000LL;
      v14 = v11 + 2093056;
      v15 = *(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32);
      if ( v14 <= v15 << 12 )
        v16 = (v14 >> 9) & 0x7FFFFFFFF8LL;
      else
        v16 = 8 * (v15 & 0xFFFFFFFFFLL);
      v17 = v16 - 0x98000000000LL;
    }
  }
  TransitionPageHeatList = MiGetTransitionPageHeatList();
  v8 = (__int64)TransitionPageHeatList;
  if ( TransitionPageHeatList )
  {
    if ( TransitionPageHeatList == (PSLIST_ENTRY)-1LL )
    {
      MiSetNonResidentPteHeat(a1 + 2, 1);
    }
    else
    {
      v21 = *((unsigned int *)&TransitionPageHeatList->Next + 2);
      v22 = -1;
      v23 = a3;
      if ( a3 >= 0xFFFFFFFF )
        v23 = 0xFFFFFFFFLL;
      if ( v21 <= v23 )
      {
        if ( a3 < 0xFFFFFFFF )
          v22 = a3;
      }
      else
      {
        v22 = v21;
      }
      v24 = (__int64 *)v7;
      if ( a3 <= v21 )
        v24 = (__int64 *)v13;
      if ( (unsigned int)((__int64)(v17 - v7) >> 3) + 1 < v22 )
      {
        if ( (unsigned int)((__int64)(v17 - (_QWORD)v24) >> 3) + 1 > v22 )
          v24 = (__int64 *)(v17 - 8LL * v22 + 8);
      }
      else
      {
        v24 = (__int64 *)v7;
        v17 = v7 - 8 + 8LL * v22;
      }
      while ( (unsigned __int64)v24 <= v17 )
      {
        if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v24) & 0xC01) == 0x800 )
        {
          if ( v24 == (__int64 *)v7 )
          {
            v31 = a1;
LABEL_47:
            if ( (unsigned int)MiAddPageToHeatRanges(v8, (__int64)(v31 + 0xB000000000LL) / 48) )
              return v8;
            goto LABEL_48;
          }
          if ( v9 )
            v25 = MiTryLockLeafPage(v24);
          else
            v25 = MiLockTransitionLeafPage((ULONG_PTR)v24, (unsigned __int8 *)1);
          v26 = v25;
          if ( v25 )
          {
            v27 = *(_QWORD *)(v25 + 16);
            v28 = v27;
            v29 = v27 >> 11;
            v30 = v27 >> 3;
            if ( (v28 & 0x400) != 0 )
              LOBYTE(v30) = v29;
            if ( (v30 & 1) != 0 )
            {
              MiSetNonResidentPteHeat((unsigned __int64 *)(v26 + 16), 0);
              _InterlockedAnd64(v31 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_47;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
LABEL_48:
        ++v24;
      }
    }
  }
  return v8;
}
