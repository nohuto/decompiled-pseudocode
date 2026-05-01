/*
 * XREFs of HampIpcChannelObjectCompareObjectsForTree @ 0x180006710
 * Callers:
 *     RmpClientAcquireResourceSet @ 0x180004DA0 (RmpClientAcquireResourceSet.c)
 *     RmpClientRegisterActivityHostCallbacks @ 0x180005050 (RmpClientRegisterActivityHostCallbacks.c)
 *     HamCreateActivityEx @ 0x1800052A0 (HamCreateActivityEx.c)
 *     HamCreateActivityForProcess @ 0x1800060C0 (HamCreateActivityForProcess.c)
 *     HamCreateExtendedExecution @ 0x180006310 (HamCreateExtendedExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectCompareObjectsForTree(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 40) + 64LL))();
}
