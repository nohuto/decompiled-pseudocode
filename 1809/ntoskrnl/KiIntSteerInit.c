/*
 * XREFs of KiIntSteerInit @ 0x1409C6AB0
 * Callers:
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409C6B68 (KiIntSteerDetermineSteeringEnabled.c)
 */

__int64 KiIntSteerInit()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  qword_14041C298 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask[0] = 1310721;
  memset(&dword_14041C2C4, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_14041C384, 0, 0xA4uLL);
  ((void (__fastcall *)(__int64, __int64, int *, char *))off_140401458[0])(39LL, 4LL, &KiInterruptControllerInfo, &v1);
  KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
  return 0LL;
}
