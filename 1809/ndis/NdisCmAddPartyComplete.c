/*
 * XREFs of NdisCmAddPartyComplete @ 0x1C011B800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceVcPtr @ 0x1C011E8EC (ndisDereferenceVcPtr.c)
 */

void __stdcall NdisCmAddPartyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisPartyHandle,
        NDIS_HANDLE CallMgrPartyContext,
        PCO_CALL_PARAMETERS CallParameters)
{
  _QWORD *v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  if ( !Status )
    *((_QWORD *)NdisPartyHandle + 1) = CallMgrPartyContext;
  v6 = *(_QWORD **)NdisPartyHandle;
  v8 = *((_QWORD *)NdisPartyHandle + 2);
  v9 = v6[8];
  if ( *(_DWORD *)(v9 + 396) >= 6u )
    (*(void (__fastcall **)(NDIS_STATUS, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v9 + 304))(
      Status,
      v8,
      NdisPartyHandle,
      CallParameters);
  else
    (*(void (__fastcall **)(NDIS_STATUS, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v9 + 152))(
      Status,
      v8,
      NdisPartyHandle,
      CallParameters);
  if ( Status )
  {
    ndisDereferenceVcPtr(*(PVOID *)NdisPartyHandle);
    ExFreePoolWithTag(NdisPartyHandle, 0);
  }
}
