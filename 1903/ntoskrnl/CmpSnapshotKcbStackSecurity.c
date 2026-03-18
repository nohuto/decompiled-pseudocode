/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x14082E5A0
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140631AE8 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpSnapshotKcbStackSecurity(__int64 a1, __int64 a2, ULONG a3, _QWORD *a4)
{
  __int64 SecurityCacheEntryForKcbStack; // rdi
  PLOOKASIDE_LIST_EX v7; // r9
  PVOID TransientPoolWithTag; // rax
  unsigned int v9; // ebx
  PVOID v10; // rsi

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(
                           PagedPool,
                           *(unsigned int *)(SecurityCacheEntryForKcbStack + 24),
                           a3,
                           v7);
  v9 = 0;
  v10 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memmove(
      TransientPoolWithTag,
      (const void *)(SecurityCacheEntryForKcbStack + 32),
      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
    *a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
