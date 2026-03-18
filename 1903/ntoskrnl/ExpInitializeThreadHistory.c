/*
 * XREFs of ExpInitializeThreadHistory @ 0x1400E3E40
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitializeThreadHistory(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 312) &= 0xFFFFFFF8;
  result = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  return result;
}
