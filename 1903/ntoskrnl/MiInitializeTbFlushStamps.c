/*
 * XREFs of MiInitializeTbFlushStamps @ 0x140076374
 * Callers:
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x140115100 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSetPteTimeStamp @ 0x1400763C0 (MiSetPteTimeStamp.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  struct _KTHREAD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  _QWORD *v7; // r9
  bool v8; // zf
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  _InterlockedOr(v9, 0);
  MiSetPteTimeStamp(v1, (unsigned int)KiTbFlushTimeStamp);
  result = (struct _KTHREAD *)MiPteInShadowRange(v2);
  if ( !(_DWORD)result )
    goto LABEL_2;
  result = (struct _KTHREAD *)MiPteHasShadow(v5);
  if ( (_DWORD)result )
  {
    v6 = 1;
    if ( HIBYTE(word_140465BEC) )
      goto LABEL_2;
    v8 = (v4 & 1) == 0;
  }
  else
  {
    result = KeGetCurrentThread();
    if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
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
    return (struct _KTHREAD *)MiWritePteShadow(v7, v4);
  return result;
}
