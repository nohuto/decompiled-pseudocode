/*
 * XREFs of MiAbortCombineScan @ 0x140082658
 * Callers:
 *     MiInitializeMdlPfn @ 0x1400113B8 (MiInitializeMdlPfn.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402C2F2C (MiUpdateSlabPagePlaceholderState.c)
 *     MiDeleteClusterPage @ 0x1402C641C (MiDeleteClusterPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  _QWORD *v8; // r11
  bool v9; // zf

  if ( dword_14043B784 )
  {
    v2 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_14043B780);
    v3 = (_QWORD *)(v2 + 6640);
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      while ( v4[6] != a1 || (*(_BYTE *)v4[7] & 1) == 0 )
      {
LABEL_4:
        v4 = (_QWORD *)*v4;
        if ( v4 == v3 )
          goto LABEL_5;
      }
      if ( MiPteInShadowRange(v4[7]) )
      {
        if ( (unsigned int)MiPteHasShadow(v6, v5) )
        {
          v7 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v9 = (v5 & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v9 = (v5 & 1) == 0;
LABEL_13:
          if ( !v9 )
            v5 |= 0x8000000000000000uLL;
        }
      }
      *v8 = v5;
      if ( v7 )
        MiWritePteShadow(v8);
      KeFlushSingleTb((__int64)((_QWORD)v8 << 25) >> 16, 0LL, 1LL);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14043B780);
  }
}
