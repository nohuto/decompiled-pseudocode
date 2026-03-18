/*
 * XREFs of DpiMiracastDdiMiracastDestroyContext @ 0x1C02A4584
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C004DC70 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pp @ 0x1C004F6A8 (McTemplateK0pp.c)
 */

ULONG __fastcall DpiMiracastDdiMiracastDestroyContext(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG result; // eax
  __int64 v6; // rcx
  const GUID *v7; // r8

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    McTemplateK0pp(a1, &EventEnterDxgkDdiMiracastDestroyContext, a3, *(_QWORD *)(a1 + 48), a2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 3208))(*(_QWORD *)(a1 + 48), a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    return McTemplateK0pp(v6, &EventLeaveDxgkDdiMiracastDestroyContext, v7, *(_QWORD *)(a1 + 48), a2);
  return result;
}
