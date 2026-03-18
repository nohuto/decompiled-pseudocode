/*
 * XREFs of DpiDxgkDdiStartDevice @ 0x1C0148624
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C002FF60 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiDxgkDdiStartDevice(
        __int64 a1,
        const void *a2,
        const GUID *a3,
        __int64 a4,
        const unsigned int *a5,
        const unsigned int *a6)
{
  signed int Arg3; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  _QWORD *v16; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)a1, &EventEnterDdiStartDevice, a3, a2, a3->Data1, 0, 0);
  Arg3 = (*(__int64 (__fastcall **)(const void *, const GUID *, __int64, const unsigned int *, const unsigned int *))(a1 + 152))(
           a2,
           a3,
           a4,
           a5,
           a6);
  v15 = Arg3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)*a5, &EventExitDdiStartDevice, v13, a2, *a5, *a6, Arg3);
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v16[3] = a1;
  v16[4] = a3->Data1;
  v16[5] = *a5;
  v16[6] = *a6;
  v16[7] = v15;
  return (unsigned int)v15;
}
