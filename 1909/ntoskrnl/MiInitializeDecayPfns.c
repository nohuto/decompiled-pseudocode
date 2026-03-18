/*
 * XREFs of MiInitializeDecayPfns @ 0x140A17AD4
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  if ( ((unsigned __int8)&stru_1404661F0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_1404661F0 = 0uLL;
  v0 = 48 * qword_1404661E0 - 0x57FFFFE8030LL;
  v1 = 2048LL;
  *(_QWORD *)(v0 + 40) = *(_QWORD *)(v0 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_1404661F0, (PSLIST_ENTRY)v0);
    v0 -= 48LL;
    --v1;
  }
  while ( v1 );
  return result;
}
