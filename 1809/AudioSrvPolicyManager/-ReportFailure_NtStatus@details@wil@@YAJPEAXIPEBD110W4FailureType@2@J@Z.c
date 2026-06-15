/*
 * XREFs of ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180021ADC
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180021B4C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002048 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002C68 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v9; // ebx

  v9 = wil::details::NtStatusToHr((wil::details *)a8);
  wil::details::ReportFailure(
    a1,
    0x422u,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    0LL,
    0LL,
    a6,
    1,
    v9,
    0LL,
    0);
  return v9;
}
