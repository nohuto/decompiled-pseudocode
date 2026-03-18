/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x140169CB0
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1401201EC (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindHelper(struct _KEVENT *a1, char a2)
{
  CcNotifyWriteBehindInternal(a1, a2);
  return 1;
}
