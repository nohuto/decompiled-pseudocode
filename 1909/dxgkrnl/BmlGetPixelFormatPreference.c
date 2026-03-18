/*
 * XREFs of BmlGetPixelFormatPreference @ 0x1C00DDC20
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00DBE38 (BmlCompareSourceModes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetPixelFormatPreference(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( !(_DWORD)a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v3);
    return 0xFFFFFFFFLL;
  }
  if ( (int)a1 <= 19 )
    return 0xFFFFFFFFLL;
  if ( (int)a1 <= 21 )
    return 4LL;
  if ( (_DWORD)a1 == 22 )
    return 0xFFFFFFFFLL;
  if ( (_DWORD)a1 == 32 )
    return 1LL;
  if ( (_DWORD)a1 != 23 )
  {
    if ( (_DWORD)a1 == 41 )
      return 2LL;
    return 0xFFFFFFFFLL;
  }
  return 3LL;
}
