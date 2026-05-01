/*
 * XREFs of ?SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z @ 0x1801C84CC
 * Callers:
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801C634C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 *     ?CleanupUndocking@CortanaStoreAppHelper@@YAJXZ @ 0x1801C64F0 (-CleanupUndocking@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRegKey@CortanaStoreAppHelper@@YAJPEBG0KK@Z @ 0x1801C8418 (-SetRegKey@CortanaStoreAppHelper@@YAJPEBG0KK@Z.c)
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
