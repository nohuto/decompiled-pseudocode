/*
 * XREFs of sub_180001EF0 @ 0x180001EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int sub_180001EF0()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_18004FFC0 = 0;
  qword_18004FFB0 = (__int64)&off_18003F718;
  hHeap = ProcessHeap;
  return atexit(sub_18003D250);
}
