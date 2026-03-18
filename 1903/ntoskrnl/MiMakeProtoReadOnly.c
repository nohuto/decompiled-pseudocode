/*
 * XREFs of MiMakeProtoReadOnly @ 0x1402C7DA8
 * Callers:
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

char __fastcall MiMakeProtoReadOnly(unsigned __int64 a1)
{
  unsigned __int64 v1; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  int v4; // r8d
  _QWORD *v5; // r10
  int v6; // r9d

  MI_READ_PTE_LOCK_FREE(a1);
  LODWORD(CurrentThread) = MiPteInShadowRange(v1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = v6;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_8;
    }
    if ( ((unsigned __int8)v3 & (unsigned __int8)v6) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v3 |= 0x8000000000000000uLL;
    }
  }
LABEL_8:
  *v5 = v3;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v5);
  return (char)CurrentThread;
}
