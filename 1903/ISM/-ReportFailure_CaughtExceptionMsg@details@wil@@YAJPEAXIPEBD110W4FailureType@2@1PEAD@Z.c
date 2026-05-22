/*
 * XREFs of ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x180059AEC
 * Callers:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180059898 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180037CA0 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800559B8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x180059A08 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionMsg(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        char *a9)
{
  unsigned int v11; // edi
  char *v12; // r9
  _WORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  signed __int64 v18; // rax
  __int16 v19; // r8
  char *v20; // rax
  __int64 v22; // [rsp+20h] [rbp-1058h]
  __int64 v23; // [rsp+40h] [rbp-1038h]
  char v24; // [rsp+48h] [rbp-1030h]
  _WORD v25[2048]; // [rsp+50h] [rbp-1028h] BYREF

  v11 = (unsigned int)a2;
  wil::details::PrintLoggingMessage((wil::details *)v25, a2, a8, a9);
  v13 = v25;
  v14 = 2048LL;
  do
  {
    if ( !*v13 )
      break;
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( v14 )
    v15 = 2048 - v14;
  else
    v15 = 0LL;
  if ( v14 )
  {
    v12 = (char *)&v25[v15];
    v16 = 2048 - v15;
    if ( 2048 != v15 )
    {
      v17 = 2147483646LL;
      v18 = (char *)L" -- " - v12;
      do
      {
        if ( !v17 )
          break;
        v19 = *(_WORD *)&v12[v18];
        if ( !v19 )
          break;
        *(_WORD *)v12 = v19;
        --v17;
        v12 += 2;
        --v16;
      }
      while ( v16 );
    }
    v20 = v12 - 2;
    if ( v16 )
      v20 = v12;
    *(_WORD *)v20 = 0;
  }
  return wil::details::ReportFailure_CaughtExceptionCommon(
           a1,
           v11,
           a3,
           (__int64)v12,
           v22,
           a6,
           2,
           (__int64)v25,
           v23,
           v24);
}
