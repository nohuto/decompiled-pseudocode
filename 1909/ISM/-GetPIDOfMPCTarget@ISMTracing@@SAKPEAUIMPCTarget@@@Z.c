/*
 * XREFs of ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180053DD4
 * Callers:
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180054D4C (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x180057848 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x180057950 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x180081854 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 *     ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@IJ@Z @ 0x18013DF14 (-MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z @ 0x18013E070 (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMTracing::GetPIDOfMPCTarget(struct IMPCTarget *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a1 + 48LL))(a1);
  return result;
}
