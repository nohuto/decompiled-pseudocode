/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x1400938E4
 * Callers:
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120E70 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120ED0 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MI_CLEAR_RESET_PTE(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  struct _KTHREAD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  _QWORD *v7; // r9
  bool v8; // zf

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  MiUpdatePageFileHighInPte(v1, 0LL);
  result = (struct _KTHREAD *)MiPteInShadowRange(v2);
  if ( !(_DWORD)result )
    goto LABEL_2;
  result = (struct _KTHREAD *)MiPteHasShadow(v5, v4);
  if ( (_DWORD)result )
  {
    v6 = 1;
    if ( HIBYTE(word_14043A1AC) )
      goto LABEL_2;
    v8 = (v4 & 1) == 0;
  }
  else
  {
    result = KeGetCurrentThread();
    if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      goto LABEL_2;
    v8 = (v4 & 1) == 0;
  }
  if ( !v8 )
  {
    result = (struct _KTHREAD *)0x8000000000000000LL;
    v4 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v7 = v4;
  if ( v6 )
    return (struct _KTHREAD *)MiWritePteShadow(v7);
  return result;
}
