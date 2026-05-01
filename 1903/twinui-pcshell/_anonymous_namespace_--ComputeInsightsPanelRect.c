/*
 * XREFs of _anonymous_namespace_::ComputeInsightsPanelRect @ 0x1801B7EE8
 * Callers:
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x1801B9CB4 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180040A08 (-IsBiDiLocale@@YAHK@Z.c)
 */

_DWORD *__fastcall anonymous_namespace_::ComputeInsightsPanelRect(_DWORD *a1, int a2, int a3, int *a4)
{
  LANGID ThreadUILanguage; // ax
  int v9; // r10d
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // eax

  ThreadUILanguage = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
    v9 = *a4;
  else
    v9 = a4[2] - a2;
  *a1 = v9;
  v10 = v9 + a2;
  v11 = a4[3] - a3;
  a1[3] = a4[3];
  v12 = *a4;
  if ( v9 + a2 > a4[2] )
    v10 = a4[2];
  a1[2] = v10;
  a1[1] = v11;
  if ( v9 < v12 )
    *a1 = v12;
  v13 = v11;
  if ( v11 < a4[1] )
    v13 = a4[1];
  a1[1] = v13;
  return a1;
}
