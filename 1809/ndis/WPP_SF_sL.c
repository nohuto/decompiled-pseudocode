/*
 * XREFs of WPP_SF_sL @ 0x1C0049E44
 * Callers:
 *     ndisOidPMRemove @ 0x1C00BB528 (ndisOidPMRemove.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_sL(__int64 a1, __int64 a2, const char *a3, int a4)
{
  __int64 v4; // r9
  __int64 v5; // r9
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  if ( !a3 )
    a3 = "NULL";
  ndisWppFastTraceMessage(&WPP_293c7713174a39067998d2cc62157da6_Traceguids, 0x4Bu, a3, v5, &v6, 4LL, 0LL);
}
