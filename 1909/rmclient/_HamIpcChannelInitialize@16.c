/*
 * XREFs of _HamIpcChannelInitialize@16 @ 0x1000C1C3
 * Callers:
 *     _HampConnectionInitialize@12 @ 0x1000B090 (_HampConnectionInitialize@12.c)
 *     _RmpClientConnectionInitialize@4 @ 0x1001184F (_RmpClientConnectionInitialize@4.c)
 * Callees:
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __fastcall HamIpcChannelInitialize(int a1, int a2, int a3, char *a4)
{
  int result; // eax

  memset(a4, 0, 0x2Cu);
  *((_DWORD *)a4 + 5) = 0;
  RtlInitializeSRWLock(a4 + 4);
  *((_DWORD *)a4 + 7) = a4 + 24;
  *((_DWORD *)a4 + 6) = a4 + 24;
  result = a3;
  *((_DWORD *)a4 + 8) = a1;
  *((_DWORD *)a4 + 9) = a2;
  *((_DWORD *)a4 + 10) = a3;
  return result;
}
