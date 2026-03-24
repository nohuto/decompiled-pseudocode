/*
 * XREFs of ViGenericDispatchHandler @ 0x1409429F4
 * Callers:
 *     ViGenericCleanup @ 0x140942890 (ViGenericCleanup.c)
 *     ViGenericClose @ 0x1409428C0 (ViGenericClose.c)
 *     ViGenericCreate @ 0x1409428F0 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x140942910 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x140942940 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x140942970 (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x1409429A0 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x1409429D0 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x140942B90 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x140942BC0 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x140942BF0 (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x140942C20 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x140942C50 (ViGenericPnp.c)
 *     ViGenericPower @ 0x140942C80 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x140942CB0 (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x140942CE0 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x140942D10 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x140942D40 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x140942D70 (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x140942DA0 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x140942DD0 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x140942E00 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x140942E30 (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x140942E60 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x140942E90 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x140942EC0 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x140942EF0 (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x140942F20 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
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
