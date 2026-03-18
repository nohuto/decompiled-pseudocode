/*
 * XREFs of SmProcessCreateNotification @ 0x1406900C0
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     SmpKeyedStoreCreate @ 0x1406B3794 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1, char a2)
{
  if ( (dword_14058C180 & 0xC) == 0 || *(_WORD *)(a1 + 1454) )
    return 3221225659LL;
  if ( (a2 & 3) != 0 )
    return SmpKeyedStoreCreate((ULONG_PTR)&qword_14058C188);
  return 3221266944LL;
}
