/*
 * XREFs of CmpFreeExtraParameter @ 0x1408267E8
 * Callers:
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     VrpPostOpenOrCreate @ 0x140843E6C (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1408452F8 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *); // rax

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *))a1[4];
  if ( v1 )
    v1(a1 + 2, a1 + 6);
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
