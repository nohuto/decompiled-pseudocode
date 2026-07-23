/*
 * XREFs of ViGenericDispatchHandler @ 0x1409439F4
 * Callers:
 *     ViGenericCleanup @ 0x140943890 (ViGenericCleanup.c)
 *     ViGenericClose @ 0x1409438C0 (ViGenericClose.c)
 *     ViGenericCreate @ 0x1409438F0 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x140943910 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x140943940 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x140943970 (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x1409439A0 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x1409439D0 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x140943B90 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x140943BC0 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x140943BF0 (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x140943C20 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x140943C50 (ViGenericPnp.c)
 *     ViGenericPower @ 0x140943C80 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x140943CB0 (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x140943CE0 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x140943D10 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x140943D40 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x140943D70 (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x140943DA0 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x140943DD0 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x140943E00 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x140943E30 (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x140943E60 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x140943E90 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x140943EC0 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x140943EF0 (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x140943F20 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
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
