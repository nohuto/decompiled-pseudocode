/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x1409D341C
 * Callers:
 *     MiInitializeSystemVa @ 0x1409D33A8 (MiInitializeSystemVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeFlushEntireTb @ 0x140187960 (KeFlushEntireTb.c)
 *     MiApplyDynamicRelocations @ 0x1409D3650 (MiApplyDynamicRelocations.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D3744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r13
  int v7; // esi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // r9
  unsigned __int64 v12; // r11
  __int64 *v13; // r11
  unsigned __int64 v14; // r15
  unsigned __int64 i; // rbx
  __int64 result; // rax
  __int64 v18; // [rsp+70h] [rbp+18h]

  v1 = a1;
  v2 = *(__int64 **)(a1 + 16);
  v3 = 0xFFFFF68000000000uLL;
  v4 = qword_14043CB60;
  v5 = qword_14043CBA0;
  v18 = qword_14043CB60;
  v6 = *v2;
  if ( (MiFlags & 0x8000) == 0 && qword_14043CBA0 == 0xFFFFF68000000000uLL )
    goto LABEL_18;
  v7 = 0;
  if ( 8 * (((unsigned __int64)qword_14043CBA0 >> 39) & 0x1FF) != 3944 )
  {
    MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    if ( !MiPteInShadowRange(v8) )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1LL;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_5;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_5;
    }
    if ( (v9 & 1) != 0 )
      v9 |= 0x8000000000000000uLL;
LABEL_5:
    *v11 = v9;
    if ( (_DWORD)v10 )
      MiWritePteShadow((__int64)v11, v9);
    if ( (MiFlags & 0x200000) != 0 )
      goto LABEL_11;
    if ( !MiPteInShadowRange(v12) )
    {
LABEL_9:
      *v13 = v9;
      if ( (_DWORD)v10 )
        MiWritePteShadow((__int64)v13, v9);
LABEL_11:
      LOBYTE(v9) = 1;
      KeFlushEntireTb(0LL, v9, v10, (__int64)v11);
      goto LABEL_12;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1LL;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_9;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_9;
    }
    if ( (v9 & 1) != 0 )
      v9 |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
LABEL_12:
  v14 = v5;
  for ( i = 39LL; ; i -= 9LL )
  {
    MiApplyDynamicRelocations((PVOID)v2[6], *((unsigned int *)v2 + 16));
    MiApplyDynamicRelocations(*(PVOID *)(v6 + 48), *(unsigned int *)(v6 + 64));
    if ( i >= 0xC )
    {
      MiApplyDynamicRelocations((PVOID)v2[6], *((unsigned int *)v2 + 16));
      MiApplyDynamicRelocations(*(PVOID *)(v6 + 48), *(unsigned int *)(v6 + 64));
    }
    if ( (unsigned int)++v7 > 4 )
      break;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = v5 + ((v14 >> 9) & 0x7FFFFFFFF8LL);
  }
  v4 = v18;
  v1 = a1;
LABEL_18:
  if ( (MiFlags & 0x8000) != 0 || v4 != 0xFFFFFA8000000000uLL )
  {
    MiApplyDynamicRelocations((PVOID)v2[6], *((unsigned int *)v2 + 16));
    MiApplyDynamicRelocations(*(PVOID *)(v6 + 48), *(unsigned int *)(v6 + 64));
  }
  result = MiApplyRetpolineFixupsToKernelAndHal(v1, v2, v6);
  MmPteBase = v5;
  qword_1403FFDE0 = v5;
  return result;
}
