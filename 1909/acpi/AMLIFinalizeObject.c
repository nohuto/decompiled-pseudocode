/*
 * XREFs of AMLIFinalizeObject @ 0x1C0062FA4
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F340 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     AMLIRestartContext @ 0x1C00631C0 (AMLIRestartContext.c)
 *     SetObjectsFlag @ 0x1C0066A74 (SetObjectsFlag.c)
 */

void __fastcall AMLIFinalizeObject(_QWORD *a1, char a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rbx
  KIRQL v7; // al
  bool v8; // di

  dword_1C0082858 = 0;
  pszDest = 0;
  if ( a2 )
  {
    ExAcquireSpinLockShared(&ACPINamespaceLock);
    v3 = SetObjectsFlag(*a1);
    v5 = *(_QWORD *)(v4 + 136);
    if ( v5 )
      v3 = SetObjectsFlag(v5);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
  }
  v6 = *(_QWORD *)(*a1 + 48LL);
  if ( v6 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 40));
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 48), 0xFFFFFFFF) == 1 && *(_QWORD *)(v6 + 56);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 40), v7);
    if ( v8 )
      AMLIRestartContext(*(_QWORD *)(v6 + 56));
  }
}
