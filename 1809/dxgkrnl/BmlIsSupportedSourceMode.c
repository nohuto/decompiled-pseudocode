/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C00D77D0
 * Callers:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00D76C4 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C0289630 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedSourceMode(__int64 a1, char a2, int a3)
{
  char v3; // bl
  int v6; // r9d
  int v8; // eax
  __int64 v9; // rax

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = *(_DWORD *)(a1 + 72);
  if ( a3 == 2 )
  {
    if ( (unsigned int)(v6 - 3) > 1 )
      return 0;
LABEL_18:
    if ( ((v6 - 1) & 0xFFFFFFFC) != 0 || v6 == 2 )
    {
      v9 = WdLogNewEntry5_WdAssertion(4294967292LL);
      WdLogEvent5_WdAssertion(v9);
    }
    goto LABEL_5;
  }
  if ( a3 != 1 )
  {
    if ( ((v6 - 1) & 0xFFFFFFFC) != 0 || v6 == 2 )
      return 0;
    goto LABEL_18;
  }
  if ( v6 != 1 )
    return 0;
LABEL_5:
  if ( !a2 )
    return 1;
  v8 = *(_DWORD *)(a1 + 96);
  if ( v8 >= 20 && (v8 <= 23 || v8 == 32 || v8 == 41) )
    return 1;
  return v3;
}
