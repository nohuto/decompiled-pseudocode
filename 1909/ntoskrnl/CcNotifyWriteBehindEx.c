/*
 * XREFs of CcNotifyWriteBehindEx @ 0x14016A8C4
 * Callers:
 *     MiFlushAllPagesWorker @ 0x14016A7C8 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1402C8454 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1401201EC (CcNotifyWriteBehindInternal.c)
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
