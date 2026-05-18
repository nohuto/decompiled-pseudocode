/*
 * XREFs of sub_18011C860 @ 0x18011C860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_18011C860()
{
  ULONG result; // eax

  result = _InterlockedExchangeAdd(&dword_18026B268, 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = EventUnregister(qword_18025DEB8);
    qword_18025DEB8 = 0LL;
    dword_18025DE98 = 0;
  }
  return result;
}
