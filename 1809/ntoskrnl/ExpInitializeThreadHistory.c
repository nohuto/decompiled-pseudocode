/*
 * XREFs of ExpInitializeThreadHistory @ 0x1400FD4E8
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068B3B0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitializeThreadHistory(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 152) &= 0xFFFFFFF8;
  result = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  return result;
}
