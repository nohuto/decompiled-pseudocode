/*
 * XREFs of UsbhWaitForPortResume @ 0x1C0048A04
 * Callers:
 *     UsbhSyncResumePort @ 0x1C0048790 (UsbhSyncResumePort.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0019870 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0044F14 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPortResumeTimeout @ 0x1C0047F10 (UsbhPortResumeTimeout.c)
 */

__int64 __fastcall UsbhWaitForPortResume(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rsi
  KSPIN_LOCK *v7; // rsi
  char v8; // r9
  KIRQL v9; // al
  __int64 result; // rax

  v6 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1347573553, 0LL, *(unsigned __int16 *)(a2 + 4));
  v7 = (KSPIN_LOCK *)(v6 + 1236);
  *(_BYTE *)(a2 + 2838) = v8;
  while ( 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(v7);
    if ( *(_DWORD *)(a2 + 696) == 3 )
    {
      KeReleaseSpinLock(v7, v9);
      result = UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, (void *)(a2 + 712), 500, 1347573623, 0xBu, a2);
    }
    else
    {
      KeReleaseSpinLock(v7, v9);
      result = 0LL;
    }
    if ( (_DWORD)result != 258 )
      break;
    UsbhPCE_ResumeTimeout((__int64)DeviceObject, a3, *(_WORD *)(a2 + 4));
  }
  if ( *(_BYTE *)(a2 + 2838) )
    return UsbhPortResumeTimeout(DeviceObject, a3, a2);
  return result;
}
