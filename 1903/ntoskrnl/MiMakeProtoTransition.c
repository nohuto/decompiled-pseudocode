/*
 * XREFs of MiMakeProtoTransition @ 0x140115FD0
 * Callers:
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiMakeProtoTransition(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r11
  __int64 v12; // r8
  __int64 TransitionPte; // [rsp+30h] [rbp+8h] BYREF

  v1 = MI_READ_PTE_LOCK_FREE(a1 + 16);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v1;
  v5 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000);
  TransitionPte = MI_READ_PTE_LOCK_FREE(v5 + 8 * ((v3 >> 3) & 0x1FF));
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
  TransitionPte = MiMakeTransitionPte((v6 >> 12) & 0xFFFFFFFFFLL, (v4 >> 5) & 0x1F);
  if ( !MiPteInShadowRange(v7) )
  {
LABEL_2:
    *v10 = v8;
    goto LABEL_3;
  }
  if ( !(unsigned int)MiPteHasShadow(v9) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      *v10 = v12;
      goto LABEL_3;
    }
    if ( (v12 & 1) != 0 )
      v8 |= 0x8000000000000000uLL;
    goto LABEL_2;
  }
  if ( !HIBYTE(word_140465BEC) && (v12 & 1) != 0 )
    v8 |= 0x8000000000000000uLL;
  *v10 = v8;
  MiWritePteShadow(v10, v8);
LABEL_3:
  LOBYTE(v8) = 17;
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v10, v8, 0x80000000LL);
}
