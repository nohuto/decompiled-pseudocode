/*
 * XREFs of RIMOnTimerNotification @ 0x1C010EF10
 * Callers:
 *     NtRIMOnTimerNotification @ 0x1C010C3A0 (NtRIMOnTimerNotification.c)
 *     ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C0149AF0 (-OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C0149F70 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004F608 (WPP_RECORDER_SF_DD.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0094328 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0126518 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMEndAllStaleContacts @ 0x1C0128014 (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0160F88 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1, int a2)
{
  int v4; // esi
  int v5; // r14d
  union _LARGE_INTEGER v6; // rbx
  LARGE_INTEGER v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rdi
  LONGLONG v11; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 i; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  LONGLONG v18; // rax
  __int64 v19; // rdx
  LONGLONG v20; // rt2
  __int64 Period; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v24[16]; // [rsp+48h] [rbp-70h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Cu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = 1;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v5 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 104);
    if ( *(_BYTE *)(v6.QuadPart + 81) || *(_BYTE *)(v6.QuadPart + 82) )
    {
      v5 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x44u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      goto LABEL_43;
    }
    RIMLockExclusive(v6.QuadPart + 568);
    WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Du, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    if ( a2 )
    {
      if ( *(_QWORD *)(v6.QuadPart + 344) != -1LL )
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x40u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
        ApiSetGetPowerTransitionsState(v24);
        if ( !v24[0] )
          goto LABEL_40;
        if ( v24[7] )
          goto LABEL_40;
        if ( v24[8] )
          goto LABEL_40;
        if ( !*(_DWORD *)(v6.QuadPart + 464) )
          goto LABEL_40;
        v10 = *(_QWORD *)(v6.QuadPart + 424);
        if ( !v10 )
          goto LABEL_40;
        do
        {
          if ( *(_BYTE *)(v10 + 48) == 2
            && (*(_DWORD *)(v10 + 200) & 0x80u) != 0
            && (*(_DWORD *)(v10 + 184) & 0x2000) == 0 )
          {
            if ( *(_QWORD *)(v10 + 408) )
            {
              rimDispatchAutoRepeatCompleteFrame((struct RawInputManagerObject *)v6.QuadPart, (struct RIMDEV *)v10);
              if ( *(_QWORD *)(v10 + 408) )
                v4 = 0;
            }
          }
          v10 = *(_QWORD *)(v10 + 40);
        }
        while ( v10 );
        if ( v4 )
        {
LABEL_40:
          WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x43u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
          ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 344), 0LL);
          *(_QWORD *)(v6.QuadPart + 376) = 0LL;
        }
        else
        {
          WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x41u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
          v11 = 0x7FFFFFFFFFFFFFFFLL;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(_QWORD *)(v6.QuadPart + 424); i; i = *(_QWORD *)(i + 40) )
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
          v15 = *(unsigned int *)(v6.QuadPart + 352);
          v16 = 1000 * (v11 + *(_QWORD *)(v6.QuadPart + 360));
          v17 = 10;
          v20 = v16 % gliQpcFreq.QuadPart;
          v18 = v16 / gliQpcFreq.QuadPart;
          v19 = v20;
          if ( (_DWORD)v15 )
            v17 = *(_DWORD *)(v6.QuadPart + 352);
          if ( (unsigned int)v18 > v17 )
          {
            WPP_RECORDER_SF_DD(
              v15,
              v19,
              0x16u,
              0x42u,
              (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids,
              v18,
              v17);
            LODWORD(v18) = v17;
          }
          DueTime.QuadPart = -10000LL * (int)v18;
          ZwSetTimer(*(HANDLE *)(v6.QuadPart + 344), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v6.QuadPart + 376) = KeQueryPerformanceCounter(0LL);
        }
      }
      goto LABEL_41;
    }
    v7 = KeQueryPerformanceCounter(0LL);
    v8 = *(_QWORD *)(v6.QuadPart + 376);
    if ( v8 && v7.QuadPart - v8 <= *(_QWORD *)(v6.QuadPart + 368) )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Fu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Eu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      ((void (__fastcall *)(_QWORD))RIMEndAllStaleContacts)((union _LARGE_INTEGER)v6.QuadPart);
      if ( !*(_DWORD *)(v6.QuadPart + 464) )
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 336), 0LL);
        v9 = *(void **)(v6.QuadPart + 344);
        if ( v9 != (void *)-1LL )
        {
          ZwCancelTimer(v9, 0LL);
          *(_QWORD *)(v6.QuadPart + 376) = 0LL;
        }
        *(_DWORD *)(v6.QuadPart + 468) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v9, 0LL);
        goto LABEL_41;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v6.QuadPart + 336), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_41:
    *(_QWORD *)(v6.QuadPart + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 568, 0LL);
    KeLeaveCriticalRegion();
LABEL_43:
    *(_QWORD *)(v6.QuadPart + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v6.QuadPart);
  }
  LODWORD(Period) = v5;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x45u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, Period);
  return (unsigned int)v5;
}
