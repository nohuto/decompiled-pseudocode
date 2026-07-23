/*
 * XREFs of PfFbBufferListUpdateMax @ 0x14013BC7C
 * Callers:
 *     PfTStart @ 0x140753C6C (PfTStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfFbBufferListUpdateMax(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 84), a2);
}
