/*
 * XREFs of PinAddPinToList @ 0x1C0002328
 * Callers:
 *     PinCreate @ 0x1C0020C80 (PinCreate.c)
 * Callees:
 *     DeviceRequestPowerUp @ 0x1C001FD4C (DeviceRequestPowerUp.c)
 *     IsDevicePoweredUp @ 0x1C001FDC4 (IsDevicePoweredUp.c)
 */

__int64 __fastcall PinAddPinToList(PKSPIN Pin)
{
  KSPIN_LOCK *Context; // rsi
  int v2; // ebx
  KSPIN_LOCK v4; // rdi
  KSPIN_LOCK *v5; // r14
  KIRQL v6; // dl
  KSPIN_LOCK **v7; // rcx
  PIRP *v8; // rcx
  PKSFILTER ParentFilter; // rbx

  Context = (KSPIN_LOCK *)Pin->Context;
  v2 = 0;
  v4 = Context[2];
  if ( v4 )
  {
    v5 = *(KSPIN_LOCK **)(v4 + 16);
    v6 = KeAcquireSpinLockRaiseToDpc(v5 + 12);
    v7 = (KSPIN_LOCK **)v5[14];
    if ( *v7 != v5 + 13 )
      __fastfail(3u);
    Context[1] = (KSPIN_LOCK)v7;
    *Context = (KSPIN_LOCK)(v5 + 13);
    *v7 = Context;
    v5[14] = (KSPIN_LOCK)Context;
    KeReleaseSpinLock(v5 + 12, v6);
    if ( !(unsigned int)IsDevicePoweredUp(v4) )
    {
      v2 = DeviceRequestPowerUp(v8);
      if ( v2 >= 0 )
      {
        ParentFilter = KsPinGetParentFilter(Pin);
        KsReleaseControl(ParentFilter);
        KeWaitForSingleObject(v5 + 68, Executive, 0, 0, 0LL);
        KsAcquireControl(ParentFilter);
        return 0;
      }
    }
  }
  return (unsigned int)v2;
}
