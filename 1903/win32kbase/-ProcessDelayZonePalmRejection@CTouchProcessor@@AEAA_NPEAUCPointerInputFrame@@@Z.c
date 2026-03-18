/*
 * XREFs of ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C016FE30
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0170610 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0036778 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0182D48 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

bool __fastcall CTouchProcessor::ProcessDelayZonePalmRejection(CTouchProcessor *this, struct CPointerInputFrame *a2)
{
  struct CPointerInputFrame *v2; // rbp
  bool v4; // si
  struct DelayZonePalmRejection *Instance; // rax
  int v6; // edx
  DelayZonePalmRejection *v7; // rdi
  char v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      37,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  v4 = 1;
  Instance = DelayZonePalmRejection::GetInstance();
  v7 = Instance;
  if ( Instance )
  {
    if ( *((_DWORD *)Instance + 24) && gDeviceArbitrationType )
    {
      CInpLockGuard::UnLock((CTouchProcessor *)((char *)this + 48));
      v4 = DelayZonePalmRejection::ProcessInput(v7, v2);
      CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)this + 48), (struct CLockListEntryStack *)&v9);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v6, 7, 38, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      7,
      39,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return v4;
}
