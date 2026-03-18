/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1C0094958
 * Callers:
 *     FxInitialize @ 0x1C00595DC (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1C001B400 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // si
  int v3; // ebp
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  PVOID v6; // rcx
  char *v7; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( P )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( dword_1C00AEE40 >= dword_1C00AEE44 )
    {
      if ( dword_1C00AEE44 > 0x23F )
        goto $Done_68;
      v3 = dword_1C00AEE44 + 10;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 56LL * (dword_1C00AEE44 + 10), 0x72447846u);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
        goto $Done_68;
      memmove(PoolWithTag, P, 56LL * dword_1C00AEE44);
      v6 = P;
      P = v5;
      dword_1C00AEE44 = v3;
      ExFreePoolWithTag(v6, 0);
    }
    v7 = (char *)P + 56 * dword_1C00AEE40;
    *(_QWORD *)v7 = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *((_QWORD *)v7 + 1) = *(_QWORD *)&WdfBindInfo->Version.Major;
    *((_DWORD *)v7 + 4) = WdfBindInfo->Version.Build;
    *(_OWORD *)(v7 + 20) = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)(v7 + 36) = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v7[51] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = dword_1C00AEE40++;
$Done_68:
    KeReleaseSpinLock(&SpinLock, v2);
  }
}
