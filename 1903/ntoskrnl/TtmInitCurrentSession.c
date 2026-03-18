/*
 * XREFs of TtmInitCurrentSession @ 0x1408BD418
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1408BE218 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 *     TtmiLogInitCurrentSessionStart @ 0x1408C1F14 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1408C1FB8 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1408C2B08 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 TtmInitCurrentSession()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  int v3; // edi
  PVOID PoolWithTag; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  TtmiLogInitCurrentSessionStart();
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  if ( TtmpSession )
  {
    v3 = -1073741637;
LABEL_3:
    TtmiLogError("TtmInitCurrentSession");
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x536D7454u);
  v5 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x120uLL);
  *(_DWORD *)(v5 + 8) = 1;
  *(_DWORD *)v5 = v2;
  LOBYTE(v6) = 1;
  *(_QWORD *)(v5 + 48) = v5 + 40;
  *(_QWORD *)(v5 + 40) = v5 + 40;
  *(_QWORD *)(v5 + 88) = v5 + 80;
  *(_QWORD *)(v5 + 80) = v5 + 80;
  *(_QWORD *)(v5 + 64) = v5 + 72;
  *(_DWORD *)(v5 + 56) = 32;
  *(_DWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 116) = 0;
  *(_QWORD *)(v5 + 104) = v5 + 96;
  *(_QWORD *)(v5 + 96) = v5 + 96;
  *(_DWORD *)(v5 + 120) = 1;
  *(_QWORD *)(v5 + 136) = v5 + 128;
  *(_QWORD *)(v5 + 128) = v5 + 128;
  *(_QWORD *)(v5 + 152) = v5 + 144;
  *(_QWORD *)(v5 + 144) = v5 + 144;
  *(_QWORD *)(v5 + 168) = v5 + 160;
  *(_QWORD *)(v5 + 160) = v5 + 160;
  *(_QWORD *)(v5 + 184) = v5 + 176;
  *(_QWORD *)(v5 + 176) = v5 + 176;
  *(_DWORD *)(v5 + 4) |= 0x800u;
  TtmiLogSessionDeviceAssignmentPolicySet(v6);
  *(_DWORD *)(v5 + 224) = 0;
  *(_QWORD *)(v5 + 192) = 0LL;
  *(_QWORD *)(v5 + 208) = TtmpSessionWorker;
  *(_QWORD *)(v5 + 216) = v5;
  *(_DWORD *)(v5 + 4) |= 8u;
  *(_DWORD *)(v5 + 76) = 1;
  v3 = TtmiCreateTerminal(v5, 0x1F0003u, 0, (_QWORD *)(v5 + 24), &v8, (_QWORD *)(v5 + 32));
  if ( v3 >= 0 )
  {
    TtmiUpdateActiveTerminalCount(v5, 0LL, 0LL);
    *(_BYTE *)(v5 + 240) = 1;
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_VIDEO_DIM_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v5,
           (PVOID *)(v5 + 248)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_CONSOLE_VIDEO_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v5,
           (PVOID *)(v5 + 256)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *(_DWORD *)(v5 + 272) = 0;
    v3 = 0;
    *(_QWORD *)(v5 + 280) = 0LL;
    *(_DWORD *)(v5 + 276) = 0;
    TtmpSession = v5;
    v5 = 0LL;
  }
  else
  {
    TtmiLogError("TtmInitCurrentSession");
  }
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, 0x536D7454u);
LABEL_15:
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmiLogInitCurrentSessionStop((unsigned int)v3);
  return (unsigned int)v3;
}
