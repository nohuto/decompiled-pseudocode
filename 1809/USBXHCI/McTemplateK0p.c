/*
 * XREFs of McTemplateK0p @ 0x1C0011608
 * Callers:
 *     Controller_D0EntryRestoreState @ 0x1C000B688 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000B9D4 (Controller_D0ExitSaveState.c)
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C000252C (McGenEventWrite.c)
 */

ULONG McTemplateK0p(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWrite(a1, a2, 0LL, 2u, &v4);
}
