/*
 * XREFs of IopAbortRequest @ 0x140819360
 * Callers:
 *     <none>
 * Callees:
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 */

void __fastcall IopAbortRequest(_QWORD *a1)
{
  IopCompleteRequest((__int64)a1, (__int64)(a1 + 6), a1 + 7, a1 + 8, a1 + 9);
}
