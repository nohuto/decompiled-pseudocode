/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800032F0
 * Callers:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800035C8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x1800089F0 (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     _lambda_672229d4a162f24ea0e3de44dcc55a21_::operator() @ 0x180029384 (_lambda_672229d4a162f24ea0e3de44dcc55a21_--operator().c)
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003D870 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     ?GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z @ 0x18003E5B0 (-GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x1800031F4 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr);
}
