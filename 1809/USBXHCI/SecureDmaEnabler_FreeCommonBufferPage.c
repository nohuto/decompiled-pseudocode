/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x1C0062E10
 * Callers:
 *     CommonBuffer_ReleaseSecureBuffer @ 0x1C0002410 (CommonBuffer_ReleaseSecureBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C00422A4 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C00426BC (XilCoreCommonBuffer_FreeUnusedResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(a2 + 16));
}
