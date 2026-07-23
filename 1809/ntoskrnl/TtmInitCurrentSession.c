/*
 * XREFs of TtmInitCurrentSession @ 0x140880AE8
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x14087FA6C (TtmiCreateTerminal.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1408817CC (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogInitCurrentSessionStart @ 0x140885270 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x140885314 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x140885E64 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 TtmInitCurrentSession()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  unsigned int v3; // edi
  int v4; // edx
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  TtmiLogInitCurrentSessionStart();
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  if ( TtmpSession )
  {
    v3 = -1073741637;
    v4 = 1231;
LABEL_3:
    TtmiLogError("TtmInitCurrentSession", v4, -1, v3);
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x536D7454u);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    v4 = 1240;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x120uLL);
  *(_DWORD *)(v6 + 8) = 1;
  *(_DWORD *)v6 = v2;
  LOBYTE(v7) = 1;
  *(_QWORD *)(v6 + 48) = v6 + 40;
  *(_QWORD *)(v6 + 40) = v6 + 40;
  *(_QWORD *)(v6 + 88) = v6 + 80;
  *(_QWORD *)(v6 + 80) = v6 + 80;
  *(_QWORD *)(v6 + 64) = v6 + 72;
  *(_DWORD *)(v6 + 56) = 32;
  *(_DWORD *)(v6 + 112) = 0;
  *(_DWORD *)(v6 + 116) = 0;
  *(_QWORD *)(v6 + 104) = v6 + 96;
  *(_QWORD *)(v6 + 96) = v6 + 96;
  *(_DWORD *)(v6 + 120) = 1;
  *(_QWORD *)(v6 + 136) = v6 + 128;
  *(_QWORD *)(v6 + 128) = v6 + 128;
  *(_QWORD *)(v6 + 152) = v6 + 144;
  *(_QWORD *)(v6 + 144) = v6 + 144;
  *(_QWORD *)(v6 + 168) = v6 + 160;
  *(_QWORD *)(v6 + 160) = v6 + 160;
  *(_QWORD *)(v6 + 184) = v6 + 176;
  *(_QWORD *)(v6 + 176) = v6 + 176;
  *(_DWORD *)(v6 + 4) |= 0x800u;
  TtmiLogSessionDeviceAssignmentPolicySet(v7);
  *(_DWORD *)(v6 + 224) = 0;
  *(_QWORD *)(v6 + 192) = 0LL;
  *(_QWORD *)(v6 + 208) = TtmpSessionWorker;
  *(_QWORD *)(v6 + 216) = v6;
  *(_DWORD *)(v6 + 4) |= 8u;
  *(_DWORD *)(v6 + 76) = 1;
  v8 = TtmiCreateTerminal(v6, 0x1F0003u, 0, (unsigned __int64 *)(v6 + 24), &v10, (_QWORD *)(v6 + 32));
  v3 = v8;
  if ( v8 >= 0 )
  {
    TtmiUpdateActiveTerminalCount(v6, 0LL, 0LL);
    *(_BYTE *)(v6 + 240) = 1;
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_VIDEO_DIM_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v6,
           (PVOID *)(v6 + 248)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_CONSOLE_VIDEO_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v6,
           (PVOID *)(v6 + 256)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *(_DWORD *)(v6 + 272) = 0;
    v3 = 0;
    *(_QWORD *)(v6 + 280) = 0LL;
    *(_DWORD *)(v6 + 276) = 0;
    TtmpSession = v6;
    v6 = 0LL;
  }
  else
  {
    TtmiLogError("TtmInitCurrentSession", 1314, v8, v8);
  }
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x536D7454u);
LABEL_15:
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmiLogInitCurrentSessionStop(v3);
  return v3;
}
