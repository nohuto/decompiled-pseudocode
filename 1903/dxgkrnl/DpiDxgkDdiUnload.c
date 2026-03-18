/*
 * XREFs of DpiDxgkDdiUnload @ 0x1C0052540
 * Callers:
 *     DpiCleanup @ 0x1C029DD84 (DpiCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0 @ 0x1C003554C (McTemplateK0.c)
 */

_QWORD *__fastcall DpiDxgkDdiUnload(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const GUID *v6; // r8
  _QWORD *result; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0(a1, &EventEnterDdiUnload, a3);
  (*(void (**)(void))(a1 + 248))();
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0(v5, &EventExitDdiUnload, v6);
  result = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
  result[3] = a1;
  result[4] = 0LL;
  result[5] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  return result;
}
