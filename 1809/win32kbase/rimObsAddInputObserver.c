/*
 * XREFs of rimObsAddInputObserver @ 0x1C012C614
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C010BE70 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C010CB20 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0052040 (rimConvertUserToKernelEventHandle.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C011CB8C (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C011CCE8 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C012CAEC (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C012D630 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // esi
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  PVOID v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0xCu, (__int64)&WPP_45cc41b0333434924b60e5f2a9a53a17_Traceguids);
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( a2 < 0x30 )
    return 3221225507LL;
  if ( !a1 || a5 > 2 )
    return 3221225485LL;
  if ( a5 == 2 )
  {
    if ( !a7 )
      return 3221225485LL;
    v16 = a6;
    if ( !a6 || a6 == 7 || a6 == 1 && (a7 == 6 || a7 == 2) )
      return 3221225485LL;
  }
  else
  {
    v16 = a6;
  }
  RIMLockExclusive((__int64)&gInputObserverLock);
  v17 = a8 >> 1;
  LOBYTE(v17) = (a8 & 2) != 0;
  v18 = rimObsCheckForRegistrationConflicts(v17, a5, v16, a7);
  if ( v18 >= 0 )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v18 = RawInputManagerInputObserverObjectCreate(a4, v19, v20, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v18 >= 0 )
    {
      v18 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v21, a4, &Object);
      if ( v18 >= 0 )
      {
        v22 = Object;
        *((_DWORD *)Object + 18) = a4;
        *((_QWORD *)v22 + 12) = a1;
        *((_DWORD *)v22 + 26) = a2;
        *((_DWORD *)v22 + 27) = a5;
        *((_DWORD *)v22 + 28) = v16;
        *((_DWORD *)v22 + 29) = a7;
        *((_DWORD *)v22 + 30) = a8;
        v18 = rimConvertUserToKernelEventHandle(a3, (void **)v22 + 10);
        if ( v18 >= 0 )
        {
          LOBYTE(v23) = 1;
          v18 = rimObsStartStopDeviceRead(v22, v23);
        }
        ObfDereferenceObject(v22);
      }
      if ( v18 >= 0 )
      {
        if ( a4 )
        {
          v24 = a9;
          if ( (unsigned __int64)a9 >= MmUserProbeAddress )
            v24 = (_QWORD *)MmUserProbeAddress;
          *v24 = Handle;
        }
        else
        {
          *a9 = Handle;
        }
      }
    }
    if ( v18 < 0 && Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, a4);
  }
  CInpPushLock::UnLockExclusive((CInpPushLock *)&gInputObserverLock);
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0xDu, (__int64)&WPP_45cc41b0333434924b60e5f2a9a53a17_Traceguids, v18);
  return (unsigned int)v18;
}
