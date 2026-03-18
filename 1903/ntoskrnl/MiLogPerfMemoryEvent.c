/*
 * XREFs of MiLogPerfMemoryEvent @ 0x1402BF600
 * Callers:
 *     MiLogMapFileEvent @ 0x140887838 (MiLogMapFileEvent.c)
 *     MiLogMemResetInfo @ 0x140889CEC (MiLogMemResetInfo.c)
 *     MiLogSectionObjectEvent @ 0x14088A950 (MiLogSectionObjectEvent.c)
 *     MiLogVirtualRotateEvent @ 0x14088B2FC (MiLogVirtualRotateEvent.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryEvent(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a3;
  v6 = a4;
  EtwTraceKernelEvent((__int64)&v5, 1u, a2, a1, a5 | 0x11000200);
}
