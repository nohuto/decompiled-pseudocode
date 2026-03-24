/*
 * XREFs of KeyboardAddDeviceEx @ 0x1C000DB20
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000D610 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000D7F0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002A00 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002EC0 (memmove.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     KeyboardClassLogError @ 0x1C0004FD4 (KeyboardClassLogError.c)
 *     KbdSendConnectRequest @ 0x1C000DD80 (KbdSendConnectRequest.c)
 */

__int64 __fastcall KeyboardAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdi
  int v8; // edx
  int v9; // r8d
  __int64 v11; // r15
  PVOID PoolWithTag; // r12
  __int64 v13; // rcx
  char v14; // cl
  int ValueData; // [rsp+20h] [rbp-48h]

  v6 = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v7 = a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v7;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
    goto LABEL_7;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels != v7 )
  {
    if ( a1 != v7 )
      return (unsigned int)v6;
    v6 = KbdSendConnectRequest(a1);
LABEL_7:
    if ( a1 == v7 )
    {
      v6 = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C000A2C8 + 2);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, v9, 15, ValueData, (__int64)a2);
        }
        KeyboardClassLogError((void *)a1, -2147155963, 10014, v6, 0, 0LL, 0);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, v9, 16, ValueData, (__int64)a2);
      }
    }
    return (unsigned int)v6;
  }
  v6 = KbdSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  v11 = 0LL;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v11 + 19) )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_17;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v11 + 19) = 0;
  }
LABEL_17:
  if ( (_DWORD)v11 != LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_23:
    *(_DWORD *)(a1 + 196) = v11;
    v13 = 3 * v11;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v13 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v13) = a3;
    v14 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v7 + 76LL) >= v14 )
      v14 = *(_BYTE *)(*(_QWORD *)v7 + 76LL);
    *(_BYTE *)(*(_QWORD *)v7 + 76LL) = v14;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1),
                  0x4364624Bu);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1));
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(PoolWithTag, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    }
    ++LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)PoolWithTag;
    goto LABEL_23;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}
