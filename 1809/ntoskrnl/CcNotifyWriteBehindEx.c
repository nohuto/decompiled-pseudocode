/*
 * XREFs of CcNotifyWriteBehindEx @ 0x140153294
 * Callers:
 *     MiFlushAllPagesWorker @ 0x140153198 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1402B3194 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14012BF1C (CcNotifyWriteBehindInternal.c)
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
