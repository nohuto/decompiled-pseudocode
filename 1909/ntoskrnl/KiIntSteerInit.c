/*
 * XREFs of KiIntSteerInit @ 0x1409FE860
 * Callers:
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409FE918 (KiIntSteerDetermineSteeringEnabled.c)
 */

__int64 KiIntSteerInit()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  qword_140446B38 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask = 1310721;
  memset(&dword_140446B64, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_140446C24, 0, 0xA4uLL);
  ((void (__fastcall *)(__int64, __int64, int *, char *))off_140426798[0])(39LL, 4LL, &KiInterruptControllerInfo, &v1);
  KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
  return 0LL;
}
