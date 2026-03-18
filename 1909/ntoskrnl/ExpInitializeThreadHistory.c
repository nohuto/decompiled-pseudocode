/*
 * XREFs of ExpInitializeThreadHistory @ 0x1400E8C2C
 * Callers:
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
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
