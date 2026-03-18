/*
 * XREFs of ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x140007AC4
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1400083A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1400079B4 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x140007B74 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed int LastError; // eax
  unsigned int v8; // ebx

  LastError = GetLastError();
  v8 = LastError;
  if ( !LastError )
  {
    wil::details::ReportFailure_Hr(a1, 2288LL);
    v8 = 668;
LABEL_4:
    LastError = (unsigned __int16)v8 | 0x80070000;
    goto LABEL_5;
  }
  if ( LastError > 0 )
    goto LABEL_4;
LABEL_5:
  wil::details::ReportFailure(
    a1,
    2288LL,
    (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    0LL,
    0LL,
    a6,
    3,
    LastError);
  return v8;
}
