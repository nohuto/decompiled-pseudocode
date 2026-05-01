/*
 * XREFs of ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180019AE0
 * Callers:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180017534 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180019860 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x1800199F0 (_lambda_a7f15287e5878abd1220aaf01e051b7a_--operator().c)
 *     wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x1803AE338 (wil--details--ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___--_ScopeExitFn__lambda_9ae7.c)
 * Callees:
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x180042B60 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 */

void __fastcall CSingleViewShellExperience::UnboostDiskIo(
        CSingleViewShellExperience *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // edx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)this + 40);
  if ( (v5 & 2) != 0 )
  {
    v6 = CSingleViewShellExperience::SetImportanceValues(this, v5 & 0xFFFFFFFD);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x499,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6,
        a5);
  }
}
