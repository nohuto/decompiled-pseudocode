/*
 * XREFs of MouseAddDeviceEx @ 0x1C000CD54
 * Callers:
 *     MouseAddDevice @ 0x1C000CBB0 (MouseAddDevice.c)
 *     MouseClassFindMorePorts @ 0x1C000D530 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C0001780 (memmove.c)
 *     memset @ 0x1C0001AC0 (memset.c)
 *     MouseClassLogError @ 0x1C0002B34 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_S @ 0x1C0004B78 (WPP_RECORDER_SF_S.c)
 *     MouSendConnectRequest @ 0x1C000CA84 (MouSendConnectRequest.c)
 */

__int64 __fastcall MouseAddDeviceEx(KSPIN_LOCK *a1, const WCHAR *a2, __int64 a3)
{
  int v6; // ebp
  __int64 v7; // rdx
  KSPIN_LOCK *v8; // rsi
  __int64 v9; // rdi
  PVOID PoolWithTag; // r14
  __int64 v12; // rcx
  char v13; // cl
  int ValueData; // [rsp+20h] [rbp-48h]

  v6 = 0;
  KeInitializeSpinLock(a1 + 9);
  v8 = *(KSPIN_LOCK **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v8 = a1;
  a1[1] = *v8;
  if ( *(KSPIN_LOCK **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
    goto LABEL_21;
  if ( *(KSPIN_LOCK **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v8 )
  {
    v6 = MouSendConnectRequest((__int64)a1, v7);
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v9 = 0LL;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v9 + 19) )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
          goto LABEL_10;
      }
      *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v9 + 19) = 0;
    }
LABEL_10:
    if ( (_DWORD)v9 == LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)512,
                      24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1),
                      0x43756F4Du);
      if ( !PoolWithTag )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        return 3221225626LL;
      }
      memset(PoolWithTag, 0, 24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1));
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        memmove(PoolWithTag, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
        ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
      }
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)PoolWithTag;
      ++LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    *((_DWORD *)a1 + 45) = v9;
    v12 = 3 * v9;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v12 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v12) = a3;
    v13 = *(_BYTE *)(*a1 + 76);
    if ( *(char *)(*v8 + 76) >= v13 )
      v13 = *(_BYTE *)(*v8 + 76);
    *(_BYTE *)(*v8 + 76) = v13;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_21;
  }
  if ( a1 == v8 )
  {
    v6 = MouSendConnectRequest((__int64)a1, v7);
LABEL_21:
    if ( a1 == v8 )
    {
      v6 = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C0009280 + 2);
      if ( v6 >= 0 )
      {
        WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x14u, ValueData, a2);
      }
      else
      {
        WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, 0x13u, ValueData, a2);
        MouseClassLogError(a1, -2147155963, 20014, v6, 0, 0LL, 0);
      }
    }
  }
  return (unsigned int)v6;
}
