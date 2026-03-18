/*
 * XREFs of DpiMiracastDdiMiracastDestroyContext @ 0x1C026916C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C00471B8 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0047BF4 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pp @ 0x1C0048C0C (McTemplateK0pp.c)
 */

ULONG __fastcall DpiMiracastDdiMiracastDestroyContext(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG result; // eax
  __int64 v6; // rcx
  const GUID *v7; // r8

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    McTemplateK0pp(a1, &EventEnterDxgkDdiMiracastDestroyContext, a3, *(_QWORD *)(a1 + 48), a2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 3136))(*(_QWORD *)(a1 + 48), a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    return McTemplateK0pp(v6, &EventLeaveDxgkDdiMiracastDestroyContext, v7, *(_QWORD *)(a1 + 48), a2);
  return result;
}
