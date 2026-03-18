/*
 * XREFs of ui16LangId @ 0x1C021BAF8
 * Callers:
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 *     bVerifyTTF @ 0x1C021ACCC (bVerifyTTF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ui16LangId(__int16 a1, unsigned __int16 a2)
{
  if ( a1 != 3 )
    return (unsigned __int16)word_1C02E8460[a2 & 0x1F];
  return a2;
}
