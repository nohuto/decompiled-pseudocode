/*
 * XREFs of CcNotifyWriteBehindEx @ 0x140160BF4
 * Callers:
 *     MiFlushAllPagesWorker @ 0x140160C18 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1402C86F4 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14011F49C (CcNotifyWriteBehindInternal.c)
 */

LONG __fastcall CcNotifyWriteBehindEx(LONG a1, __int64 a2)
{
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  result = a1;
  v3 = *(struct _KEVENT **)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, result);
  return result;
}
