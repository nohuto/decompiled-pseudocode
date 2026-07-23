/*
 * XREFs of MiMakeProtoReadOnly @ 0x1402B00E8
 * Callers:
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MiMakeProtoReadOnly(unsigned __int64 a1)
{
  unsigned __int64 v1; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  int v4; // r8d
  __int64 *v5; // r10
  int v6; // r9d

  MI_READ_PTE_LOCK_FREE(a1);
  LODWORD(CurrentThread) = MiPteInShadowRange(v1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = v6;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
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
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v5, v3);
  return (char)CurrentThread;
}
