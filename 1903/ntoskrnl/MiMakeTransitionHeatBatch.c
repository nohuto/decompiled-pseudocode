/*
 * XREFs of MiMakeTransitionHeatBatch @ 0x1402EBC7C
 * Callers:
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetNonResidentPteHeat @ 0x1400DBAC0 (MiSetNonResidentPteHeat.c)
 *     MiTryLockLeafPage @ 0x1400DC7AC (MiTryLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiGetPrototypePteBoundaries @ 0x1402E18E8 (MiGetPrototypePteBoundaries.c)
 *     MiAddPageToHeatRanges @ 0x1402EBB38 (MiAddPageToHeatRanges.c)
 *     MiGetTransitionPageHeatList @ 0x1402EBC2C (MiGetTransitionPageHeatList.c)
 */

__int64 __fastcall MiMakeTransitionHeatBatch(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r11
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
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
  unsigned __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // rcx
  _QWORD *v30; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+78h] [rbp+20h] BYREF

  MiSetNonResidentPteHeat(a1 + 2, 0);
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 0LL;
  v7 = 0LL;
  v8 = a1[1] | 0x8000000000000000uLL;
  if ( (a1[5] & 0x200000000000000LL) != 0 )
  {
    v9 = 1;
    PrototypePteBoundaries = MiGetPrototypePteBoundaries(v8, &v31);
    if ( !PrototypePteBoundaries )
      return v7;
    v13 = v8 & 0xFFFFFFFFFFFFF000uLL;
    v19 = PrototypePteBoundaries + 8 * v31;
    v17 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( (v8 & 0xFFFFFFFFFFFFF000uLL) < PrototypePteBoundaries )
      v13 = PrototypePteBoundaries;
    if ( v17 >= v19 )
      v17 = v19 - 8;
  }
  else
  {
    v9 = 0;
    v10 = (__int64)(v8 << 25) >> 16;
    if ( v10 > 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(v10) != 6 )
        return v7;
      v13 = v8 & 0xFFFFFFFFFFFFF000uLL;
      v17 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      if ( !v5 )
        return v7;
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
  v7 = (__int64)TransitionPageHeatList;
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
      v24 = (unsigned __int64 *)v8;
      if ( a3 <= v21 )
        v24 = (unsigned __int64 *)v13;
      if ( (unsigned int)((__int64)(v17 - v8) >> 3) + 1 < v22 )
      {
        if ( (unsigned int)((__int64)(v17 - (_QWORD)v24) >> 3) + 1 > v22 )
          v24 = (unsigned __int64 *)(v17 - 8LL * v22 + 8);
      }
      else
      {
        v24 = (unsigned __int64 *)v8;
        v17 = v8 - 8 + 8LL * v22;
      }
      while ( (unsigned __int64)v24 <= v17 )
      {
        if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v24) & 0xC01) == 0x800 )
        {
          if ( v24 == (unsigned __int64 *)v8 )
          {
            v29 = (__int64)a1;
            v30 = a1;
LABEL_47:
            if ( (unsigned int)MiAddPageToHeatRanges(v7, (v29 + 0x58000000000LL) / 48) )
              return v7;
            goto LABEL_48;
          }
          if ( v9 )
          {
            MiTryLockLeafPage(v24, v25, (__int64 *)&v30);
            v26 = (__int64)v30;
          }
          else
          {
            v26 = MiLockTransitionLeafPage((ULONG_PTR)v24, (unsigned __int8 *)1);
            v30 = (_QWORD *)v26;
          }
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 16) >> 3;
            if ( (*(_QWORD *)(v26 + 16) & 0x400LL) != 0 )
              LOBYTE(v27) = *(_QWORD *)(v26 + 16) >> 11;
            if ( (v27 & 1) != 0 )
            {
              MiSetNonResidentPteHeat((unsigned __int64 *)(v26 + 16), 0);
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v29 = (__int64)v30;
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
  return v7;
}
