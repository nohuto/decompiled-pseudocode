/*
 * XREFs of DpiDxgkDdiStartDevice @ 0x1C015DDA8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C0035760 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiDxgkDdiStartDevice(
        __int64 a1,
        const void *a2,
        const GUID *a3,
        __int64 a4,
        unsigned int *a5,
        const unsigned int *a6)
{
  __int64 Arg1; // rdx
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  __int64 Arg3; // rsi
  const GUID *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)a1, &EventEnterDdiStartDevice, a3, a2, a3->Data1, 0, 0);
  Arg3 = (*(int (__fastcall **)(const void *, const GUID *, __int64, unsigned int *, const unsigned int *))(a1 + 152))(
           a2,
           a3,
           a4,
           a5,
           a6);
  if ( bTracingEnabled )
  {
    Arg1 = *a5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqqq(v11, &EventExitDdiStartDevice, v13, a2, Arg1, *a6, Arg3);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, Arg1);
  v14[3] = a1;
  v14[4] = a3->Data1;
  v14[5] = *a5;
  v15 = *a6;
  v14[7] = Arg3;
  v14[6] = v15;
  return (unsigned int)Arg3;
}
