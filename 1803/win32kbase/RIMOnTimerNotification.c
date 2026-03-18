/*
 * XREFs of RIMOnTimerNotification @ 0x1C00E3E60
 * Callers:
 *     NtRIMOnTimerNotification @ 0x1C00DF8D0 (NtRIMOnTimerNotification.c)
 *     ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C0123330 (-OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C0123940 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00E5F04 (WPP_RECORDER_SF_DD.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00FE314 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMEndAllStaleContacts @ 0x1C00FFC38 (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C013D570 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0140A4C (ApiSetGetPowerTransitionsState.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1, int a2)
{
  int v4; // esi
  int v5; // r15d
  union _LARGE_INTEGER v6; // rbx
  LARGE_INTEGER v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rdi
  LONGLONG v11; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 i; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edi
  LONGLONG v17; // rax
  int v18; // edx
  LONGLONG v19; // rt2
  __int64 Period; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v23[16]; // [rsp+48h] [rbp-70h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x3Cu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = 1;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v5 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 96);
    if ( *(_BYTE *)(v6.QuadPart + 73) || *(_BYTE *)(v6.QuadPart + 75) )
    {
      v5 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x44u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      goto LABEL_42;
    }
    RIMLockExclusive(v6.QuadPart + 552);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x3Du,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    if ( a2 )
    {
      if ( *(_QWORD *)(v6.QuadPart + 336) != -1LL )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x40u,
          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
        ApiSetGetPowerTransitionsState(v23);
        if ( !v23[0] )
          goto LABEL_39;
        if ( v23[7] )
          goto LABEL_39;
        if ( v23[8] )
          goto LABEL_39;
        if ( !*(_DWORD *)(v6.QuadPart + 448) )
          goto LABEL_39;
        v10 = *(_QWORD *)(v6.QuadPart + 408);
        if ( !v10 )
          goto LABEL_39;
        do
        {
          if ( *(_BYTE *)(v10 + 48) == 2 && (*(_DWORD *)(v10 + 200) & 0x80u) != 0 )
          {
            if ( *(_QWORD *)(v10 + 408) )
            {
              ((void (__fastcall *)(_QWORD, _QWORD))rimDispatchAutoRepeatCompleteFrame)(
                (union _LARGE_INTEGER)v6.QuadPart,
                v10);
              if ( *(_QWORD *)(v10 + 408) )
                v4 = 0;
            }
          }
          v10 = *(_QWORD *)(v10 + 40);
        }
        while ( v10 );
        if ( v4 )
        {
LABEL_39:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x43u,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
          ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 336), 0LL);
          *(_QWORD *)(v6.QuadPart + 368) = 0LL;
        }
        else
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x41u,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
          v11 = 0x7FFFFFFFFFFFFFFFLL;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(_QWORD *)(v6.QuadPart + 408); i; i = *(_QWORD *)(i + 40) )
          {
            if ( *(_BYTE *)(i + 48) == 2 && (*(_DWORD *)(i + 200) & 0x80u) != 0 )
            {
              v14 = *(_QWORD *)(i + 408);
              if ( v14 )
              {
                if ( PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 64) < v11 )
                  v11 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 64);
              }
            }
          }
          v15 = 1000 * (v11 + *(_QWORD *)(v6.QuadPart + 352));
          v16 = 10;
          v19 = v15 % gliQpcFreq.QuadPart;
          v17 = v15 / gliQpcFreq.QuadPart;
          v18 = v19;
          if ( *(_DWORD *)(v6.QuadPart + 344) )
            v16 = *(_DWORD *)(v6.QuadPart + 344);
          if ( (unsigned int)v17 > v16 )
          {
            WPP_RECORDER_SF_DD(
              WPP_GLOBAL_Control->DeviceExtension,
              v18,
              21,
              66,
              (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
              v17,
              v16);
            LODWORD(v17) = v16;
          }
          DueTime.QuadPart = -10000LL * (int)v17;
          ZwSetTimer(*(HANDLE *)(v6.QuadPart + 336), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v6.QuadPart + 368) = KeQueryPerformanceCounter(0LL);
        }
      }
      goto LABEL_40;
    }
    v7 = KeQueryPerformanceCounter(0LL);
    v8 = *(_QWORD *)(v6.QuadPart + 368);
    if ( v8 && v7.QuadPart - v8 <= *(_QWORD *)(v6.QuadPart + 360) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x3Fu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x3Eu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      ((void (__fastcall *)(_QWORD))RIMEndAllStaleContacts)((union _LARGE_INTEGER)v6.QuadPart);
      if ( !*(_DWORD *)(v6.QuadPart + 448) )
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 328), 0LL);
        v9 = *(void **)(v6.QuadPart + 336);
        if ( v9 != (void *)-1LL )
        {
          ZwCancelTimer(v9, 0LL);
          *(_QWORD *)(v6.QuadPart + 368) = 0LL;
        }
        *(_DWORD *)(v6.QuadPart + 452) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v9, 0LL);
        goto LABEL_40;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v6.QuadPart + 328), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_40:
    *(_QWORD *)(v6.QuadPart + 560) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 552, 0LL);
    KeLeaveCriticalRegion();
LABEL_42:
    *(_QWORD *)(v6.QuadPart + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v6.QuadPart);
  }
  LODWORD(Period) = v5;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x45u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    Period);
  return (unsigned int)v5;
}
