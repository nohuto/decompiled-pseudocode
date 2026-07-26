/*
 * XREFs of ndisFilterCancelSendNetBufferListsInternal @ 0x1C005C280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFilterCancelSendNetBufferListsInternal(_QWORD *Parameter)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(Parameter[1] + 568LL))(*(_QWORD *)(Parameter[1] + 576LL), Parameter[3]);
}
