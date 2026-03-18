/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x14012DE38
 * Callers:
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

char __fastcall MI_CLEAR_RESET_PTE(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  int v5; // r8d
  _QWORD *v6; // r9
  bool v7; // zf

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  MiUpdatePageFileHighInPte(v1, 0LL);
  LODWORD(CurrentThread) = MiPteInShadowRange(v2);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v5 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_2;
      v7 = (v4 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_2;
      v7 = (v4 & 1) == 0;
    }
    if ( !v7 )
    {
      LOBYTE(CurrentThread) = 0;
      v4 |= 0x8000000000000000uLL;
    }
  }
LABEL_2:
  *v6 = v4;
  if ( v5 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v6);
  return (char)CurrentThread;
}
