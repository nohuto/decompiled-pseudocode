/*
 * XREFs of KiConnectSwInterrupt @ 0x1409F7610
 * Callers:
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x1409CD3E8 (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(ULONG_PTR a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
