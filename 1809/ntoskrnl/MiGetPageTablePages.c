/*
 * XREFs of MiGetPageTablePages @ 0x140026E90
 * Callers:
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14072B348 (MmCreateShadowMapping.c)
 * Callees:
 *     MiObtainSystemCharges @ 0x140026DC8 (MiObtainSystemCharges.c)
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiReturnSystemCharges @ 0x1401208A4 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  int v3; // eax
  _QWORD *v4; // rsi
  __int64 v6; // r14
  int v9; // r15d
  unsigned __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 Page; // rax
  _QWORD *v13; // rbx
  _QWORD *v15; // rbx

  v3 = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  *a3 = 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( (v3 & 8) != 0 || !*(_QWORD *)(v6 + 7784) )
  {
    v9 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 24), a2, *(_DWORD *)(a1 + 48)) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 32) += a2;
    v9 = 1;
  }
  v10 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = *(unsigned __int16 *)(a1 + 274) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                   *(volatile signed __int32 **)(a1 + 264),
                                                                   1u) & *(_WORD *)(a1 + 272));
      Page = MiGetPage(v6, v11, 33546LL);
      if ( Page == -1 )
      {
        if ( (*(_DWORD *)(a1 + 56) & 0x10) == 0 )
          break;
        if ( !(unsigned int)MiSufficientAvailablePages(v6, 96LL) )
          break;
        Page = MiGetPage(v6, v11, 33550LL);
        if ( Page == -1 )
          break;
      }
      v13 = (_QWORD *)(48 * Page - 0x58000000000LL);
      MiSetPfnTbFlushStamp(v13, 0LL, 0LL);
      ++v10;
      *v13 = v4;
      v4 = v13;
      if ( v10 >= a2 )
        goto LABEL_8;
    }
    if ( v9 )
    {
      MiReturnCommit(v6, a2);
      MiReturnSystemCharges(v6, a2, *(unsigned int *)(a1 + 48));
      *(_QWORD *)(a1 + 32) -= a2;
    }
    if ( v4 )
    {
      do
      {
        v15 = (_QWORD *)*v4;
        MiReleaseFreshPage(v4);
        v4 = v15;
      }
      while ( v15 );
    }
    return 3221225495LL;
  }
  else
  {
LABEL_8:
    *a3 = v4;
    return 0LL;
  }
}
