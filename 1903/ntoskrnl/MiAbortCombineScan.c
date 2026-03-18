/*
 * XREFs of MiAbortCombineScan @ 0x1400B8A28
 * Callers:
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiDeleteClusterPage @ 0x1400B8200 (MiDeleteClusterPage.c)
 *     MiChangePageAttributeBatch @ 0x1400B87B0 (MiChangePageAttributeBatch.c)
 *     MiDeleteClusterSection @ 0x1400D8E50 (MiDeleteClusterSection.c)
 *     MiInitializeMdlPfn @ 0x1400EF784 (MiInitializeMdlPfn.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     MiChangePageAttributeContiguous @ 0x14017D154 (MiChangePageAttributeContiguous.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1402D2398 (MiCompleteSecureProcessFault.c)
 *     MiAllocateSlabEntry @ 0x1402DB498 (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402DCFA8 (MiUpdateSlabPagePlaceholderState.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
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

  if ( dword_1404660C4 )
  {
    v2 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_1404660C0);
    v3 = (_QWORD *)(v2 + 7408);
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
      if ( !MiPteInShadowRange(v4[7]) )
      {
LABEL_8:
        *v8 = v5;
        if ( v7 )
          MiWritePteShadow(v8, v5);
        KeFlushSingleTb((__int64)((_QWORD)v8 << 25) >> 16, 0, 1u);
        goto LABEL_4;
      }
      if ( (unsigned int)MiPteHasShadow(v6) )
      {
        v7 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_8;
        v9 = (v5 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v9 = (v5 & 1) == 0;
      }
      if ( !v9 )
        v5 |= 0x8000000000000000uLL;
      goto LABEL_8;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1404660C0);
  }
}
