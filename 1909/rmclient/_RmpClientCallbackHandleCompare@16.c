/*
 * XREFs of _RmpClientCallbackHandleCompare@16 @ 0x10011D3B
 * Callers:
 *     _RmpClientCallbackCompareToCallback@8 @ 0x10011C90 (_RmpClientCallbackCompareToCallback@8.c)
 *     _RmpClientCallbackCompareToPayload@8 @ 0x10011CB0 (_RmpClientCallbackCompareToPayload@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RmpClientCallbackHandleCompare(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( HIDWORD(a1) > HIDWORD(a2) )
    return 1;
  if ( HIDWORD(a1) < HIDWORD(a2) || (unsigned int)a1 < (unsigned int)a2 )
    return -1;
  return a1 > a2;
}
