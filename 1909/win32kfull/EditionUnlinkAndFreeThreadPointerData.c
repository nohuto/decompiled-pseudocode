/*
 * XREFs of EditionUnlinkAndFreeThreadPointerData @ 0x1C01F2FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F2374 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 */

void __fastcall EditionUnlinkAndFreeThreadPointerData(
        struct tagTHREADINPUTPOINTERLIST *a1,
        struct tagTHREADPOINTERDATA *a2)
{
  UnlinkAndFreeThreadPointerData(a1, a2);
}
