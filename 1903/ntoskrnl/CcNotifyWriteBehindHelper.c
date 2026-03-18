/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x14016A210
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14011F49C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindHelper(struct _KEVENT *a1, char a2)
{
  CcNotifyWriteBehindInternal(a1, a2);
  return 1;
}
