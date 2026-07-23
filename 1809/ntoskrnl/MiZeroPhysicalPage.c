/*
 * XREFs of MiZeroPhysicalPage @ 0x140032010
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiPerformFinalZeroing @ 0x1402BFEEC (MiPerformFinalZeroing.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 *     MiComputeOptimalZeroPath @ 0x1409BD284 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned __int64 v9; // rbx
  int v10; // r8d
  char v11; // al
  __int64 ValidPte; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = dword_14043B1D8[4 * v7 + a3];
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v8, 0LL);
  }
  v9 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = MiReservePtes(&qword_14043C060, 1LL);
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
      ValidPte = MiMakeValidPte(v9, BugCheckParameter2, v10 | 0xA0000000);
      if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v13, ValidPte) )
        {
          if ( !HIBYTE(word_14043B26C) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *(_QWORD *)v9 = ValidPte;
          MiWritePteShadow(v9);
          goto LABEL_12;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = ValidPte;
LABEL_12:
      KeZeroPages((__int64)(v9 << 25) >> 16, 4096LL);
      result = MiReleasePtes(&qword_14043C060, v9, 1LL);
      goto LABEL_13;
    }
  }
  if ( KeGetCurrentPrcb()->HyperPte )
    v9 = 1LL;
  result = MiFillPhysicalPages(BugCheckParameter2);
LABEL_13:
  if ( v8 != (_DWORD)v7 && v8 != a3 )
  {
    if ( v9 )
      return MiChangePageAttribute(v6, (unsigned int)v7, 0LL);
  }
  return result;
}
