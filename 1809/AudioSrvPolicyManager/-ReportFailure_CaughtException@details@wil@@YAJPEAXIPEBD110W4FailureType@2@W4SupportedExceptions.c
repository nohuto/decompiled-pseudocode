/*
 * XREFs of ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18001AF1C
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001AEF4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B03C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002C68 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180038000 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  char v8; // dl
  __int64 v11; // rcx
  signed int v12; // ebx
  signed int v13; // eax
  int v14; // r10d
  char v15; // r9
  _BYTE v17[16]; // [rsp+50h] [rbp-1048h] BYREF
  _WORD v18[2048]; // [rsp+60h] [rbp-1038h] BYREF

  v8 = 0;
  v18[0] = 0;
  v17[0] = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( v18[v11] );
  v12 = 0;
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    v13 = g_pfnResultFromCaughtExceptionInternal(&v18[v11], 2048 - v11, v17);
    v8 = v17[0];
    v12 = v13;
  }
  v14 = 3;
  if ( v12 >= 0 )
    v12 = -2147024322;
  else
    v14 = a7;
  v15 = 1;
  if ( v8 )
    v15 = 5;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, v14, v12, v18, v15);
  return (unsigned int)v12;
}
