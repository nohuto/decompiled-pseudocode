/*
 * XREFs of EtwEventSetInformation @ 0x18000A3E0
 * Callers:
 *     sub_180007DE8 @ 0x180007DE8 (sub_180007DE8.c)
 * Callees:
 *     sub_18000A434 @ 0x18000A434 (sub_18000A434.c)
 */

__int64 __fastcall EtwEventSetInformation(__int64 a1, int a2, __int64 a3, int a4)
{
  int v4; // edx

  if ( !a2 )
  {
    if ( !a4 )
      return sub_180080290();
    return 87LL;
  }
  v4 = a2 - 2;
  if ( !v4 )
  {
    if ( a3 && (unsigned int)(a4 - 3) <= 0xFFFC )
      return sub_18000A434(a1, a3, (unsigned __int16)a4);
    return 87LL;
  }
  if ( v4 != 1 )
    return 50LL;
  if ( !a3 || a4 != 1 )
    return 87LL;
  return sub_18010CD40(a1, a3);
}
