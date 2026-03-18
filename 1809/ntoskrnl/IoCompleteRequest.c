/*
 * XREFs of IoCompleteRequest @ 0x140282EF0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C10A0 (IofCompleteRequest.c)
 */

void __fastcall IoCompleteRequest(IRP *a1, CCHAR a2)
{
  IofCompleteRequest(a1, a2);
}
