/*
 * XREFs of UsbhHubIsrWorker @ 0x1C000FAA0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhHubIsrWorker(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rdx
  KIRQL v6; // r9
  void *v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r8
  int *v13; // rdx
  signed __int32 v14; // r8d
  LONG result; // eax
  signed __int32 v16; // r8d
  __int64 v17; // r10
  void *v18; // r9
  __int64 v19; // rcx

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_27;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  v6 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v7 = DeviceObject->DeviceExtension;
    if ( v7 )
    {
      v8 = *((_QWORD *)v7 + 111)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
      *(_DWORD *)v8 = 2001883977;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = DeviceObject;
      *(_QWORD *)(v8 + 24) = a3;
    }
  }
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      v9 = DeviceObject->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 1902400329;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = DeviceObject;
        *(_QWORD *)(v10 + 24) = a3;
      }
    }
    v11 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v11 + 8) != a3 + 160 || (v12 = *(_QWORD **)(a3 + 168), *v12 != a3 + 160) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v6);
    UsbhHubProcessIsr(DeviceObject);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v6);
  }
  v13 = (int *)DeviceObject->DeviceExtension;
  if ( !v13 )
LABEL_27:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *v13 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, v13);
  v14 = _InterlockedExchangeAdd(v13 + 685, 0xFFFFFFFF);
  result = UsbhLogMask;
  v16 = v14 - 1;
  v17 = v13[685];
  if ( (UsbhLogMask & 4) != 0 )
  {
    v18 = DeviceObject->DeviceExtension;
    if ( v18 )
    {
      result = 760367432;
      v19 = *((_QWORD *)v18 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
      *(_DWORD *)v19 = 760367432;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = DeviceObject;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  if ( !v16 )
    return KeSetEvent((PRKEVENT)(v13 + 686), 0, 0);
  return result;
}
