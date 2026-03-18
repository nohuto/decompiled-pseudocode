/*
 * XREFs of McTemplateK0t @ 0x1C00EB444
 * Callers:
 *     EtwTraceTouchPadCurtainState @ 0x1C00E81F0 (EtwTraceTouchPadCurtainState.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0t(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, int a4)
{
  EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite(a1, &TouchPadCurtainState, (LPCGUID)&Context.Flags, 2u, &v5);
}
