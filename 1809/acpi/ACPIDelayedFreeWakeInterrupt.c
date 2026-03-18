/*
 * XREFs of ACPIDelayedFreeWakeInterrupt @ 0x1C005F180
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1C005EE54 (ACPIAssociateWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C005F440 (ACPIFreeWaitWakePowerRequest.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C004ADD8 (ExFreeToNPagedLookasideList.c)
 *     ACPIFindWakeInterruptForVector @ 0x1C005F400 (ACPIFindWakeInterruptForVector.c)
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1C0060064 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 */

void __fastcall ACPIDelayedFreeWakeInterrupt(unsigned int a1, __int64 a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rbx
  int v6; // eax
  char v7; // al
  KIRQL v8; // dl
  KIRQL v9; // al
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF
  PVOID Entry; // [rsp+50h] [rbp+18h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( (int)ACPIFindWakeInterruptForVector(a1, a2, &Entry) < 0 || (v5 = Entry, (v6 = *((_DWORD *)Entry + 22)) != 0) )
  {
LABEL_10:
    v8 = v4;
    goto LABEL_11;
  }
  if ( *((_DWORD *)Entry + 14) == 5 )
  {
LABEL_6:
    if ( !v6 )
    {
      v10 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v11 = (_QWORD *)v5[1], (_QWORD *)*v11 != v5) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v5[1] = v5;
      *v5 = v5;
      ExFreeToNPagedLookasideList(&WakeInterruptLookAsideList, v5);
    }
    goto LABEL_10;
  }
  v7 = OSPowerTryAcquireWakeInterruptChangeStateLock(Entry);
  v8 = v4;
  if ( v7 )
  {
    *((_DWORD *)v5 + 14) = 1;
    KeReleaseSpinLock(&AcpiPowerLock, v4);
    Parameters.Version = 1;
    Parameters.ConnectionContext.Generic = (PVOID)v5[6];
    IoDisconnectInterruptEx(&Parameters);
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    *((_DWORD *)v5 + 14) = 5;
    v4 = v9;
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
    v6 = *((_DWORD *)v5 + 22);
    goto LABEL_6;
  }
LABEL_11:
  KeReleaseSpinLock(&AcpiPowerLock, v8);
}
