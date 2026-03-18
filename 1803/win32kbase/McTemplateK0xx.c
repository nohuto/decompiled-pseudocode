/*
 * XREFs of McTemplateK0xx @ 0x1C00DAB18
 * Callers:
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x1C006AD10 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1C006AD50 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x1C006C740 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1C006C760 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x1C006C7B0 (EtwDwmSpriteCreateEvent.c)
 *     EtwDwmSpriteDestroyEvent @ 0x1C006C7D0 (EtwDwmSpriteDestroyEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C006CD90 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1C00D9F60 (EtwBindLogicalSurfaceRHEvent.c)
 *     EtwBindSwapChain @ 0x1C00D9F90 (EtwBindSwapChain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0xx(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 8;
  return McGenEventWriteKM(8LL, a2, &W32kControlGuid, 3u, &v4);
}
