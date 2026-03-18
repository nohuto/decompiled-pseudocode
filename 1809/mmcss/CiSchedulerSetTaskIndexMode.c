/*
 * XREFs of CiSchedulerSetTaskIndexMode @ 0x1C0001310
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A9C0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSetTaskIndexMode @ 0x1C0003FB8 (CiLogSetTaskIndexMode.c)
 *     CiLogThreadBuffering @ 0x1C000421C (CiLogThreadBuffering.c)
 */

void __fastcall CiSchedulerSetTaskIndexMode(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // ecx
  _QWORD *v7; // rbx
  _QWORD *i; // rsi
  bool v9; // zf
  int v10; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C00072E8 )
      CiLogSetTaskIndexMode();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v4 = 0;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    v5 = *(_DWORD *)(a1 + 184) | 1;
    if ( a2 == 1 )
      v4 = 2;
    v6 = *(_DWORD *)(a1 + 184) & 0xFFFFFFFC | 1 | v4;
    *(_DWORD *)(a1 + 184) = v6;
    if ( (((unsigned __int8)v5 ^ (unsigned __int8)v6) & 2) != 0 )
    {
      if ( a2 == 1
        && (++CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
        && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
      {
        CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
        PoNotifyMediaBuffering();
      }
      v7 = *(_QWORD **)(a1 + 32);
      for ( i = (_QWORD *)(a1 + 32); v7 != i; v7 = (_QWORD *)*v7 )
      {
        if ( byte_1C00072E8 )
          CiLogThreadBuffering(v7 - 10, a2 == 1);
        KeUpdateThreadTag(v7[2], a2);
      }
      if ( a2 != 1 )
      {
        v9 = CiTotalTasksBuffering == 1;
        v10 = --CiTotalTasksBuffering;
        if ( !v9 != CiCurrentMediaBufferingState && (!v10 || !CiTotalTasksDeadlineExpired) )
        {
          CiCurrentMediaBufferingState = !v9;
          PoNotifyMediaBuffering();
        }
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
