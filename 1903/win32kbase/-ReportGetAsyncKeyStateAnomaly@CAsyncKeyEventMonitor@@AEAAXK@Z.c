/*
 * XREFs of ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C01220B8
 * Callers:
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C0121F40 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C010FB50 (McTemplateK0qqq.c)
 */

void __fastcall CAsyncKeyEventMonitor::ReportGetAsyncKeyStateAnomaly(
        CAsyncKeyEventMonitor *this,
        unsigned int a2,
        const GUID *a3)
{
  unsigned int *v4; // rbx
  unsigned int i; // edi
  unsigned int v6; // r9d
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned int v8; // eax

  v4 = (unsigned int *)((char *)this + 12);
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = *(v4 - 1);
    if ( v6 == -1 )
      break;
    v7 = (struct _MCGEN_TRACE_CONTEXT *)*v4;
    if ( (unsigned int)v7 >= 2 )
    {
      v8 = *v4;
      if ( a2 )
        v8 = (unsigned int)v7 / a2;
      if ( v8 )
      {
        if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
          McTemplateK0qqq(v7, &AuditApiGetAsyncKeyState, a3, v6, a2, *v4);
      }
    }
    *(v4 - 1) = -1;
    *v4 = -1;
    v4 += 2;
  }
}
