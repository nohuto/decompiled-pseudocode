/*
 * XREFs of MiZeroPhysicalPage @ 0x14006ED90
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x14012910C (MiZeroLargePage.c)
 *     MiPerformFinalZeroing @ 0x1402D9624 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x1409F1E0C (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x1409F206C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x14012B9B4 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x1401C7A10 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  ULONG_PTR v9; // rbx
  int v10; // r8d
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = dword_140465B58[4 * v7 + a3];
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v8, 0LL);
  }
  v9 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
    if ( v9 )
    {
      v10 = 4;
      v11 = *(_BYTE *)(v6 + 34) >> 6;
      if ( v11 )
      {
        if ( v11 == 2 )
          v10 = 28;
      }
      else
      {
        v10 = 12;
      }
      MiMakeValidPte(v9, BugCheckParameter2, v10 | 0xA0000000);
      if ( MiPteInShadowRange(v9) )
      {
        if ( (unsigned int)MiPteHasShadow(v13) )
        {
          if ( !HIBYTE(word_140465BEC) && (v12 & 1) != 0 )
            v12 |= 0x8000000000000000uLL;
          *(_QWORD *)v9 = v12;
          MiWritePteShadow(v9, v12);
          goto LABEL_11;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v12 & 1) != 0 )
        {
          v12 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = v12;
LABEL_11:
      KeZeroPages((__int64)(v9 << 25) >> 16, 4096LL);
      result = MiReleasePtes((__int64)&qword_1404669C0, v9, 1u);
      goto LABEL_12;
    }
  }
  if ( KeGetCurrentPrcb()->HyperPte )
    v9 = 1LL;
  result = MiFillPhysicalPages(BugCheckParameter2);
LABEL_12:
  if ( v8 != (_DWORD)v7 && v8 != a3 )
  {
    if ( v9 )
      return MiChangePageAttribute(v6, (unsigned int)v7, 0LL);
  }
  return result;
}
