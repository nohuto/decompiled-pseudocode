/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x1800060A0
 * Callers:
 *     RmpClientReleaseResourceSet @ 0x1800010B0 (RmpClientReleaseResourceSet.c)
 *     RmpClientUnregisterActivityHostCallbacks @ 0x180001260 (RmpClientUnregisterActivityHostCallbacks.c)
 *     HampIpcChannelWnfCallback @ 0x180004A50 (HampIpcChannelWnfCallback.c)
 *     HamCloseActivity @ 0x180005540 (HamCloseActivity.c)
 *     HamCompleteExtendedExecution @ 0x180006520 (HamCompleteExtendedExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL))();
}
