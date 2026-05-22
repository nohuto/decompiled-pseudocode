/*
 * XREFs of ExceptionSafeNtDuplicateCompositionInputSink @ 0x180020C40
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18001D93C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExceptionSafeNtDuplicateCompositionInputSink(__int64 a1, __int64 a2)
{
  return NtDuplicateCompositionInputSink(a1, a2);
}
