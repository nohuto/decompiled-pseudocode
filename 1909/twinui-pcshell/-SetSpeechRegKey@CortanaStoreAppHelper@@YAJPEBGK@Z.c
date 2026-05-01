/*
 * XREFs of ?SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z @ 0x1801E74EC
 * Callers:
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801E536C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 *     ?CleanupUndocking@CortanaStoreAppHelper@@YAJXZ @ 0x1801E5510 (-CleanupUndocking@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRegKey@CortanaStoreAppHelper@@YAJPEBG0KK@Z @ 0x1801E7438 (-SetRegKey@CortanaStoreAppHelper@@YAJPEBG0KK@Z.c)
 */

__int64 __fastcall CortanaStoreAppHelper::SetSpeechRegKey(CortanaStoreAppHelper *this, const unsigned __int16 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CortanaStoreAppHelper::SetRegKey(
         L"Software\\Microsoft\\Speech_OneCore\\Preferences",
         L"LegacyCortanaOn",
         (const unsigned __int16 *)(unsigned int)a2,
         0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x268,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
