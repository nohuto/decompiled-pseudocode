/*
 * XREFs of DpiDxgkDdiProtectedCallback @ 0x1C0273B9C
 * Callers:
 *     DpiFdoExcludeAdapterAccess @ 0x1C0264AA0 (DpiFdoExcludeAdapterAccess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0037720 (McTemplateK0ppq.c)
 */

ULONG __fastcall DpiDxgkDdiProtectedCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, const GUID *, _QWORD),
        const GUID *a3,
        unsigned int a4)
{
  ULONG result; // eax
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq(a1, &EventEnterDdiProtectedCallback, a3, a1, a3, a4);
  result = a2(a1, a3, a4);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v11) = a4;
      return McTemplateK0ppq(v9, &EventExitDdiProtectedCallback, v10, a1, a3, v11);
    }
  }
  return result;
}
