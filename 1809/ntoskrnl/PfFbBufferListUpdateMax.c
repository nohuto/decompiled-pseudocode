/*
 * XREFs of PfFbBufferListUpdateMax @ 0x14013BB5C
 * Callers:
 *     PfTStart @ 0x140752A9C (PfTStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfFbBufferListUpdateMax(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 84), a2);
}
