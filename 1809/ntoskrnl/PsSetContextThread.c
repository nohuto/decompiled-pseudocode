/*
 * XREFs of PsSetContextThread @ 0x14088CCA0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 */

int __fastcall PsSetContextThread(struct _KTHREAD *a1, CONTEXT *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
