/*
 * XREFs of sub_18000EEB4 @ 0x18000EEB4
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180012A10 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x1800849D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC7E0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EC9F0 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     sub_180016C58 @ 0x180016C58 (sub_180016C58.c)
 */

__int64 __fastcall sub_18000EEB4(_WORD *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r11
  __int16 v6; // ax
  _WORD *v7; // rbx
  __int64 v9; // r11
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( a1 )
  {
    v6 = *a1;
    if ( !*a1 )
    {
      v6 = a1[1];
      v5 = 1LL;
    }
    v7 = a1 + 1;
    if ( *a1 )
      v7 = a1;
    if ( v6 )
    {
      while ( v5 <= 0x7FFFFFFF && (int)sub_180016C58(v7, 0x7FFFFFFF - v5, &v10) >= 0 )
      {
        v5 = v10 + v9 + 1;
        v7 += v10 + 1;
        if ( !*v7 )
          goto LABEL_8;
      }
      v4 = -2147483643;
      LODWORD(v5) = 0;
    }
    else
    {
LABEL_8:
      LODWORD(v5) = v5 + 1;
    }
  }
  *a3 = v5;
  return v4;
}
