/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1402BBDF4
 * Callers:
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x1402BC950 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(ULONG_PTR *a1, __int64 *a2, _QWORD *a3)
{
  ULONG_PTR v3; // rbx
  struct _KEVENT *v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int64 SlabPage; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int64 v16; // rax
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  if ( (*(_QWORD *)(*a1 + 40) & 0x200000000000000LL) == 0 )
  {
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17, (__int64)a2, (__int64)a3);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v7 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
    v8 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
    v9 = (__int64)(v8 << 25) >> 16;
    if ( (v7->Header.SignalState & 8) != 0 && !MiIsPfnFromSlabAllocation(v3) && v9 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), v10);
      SlabPage = MiGetSlabPage(v7, 24LL, a3, 0LL);
      if ( SlabPage == -1 )
      {
        if ( *a3 )
          return 0LL;
      }
      else
      {
        v14 = 48 * SlabPage - 0x58000000000LL;
        if ( (unsigned int)MiTradeActivePage(v3, v14, v9, 1u, 0) )
        {
          *(_QWORD *)(v3 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((_QWORD *)(v3 + 16));
          MiReleaseFreshPage(v3);
          v3 = v14;
          *a2 = MI_READ_PTE_LOCK_FREE(v8);
          *a1 = v14;
        }
        else
        {
          MiReleaseFreshPage(v14);
        }
      }
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18, v12, v13);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    if ( ((*(_QWORD *)(v3 + 40) >> 54) & 7) != 3 )
    {
      MiAbortCombineScan(v3);
      MiMarkPfnVerified(v3, 4u);
    }
    v16 = MiCaptureDirtyBitToPfn(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v16 )
      MiReleasePageFileInfo(v7, v16, 1);
  }
  return 1LL;
}
