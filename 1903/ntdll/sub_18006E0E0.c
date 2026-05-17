/*
 * XREFs of sub_18006E0E0 @ 0x18006E0E0
 * Callers:
 *     sub_180020514 @ 0x180020514 (sub_180020514.c)
 * Callees:
 *     ZwQueryPerformanceCounter @ 0x18009CD00 (ZwQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall sub_18006E0E0(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24 << 24);
  ZwQueryPerformanceCounter(&v4, 0LL);
  return a1 ^ v2 ^ v4 ^ ((unsigned __int64)(unsigned int)v4 << 32);
}
