/*
 * XREFs of McTemplateK0pqz @ 0x1C01082A8
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     hdevEnumerate @ 0x1C003F2B0 (hdevEnumerate.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqz(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  va_list v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  va_list v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  struct _MCGEN_TRACE_CONTEXT *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  struct _MCGEN_TRACE_CONTEXT *v19; // [rsp+B8h] [rbp+38h]
  va_list va2; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, struct _MCGEN_TRACE_CONTEXT *);
  v3 = v19;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  v11 = 4LL;
  if ( v19 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *((_WORD *)&v19->RegistrationHandle + v4) );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v13 = v5;
  v14 = 0;
  if ( !v19 )
    v3 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v12 = v3;
  return McGenEventWrite(v3, &LockAcquireExclusive, (LPCGUID)&Context.Flags, 4u, &EventData);
}
