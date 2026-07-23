/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x140159BC0
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14012C00C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindHelper(struct _KEVENT *a1, char a2)
{
  CcNotifyWriteBehindInternal(a1, a2);
  return 1;
}
