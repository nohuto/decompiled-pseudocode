/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x1C006B054
 * Callers:
 *     CommonBuffer_ReleaseSecureBuffer @ 0x1C00025D8 (CommonBuffer_ReleaseSecureBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0047B48 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C004801C (XilCoreCommonBuffer_FreeUnusedResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(a2 + 16));
}
