/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x14012A2E0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MI_MAKE_PROTECT_WRITE_COPY(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  int v4; // r8d
  __int64 *v5; // r9
  bool v6; // zf

  LOBYTE(CurrentThread) = MI_READ_PTE_LOCK_FREE(a1);
  if ( (char)CurrentThread >= 0 )
    return (char)CurrentThread;
  LODWORD(CurrentThread) = MiPteInShadowRange(v2);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_3;
      v6 = (v3 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v6 = (v3 & 1) == 0;
    }
    if ( !v6 )
    {
      LOBYTE(CurrentThread) = 0;
      v3 |= 0x8000000000000000uLL;
    }
  }
LABEL_3:
  *v5 = v3;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v5, v3);
  return (char)CurrentThread;
}
