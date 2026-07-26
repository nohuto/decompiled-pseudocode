/*
 * XREFs of ndisFindPatternEntry @ 0x1C002388C
 * Callers:
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00235C0 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C0074680 (ndisOidPrePMRemoveWOLPattern.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindPatternEntry(__int64 **a1, int a2)
{
  __int64 *result; // rax

  for ( result = *a1; result && *((_DWORD *)result + 10) != a2; result = (__int64 *)*result )
    ;
  return result;
}
