/*
 * XREFs of CreateKernelEvent @ 0x1C00141F0
 * Callers:
 *     VideoPortCallout @ 0x1C00A5730 (VideoPortCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C0135110 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 */

struct _KEVENT *__fastcall CreateKernelEvent(EVENT_TYPE Type, BOOLEAN a2)
{
  struct _KEVENT *v4; // rax
  struct _KEVENT *v5; // rbx

  v4 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1699443541LL);
  v5 = v4;
  if ( v4 )
    KeInitializeEvent(v4, Type, a2);
  return v5;
}
