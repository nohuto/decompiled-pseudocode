/*
 * XREFs of ndisMiniportPMParametersUpdated @ 0x1C00BBE1C
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014780 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0014A50 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0014EA0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMCapabilities @ 0x1C004A3CC (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004A5AC (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C004A6A4 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004AE60 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00BBC64 (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00E8C04 (ndisSetOpenEnableWakeUp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMiniportPMParametersUpdated(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 0x80u) != 0LL )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 3792) + 360LL) + 104LL))(
             *(_QWORD *)(a1 + 24),
             a1 + 1120);
  return result;
}
