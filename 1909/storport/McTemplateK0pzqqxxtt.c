/*
 * XREFs of McTemplateK0pzqqxxtt @ 0x1C00335F8
 * Callers:
 *     RaidpAdapterDpcRoutine @ 0x1C000ED40 (RaidpAdapterDpcRoutine.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001ECD0 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C0037820 (RaidCompletionDpcRoutine.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG McTemplateK0pzqqxxtt(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-81h] BYREF
  va_list v8; // [rsp+40h] [rbp-71h]
  __int64 v9; // [rsp+48h] [rbp-69h]
  struct _MCGEN_TRACE_CONTEXT *v10; // [rsp+50h] [rbp-61h]
  int v11; // [rsp+58h] [rbp-59h]
  int v12; // [rsp+5Ch] [rbp-55h]
  va_list v13; // [rsp+60h] [rbp-51h]
  __int64 v14; // [rsp+68h] [rbp-49h]
  va_list v15; // [rsp+70h] [rbp-41h]
  __int64 v16; // [rsp+78h] [rbp-39h]
  va_list v17; // [rsp+80h] [rbp-31h]
  __int64 v18; // [rsp+88h] [rbp-29h]
  va_list v19; // [rsp+90h] [rbp-21h]
  __int64 v20; // [rsp+98h] [rbp-19h]
  va_list v21; // [rsp+A0h] [rbp-11h]
  __int64 v22; // [rsp+A8h] [rbp-9h]
  va_list v23; // [rsp+B0h] [rbp-1h]
  __int64 v24; // [rsp+B8h] [rbp+7h]
  __int64 v25; // [rsp+F8h] [rbp+47h] BYREF
  va_list va; // [rsp+F8h] [rbp+47h]
  struct _MCGEN_TRACE_CONTEXT *v27; // [rsp+100h] [rbp+4Fh]
  __int64 v28; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  __int64 v30; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+5Fh]
  __int64 v32; // [rsp+118h] [rbp+67h] BYREF
  va_list va3; // [rsp+118h] [rbp+67h]
  __int64 v34; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+120h] [rbp+6Fh]
  __int64 v36; // [rsp+128h] [rbp+77h] BYREF
  va_list va5; // [rsp+128h] [rbp+77h]
  va_list va6; // [rsp+130h] [rbp+7Fh] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, struct _MCGEN_TRACE_CONTEXT *);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v32 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v34 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v36 = va_arg(va6, _QWORD);
  v3 = v27;
  va_copy(v8, va);
  v9 = 8LL;
  if ( v27 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *((_WORD *)&v27->RegistrationHandle + v4) );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v11 = v5;
  v12 = 0;
  if ( !v27 )
    v3 = (struct _MCGEN_TRACE_CONTEXT *)((char *)&Context.Logger + 4);
  v14 = 4LL;
  v10 = v3;
  va_copy(v13, va1);
  v16 = 4LL;
  va_copy(v15, va2);
  v18 = 8LL;
  va_copy(v17, va3);
  va_copy(v19, va4);
  va_copy(v21, va5);
  va_copy(v23, va6);
  v20 = 8LL;
  v22 = 4LL;
  v24 = 4LL;
  return McGenEventWrite(v3, &EventDpc, 0LL, 9u, &EventData);
}
