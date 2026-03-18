/*
 * XREFs of CreateKernelEvent @ 0x1C005EAA0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 *     VideoPortCallout @ 0x1C0106300 (VideoPortCallout.c)
 *     IVStartupWorkerThread @ 0x1C018BDE0 (IVStartupWorkerThread.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C018FFC8 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 */

struct _KEVENT *__fastcall CreateKernelEvent(EVENT_TYPE Type, BOOLEAN a2)
{
  struct _KEVENT *v4; // rax
  struct _KEVENT *v5; // rbx

  v4 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x654B7355u);
  v5 = v4;
  if ( v4 )
    KeInitializeEvent(v4, Type, a2);
  return v5;
}
