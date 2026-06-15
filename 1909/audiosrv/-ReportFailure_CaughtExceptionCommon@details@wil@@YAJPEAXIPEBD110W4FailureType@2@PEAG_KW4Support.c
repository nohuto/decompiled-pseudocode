/*
 * XREFs of ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800C0C10
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800BEDF0 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800CA108 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18003E564 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::details::ReportFailure_CaughtExceptionCommon(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  char v8; // bl
  int v9; // edi
  char v10; // cl
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v16; // [rsp+A0h] [rbp+28h]
  __int64 v17; // [rsp+A8h] [rbp+30h]
  __int64 v18; // [rsp+B0h] [rbp+38h]
  __int64 v19; // [rsp+B8h] [rbp+40h]
  __int64 v20; // [rsp+C0h] [rbp+48h]
  __int64 v21; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v3 = v19;
  LOBYTE(v14) = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(v19 + 2 * v4) );
  v8 = 1;
  if ( g_pfnResultFromCaughtExceptionInternal
    && (v9 = g_pfnResultFromCaughtExceptionInternal(v19 + 2 * v4, 2048 - v4, (__int64 *)va), v9 < 0) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v9 = -2147024322;
  }
  v11 = v18;
  if ( !(_DWORD)v21 && !v10 )
    v11 = 3;
  if ( (_BYTE)v14 )
    v8 = 5;
  LODWORD(v13) = v9;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, v17, v11, v13, v3, v8);
  return (unsigned int)v9;
}
