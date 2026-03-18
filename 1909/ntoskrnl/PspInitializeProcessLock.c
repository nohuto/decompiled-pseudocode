/*
 * XREFs of PspInitializeProcessLock @ 0x140306420
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspInitializeProcessLock(__int64 a1)
{
  *(_QWORD *)(a1 + 736) = 0LL;
}
