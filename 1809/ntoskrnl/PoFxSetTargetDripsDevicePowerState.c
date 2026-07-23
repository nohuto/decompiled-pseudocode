/*
 * XREFs of PoFxSetTargetDripsDevicePowerState @ 0x14086A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x1400FE348 (PopFxAddRefDevice.c)
 *     PopFxReleaseDevice @ 0x1402D94F4 (PopFxReleaseDevice.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402DD144 (PopPepGetMinimumDevicePowerState.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoFxSetTargetDripsDevicePowerState(struct _IO_REMOVE_LOCK *a1, int a2)
{
  unsigned int v2; // ebx
  char v5; // bp
  __int64 Blink; // rcx
  char *PoolWithTag; // rax
  int v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  if ( PopFxDeviceAccountingLevel < 0 )
  {
    if ( a2 == 1 || a2 > 4 )
      return (unsigned int)-1073741811;
    v5 = dword_14043D580;
    if ( dword_14043D580 == -1 )
      return (unsigned int)-1073741823;
    if ( !a1 )
      return (unsigned int)-1073741811;
    PopFxAddRefDevice(a1);
    if ( (_InterlockedCompareExchange(&a1[25].Common.RemoveEvent.Header.Lock, 0, 0) & 0x10) != 0 )
    {
      Blink = (__int64)a1[1].Common.RemoveEvent.Header.WaitListHead.Blink;
      if ( Blink )
      {
        if ( PopPepGetMinimumDevicePowerState(Blink, v5, 1, &v9, &v10) )
        {
          if ( !a2 && v9 == v10 || a2 == v9 )
            goto LABEL_20;
          if ( v10 <= 1 || !a2 || a2 > v10 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4D584650u);
            if ( PoolWithTag )
            {
              *(_QWORD *)PoolWithTag = a1;
              *((_DWORD *)PoolWithTag + 2) = a2;
              *((_QWORD *)PoolWithTag + 4) = PopFxUpdateVetoMaskWork;
              *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
              *((_QWORD *)PoolWithTag + 2) = 0LL;
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 16), DelayedWorkQueue);
              return v2;
            }
            v2 = -1073741670;
            goto LABEL_20;
          }
        }
      }
    }
    v2 = -1073741823;
LABEL_20:
    PopFxReleaseDevice((__int64)a1);
    return v2;
  }
  return (unsigned int)-1073741637;
}
