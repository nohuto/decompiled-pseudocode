/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1402D2398
 * Callers:
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x1402D30A4 (MiValidVirtualizationFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(ULONG_PTR *a1, __int64 *a2, _QWORD *a3)
{
  ULONG_PTR v3; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int64 SlabPage; // rax
  __int64 v12; // rsi
  unsigned __int64 v14; // rax
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  if ( (*(_QWORD *)(*a1 + 40) & 0x200000000000000LL) == 0 )
  {
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v7 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
    v8 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
    v9 = (__int64)(v8 << 25) >> 16;
    if ( (*(_DWORD *)(v7 + 4) & 8) != 0 && !MiIsPfnFromSlabAllocation(v3) && v9 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), v10);
      SlabPage = MiGetSlabPage(v7, 24, 0, (_DWORD)a3, 0);
      if ( SlabPage == -1 )
      {
        if ( *a3 )
          return 0LL;
      }
      else
      {
        v12 = 48 * SlabPage - 0x58000000000LL;
        if ( (unsigned int)MiTradeActivePage(v3, v12, v9, 1u, 0) )
        {
          *(_QWORD *)(v3 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v3 + 16));
          MiReleaseFreshPage(v3);
          v3 = v12;
          *a2 = MI_READ_PTE_LOCK_FREE(v8);
          *a1 = v12;
        }
        else
        {
          MiReleaseFreshPage(v12);
        }
      }
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    if ( ((*(_QWORD *)(v3 + 40) >> 54) & 7) != 3 )
    {
      MiAbortCombineScan(v3);
      MiMarkPfnVerified(v3, 4);
    }
    v14 = MiCaptureDirtyBitToPfn(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v14 )
      MiReleasePageFileInfo(v7, v14, 1);
  }
  return 1LL;
}
