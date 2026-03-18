/*
 * XREFs of MiWriteUselessChildPte @ 0x1402E5524
 * Callers:
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

char MiWriteUselessChildPte()
{
  unsigned __int64 v0; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  int v4; // r9d
  bool v5; // zf

  MiSwizzleInvalidPte(128LL);
  LODWORD(CurrentThread) = MiPteInShadowRange(v0);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_9;
      v5 = (v2 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_9;
      v5 = (v2 & 1) == 0;
    }
    if ( !v5 )
    {
      LOBYTE(CurrentThread) = 0;
      v2 |= 0x8000000000000000uLL;
    }
  }
LABEL_9:
  *v3 = v2;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v3);
  return (char)CurrentThread;
}
