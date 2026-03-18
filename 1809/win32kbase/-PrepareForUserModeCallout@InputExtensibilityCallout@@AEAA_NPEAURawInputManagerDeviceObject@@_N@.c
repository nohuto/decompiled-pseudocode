/*
 * XREFs of ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0148EDC
 * Callers:
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0148CD0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0148FF8 (-ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z.c)
 */

char __fastcall InputExtensibilityCallout::PrepareForUserModeCallout(
        InputExtensibilityCallout *this,
        struct RawInputManagerDeviceObject *a2,
        char a3)
{
  __int64 v3; // rdi
  InputExtensibilityCallout *v7; // rcx
  char v8; // bl

  v3 = *((_QWORD *)a2 + 53);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !gptiCurrent
    || *(struct _KTHREAD **)(v3 + 40) != KeGetCurrentThread() )
  {
    return 0;
  }
  v8 = 1;
  *(_BYTE *)(v3 + 82) = 1;
  *((_BYTE *)this + 8) = 1;
  if ( InputExtensibilityCallout::ShouldUpdateInputBufferLockState(v7, (const struct RawInputManagerObject *)v3) )
  {
    *(_QWORD *)(v3 + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a3 )
  {
    *(_QWORD *)(v3 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0);
  *((_QWORD *)gptiCurrent + 166) = a2;
  return v8;
}
