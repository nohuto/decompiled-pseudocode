/*
 * XREFs of rimObsAddInputObserver @ 0x1C0159554
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C0136130 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C0137730 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C006CCF4 (rimConvertUserToKernelEventHandle.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0147B00 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0147C5C (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C0159A74 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C015A600 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  unsigned int v10; // edi
  _UNKNOWN **v12; // rcx
  unsigned int v14; // r14d
  unsigned int v15; // esi
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  PVOID v21; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  int v24; // edx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  int v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v10 = a2;
  v12 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 12, (__int64)&WPP_96b8d168e8993da494f8231fea9fe50b_Traceguids);
  }
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a2, a3);
  if ( v10 < 0x30 )
    return 3221225507LL;
  if ( !a1 || a5 > 2 )
    return 3221225485LL;
  if ( a5 == 2 )
  {
    v14 = a7;
    if ( !a7 )
      return 3221225485LL;
    v15 = a6;
    if ( !a6 || a6 == 7 || a6 == 1 && (a7 == 6 || a7 == 2) )
      return 3221225485LL;
  }
  else
  {
    v15 = 0;
    v14 = 0;
  }
  RIMLockExclusive((__int64)&gInputObserverLock);
  v16 = a8 >> 1;
  LOBYTE(v16) = (a8 & 2) != 0;
  v17 = rimObsCheckForRegistrationConflicts(v16, a5, v15, v14);
  if ( v17 >= 0 )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v17 = RawInputManagerInputObserverObjectCreate(a4, v18, v19, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v17 >= 0 )
    {
      v17 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v20, a4, &Object);
      if ( v17 >= 0 )
      {
        v21 = Object;
        *((_DWORD *)Object + 18) = a4;
        *((_QWORD *)v21 + 12) = a1;
        *((_DWORD *)v21 + 26) = v28;
        *((_DWORD *)v21 + 27) = a5;
        *((_DWORD *)v21 + 28) = v15;
        *((_DWORD *)v21 + 29) = v14;
        *((_DWORD *)v21 + 30) = a8;
        v17 = rimConvertUserToKernelEventHandle(a3, (void **)v21 + 10);
        if ( v17 >= 0 )
        {
          LOBYTE(v22) = 1;
          v17 = rimObsStartStopDeviceRead(v21, v22);
        }
        ObfDereferenceObject(v21);
      }
      if ( v17 >= 0 )
      {
        if ( a4 )
        {
          v23 = a9;
          if ( (unsigned __int64)a9 >= MmUserProbeAddress )
            v23 = (_QWORD *)MmUserProbeAddress;
          *v23 = Handle;
        }
        else
        {
          *a9 = Handle;
        }
      }
    }
    if ( v17 < 0 && Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, a4);
  }
  qword_1C02182C8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v24, 1, 13, (__int64)&WPP_96b8d168e8993da494f8231fea9fe50b_Traceguids, v17);
  }
  return (unsigned int)v17;
}
