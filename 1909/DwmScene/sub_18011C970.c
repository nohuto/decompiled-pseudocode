/*
 * XREFs of sub_18011C970 @ 0x18011C970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_18011C970()
{
  ULONG result; // eax

  result = _InterlockedExchangeAdd(&dword_18026C268, 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = EventUnregister(qword_18025EEB8);
    qword_18025EEB8 = 0LL;
    dword_18025EE98 = 0;
  }
  return result;
}
