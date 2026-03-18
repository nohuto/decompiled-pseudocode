/*
 * XREFs of MiAbortCombineScan @ 0x140098898
 * Callers:
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiDeleteClusterPage @ 0x140098070 (MiDeleteClusterPage.c)
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MiDeleteClusterSection @ 0x1400B8CD0 (MiDeleteClusterSection.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiInitializeMdlPfn @ 0x1400DCE94 (MiInitializeMdlPfn.c)
 *     MiChangePageAttributeContiguous @ 0x14017D844 (MiChangePageAttributeContiguous.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MiAllocateSlabEntry @ 0x1402DB1F8 (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402DCD08 (MiUpdateSlabPagePlaceholderState.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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

  if ( dword_140465DC4 )
  {
    v2 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140465DC0);
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
        KeFlushSingleTb((__int64)((_QWORD)v8 << 25) >> 16, 0LL, 1LL);
        goto LABEL_4;
      }
      if ( (unsigned int)MiPteHasShadow(v6) )
      {
        v7 = 1;
        if ( HIBYTE(word_1404658EC) )
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140465DC0);
  }
}
