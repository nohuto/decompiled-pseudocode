/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1401428B8
 * Callers:
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

char __fastcall MI_MAKE_PROTECT_WRITE_COPY(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  int v4; // r8d
  _QWORD *v5; // r9
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
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_3;
      v6 = (v3 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
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
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v5);
  return (char)CurrentThread;
}
