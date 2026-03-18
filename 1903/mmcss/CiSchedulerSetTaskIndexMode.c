/*
 * XREFs of CiSchedulerSetTaskIndexMode @ 0x1C0002200
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A350 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSetTaskIndexMode @ 0x1C0003DB0 (CiLogSetTaskIndexMode.c)
 *     CiLogThreadBuffering @ 0x1C0004014 (CiLogThreadBuffering.c)
 */

void __fastcall CiSchedulerSetTaskIndexMode(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *i; // r14
  bool v10; // zf
  int v11; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C00072D8 )
      CiLogSetTaskIndexMode();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v4 = 0;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    v5 = *(_DWORD *)(a1 + 184) | 1;
    if ( a2 == 1 )
      v4 = 2;
    v6 = *(_DWORD *)(a1 + 184) & 0xFFFFFFFC | 1 | v4;
    *(_DWORD *)(a1 + 184) = v6;
    v7 = v5 ^ v6;
    if ( (v7 & 2) != 0 )
    {
      if ( a2 == 1 )
      {
        if ( ++CiTotalTasksBuffering )
          v7 = 1LL;
        else
          LOBYTE(v7) = 0;
        if ( (_BYTE)v7 != CiCurrentMediaBufferingState && (!(_BYTE)v7 || !CiTotalTasksDeadlineExpired) )
        {
          CiCurrentMediaBufferingState = v7;
          PoNotifyMediaBuffering(v7);
        }
      }
      v8 = *(_QWORD **)(a1 + 32);
      for ( i = (_QWORD *)(a1 + 32); v8 != i; v8 = (_QWORD *)*v8 )
      {
        if ( byte_1C00072D8 )
          CiLogThreadBuffering(v8 - 10, a2 == 1);
        KeUpdateThreadTag(v8[2], a2);
      }
      if ( a2 != 1 )
      {
        v10 = CiTotalTasksBuffering == 1;
        v11 = --CiTotalTasksBuffering;
        if ( !v10 != CiCurrentMediaBufferingState && (!v11 || !CiTotalTasksDeadlineExpired) )
        {
          CiCurrentMediaBufferingState = !v10;
          LOBYTE(v7) = !v10;
          PoNotifyMediaBuffering(v7);
        }
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
