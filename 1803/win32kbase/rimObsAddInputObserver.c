/*
 * XREFs of rimObsAddInputObserver @ 0x1C0104A1C
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00DF1E0 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C00E0160 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00F1EC4 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C00F2038 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C00F2434 (rimConvertUserToKernelEventHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C0104ECC (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C010593C (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v15; // esi
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  PVOID v21; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xCu,
    (__int64)&WPP_1670ca8aa8063ace32855d68d9fa11a1_Traceguids);
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  if ( a2 < 0x30 )
    return 3221225507LL;
  if ( !a1 || a5 > 2 )
    return 3221225485LL;
  if ( a5 == 2 )
  {
    if ( !a7 )
      return 3221225485LL;
    v15 = a6;
    if ( !a6 || a6 == 7 || a6 == 1 && (a7 == 6 || a7 == 2) )
      return 3221225485LL;
  }
  else
  {
    v15 = a6;
  }
  RIMLockExclusive((__int64)&gInputObserverLock);
  v16 = a8 >> 1;
  LOBYTE(v16) = (a8 & 2) != 0;
  v17 = rimObsCheckForRegistrationConflicts(v16, a5, v15, a7);
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
        *((_DWORD *)Object + 16) = a4;
        *((_QWORD *)v21 + 11) = a1;
        *((_DWORD *)v21 + 24) = a2;
        *((_DWORD *)v21 + 25) = a5;
        *((_DWORD *)v21 + 26) = v15;
        *((_DWORD *)v21 + 27) = a7;
        *((_DWORD *)v21 + 28) = a8;
        v17 = rimConvertUserToKernelEventHandle(a3, (void **)v21 + 9);
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
  CInpPushLock::UnLockExclusive((CInpPushLock *)&gInputObserverLock);
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xDu,
    (__int64)&WPP_1670ca8aa8063ace32855d68d9fa11a1_Traceguids,
    v17);
  return (unsigned int)v17;
}
