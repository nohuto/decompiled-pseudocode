/*
 * XREFs of sub_18000218C @ 0x18000218C
 * Callers:
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_18000218C(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
