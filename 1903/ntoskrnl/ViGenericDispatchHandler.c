/*
 * XREFs of ViGenericDispatchHandler @ 0x1409822D4
 * Callers:
 *     ViGenericCleanup @ 0x140982170 (ViGenericCleanup.c)
 *     ViGenericClose @ 0x1409821A0 (ViGenericClose.c)
 *     ViGenericCreate @ 0x1409821D0 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x1409821F0 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x140982220 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x140982250 (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x140982280 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x1409822B0 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x140982470 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x1409824A0 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x1409824D0 (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x140982500 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x140982530 (ViGenericPnp.c)
 *     ViGenericPower @ 0x140982560 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x140982590 (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x1409825C0 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x1409825F0 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x140982620 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x140982650 (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x140982680 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x1409826B0 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x1409826E0 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x140982710 (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x140982740 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x140982770 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x1409827A0 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x1409827D0 (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x140982800 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ViGenericDispatchHandler(__int64 a1, __int64 a2, __int64 (*a3)(void), unsigned int a4)
{
  ULONG_PTR v4; // r11
  __int64 v5; // rbx
  ULONG_PTR v6; // r9

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a4;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 64LL);
  if ( !v6 || !*(_QWORD *)(v6 + 8 * v5 + 32) )
    KeBugCheckEx(0xC4u, 0x1013uLL, v4, v6, 0LL);
  if ( (MmVerifierData & 0x80000) != 0 && a3 )
    return a3();
  else
    return (*(__int64 (**)(void))(v6 + 8 * v5 + 32))();
}
