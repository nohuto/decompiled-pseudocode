/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C007BD70
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C007A558 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0004870 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RimInputTypeToDeviceInputType @ 0x1C004AFEC (RimInputTypeToDeviceInputType.c)
 *     GetKnownRIMDeviceKind @ 0x1C007C124 (GetKnownRIMDeviceKind.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::HandleInputThreadStateChange(__int64 a1, int a2)
{
  CInputThread *v2; // rdi
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  struct DEVICEINFO *v13; // r9
  int i; // r11d
  void (__fastcall ***v15)(_QWORD); // rax
  int KnownRIMDeviceKind; // eax
  __int64 v17; // r10
  __int64 v18; // rax
  _QWORD *v19; // rcx
  LPCWSTR *v20[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v21[32]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[32]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    RIMLockExclusive(a1 + 1096);
    while ( 1 )
    {
      v19 = *(_QWORD **)(a1 + 1088);
      if ( !v19 )
        break;
      *(_QWORD *)(a1 + 1088) = *v19;
      Win32FreePool((__int64)(v19 - 2));
    }
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    *(_QWORD *)(a1 + 1104) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 1096, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v11 = *(_QWORD *)(a1 + 1056);
    if ( v11 )
    {
      v9 = Win32AllocPool(12 * v11, 0x6D504E50u);
      if ( v9 )
      {
        v12 = RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
        v13 = CBaseInput::_spDevList;
        for ( i = v12; v13; v13 = (struct DEVICEINFO *)*((_QWORD *)v13 + 7) )
        {
          if ( *((unsigned __int8 *)v13 + 48) == i )
          {
            if ( *((_QWORD *)v13 + 29) )
            {
              KnownRIMDeviceKind = GetKnownRIMDeviceKind(v13);
              if ( KnownRIMDeviceKind )
              {
                if ( v10 < *(_QWORD *)(a1 + 1056) )
                {
                  LODWORD(v20[0]) = KnownRIMDeviceKind;
                  ++v10;
                  HIDWORD(v20[0]) = *(_QWORD *)v13;
                  *(LPCWSTR **)v17 = v20[0];
                  *(_DWORD *)(v17 + 8) = 2;
                }
              }
            }
          }
        }
      }
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v10 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v20, L"PnPBulkNotificationCallout", 0LL);
      memset(v22, 0, 0xF8uLL);
      LODWORD(v22[0]) = RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
      HIDWORD(v22[0]) = 5;
      LODWORD(v22[1]) = 12 * v10;
      v22[2] = v9;
      PushW32ThreadLock(v9, v21, Win32FreePool);
      InputExtensibilityCallout::CallUserModeWithLock(
        *(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
        (struct _CLIENT_DEVICE_NOTIFICATION *)v22);
      PopW32ThreadLock(v21);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v20);
    }
    if ( v9 )
      Win32FreePool(v9);
    v15 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v15 )
      (**v15)(v15);
  }
}
