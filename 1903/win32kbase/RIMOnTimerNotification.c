/*
 * XREFs of RIMOnTimerNotification @ 0x1C0139E00
 * Callers:
 *     NtRIMOnTimerNotification @ 0x1C0136920 (NtRIMOnTimerNotification.c)
 *     ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01789A0 (-OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01790C0 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00519C0 (WPP_RECORDER_SF_DD.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00A6454 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0152E88 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMEndAllStaleContacts @ 0x1C0154BF8 (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C019B1C0 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1, int a2)
{
  int v2; // edi
  int v4; // esi
  int v5; // edx
  int v6; // ebp
  union _LARGE_INTEGER v7; // rbx
  int v8; // edx
  int v9; // edx
  LARGE_INTEGER v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  void *v13; // rcx
  int v14; // edx
  __int64 v15; // rdi
  LONGLONG v16; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 i; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edi
  LONGLONG v22; // rax
  int v23; // edx
  LONGLONG v24; // rt2
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v27[16]; // [rsp+48h] [rbp-70h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 59, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v6 >= 0 )
  {
    v7 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 104);
    if ( *(_BYTE *)(v7.QuadPart + 81) || *(_BYTE *)(v7.QuadPart + 82) )
    {
      v6 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 67, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
      goto LABEL_59;
    }
    RIMLockExclusive(v7.QuadPart + 568);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 60, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
    }
    if ( v2 )
    {
      if ( *(_QWORD *)(v7.QuadPart + 344) != -1LL )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 63, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
        }
        memset(v27, 0, 0x3CuLL);
        ApiSetGetPowerTransitionsState(v27);
        if ( !v27[0] )
          goto LABEL_53;
        if ( v27[7] )
          goto LABEL_53;
        if ( v27[8] )
          goto LABEL_53;
        if ( !*(_DWORD *)(v7.QuadPart + 464) )
          goto LABEL_53;
        v15 = *(_QWORD *)(v7.QuadPart + 424);
        if ( !v15 )
          goto LABEL_53;
        do
        {
          if ( *(_BYTE *)(v15 + 48) == 2
            && (*(_DWORD *)(v15 + 200) & 0x80u) != 0
            && (*(_DWORD *)(v15 + 184) & 0x2000) == 0 )
          {
            if ( *(_QWORD *)(v15 + 408) )
            {
              rimDispatchAutoRepeatCompleteFrame((struct RawInputManagerObject *)v7.QuadPart, (struct RIMDEV *)v15);
              if ( *(_QWORD *)(v15 + 408) )
                v4 = 0;
            }
          }
          v15 = *(_QWORD *)(v15 + 40);
        }
        while ( v15 );
        if ( v4 )
        {
LABEL_53:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 66, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
          }
          ZwCancelTimer(*(HANDLE *)(v7.QuadPart + 344), 0LL);
          *(_QWORD *)(v7.QuadPart + 376) = 0LL;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 64, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
          }
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(_QWORD *)(v7.QuadPart + 424); i; i = *(_QWORD *)(i + 40) )
          {
            if ( *(_BYTE *)(i + 48) == 2 && (*(_DWORD *)(i + 200) & 0x80u) != 0 )
            {
              v19 = *(_QWORD *)(i + 408);
              if ( v19 )
              {
                if ( PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 88) < v16 )
                  v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 88);
              }
            }
          }
          v20 = 1000 * (v16 + *(_QWORD *)(v7.QuadPart + 360));
          v21 = 10;
          v24 = v20 % gliQpcFreq.QuadPart;
          v22 = v20 / gliQpcFreq.QuadPart;
          v23 = v24;
          if ( *(_DWORD *)(v7.QuadPart + 352) )
            v21 = *(_DWORD *)(v7.QuadPart + 352);
          if ( (unsigned int)v22 > v21 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = 4;
              WPP_RECORDER_SF_DD(
                (_DWORD)gRimLog,
                v23,
                1,
                65,
                (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
                v22,
                v21);
            }
            LODWORD(v22) = v21;
          }
          DueTime.QuadPart = -10000LL * (int)v22;
          ZwSetTimer(*(HANDLE *)(v7.QuadPart + 344), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v7.QuadPart + 376) = KeQueryPerformanceCounter(0LL);
        }
      }
      goto LABEL_56;
    }
    v10 = KeQueryPerformanceCounter(0LL);
    v12 = *(_QWORD *)(v7.QuadPart + 376);
    if ( v12 && v10.QuadPart - v12 <= *(_QWORD *)(v7.QuadPart + 368) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 62, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 61, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
      ((void (__fastcall *)(_QWORD))RIMEndAllStaleContacts)((union _LARGE_INTEGER)v7.QuadPart);
      if ( !*(_DWORD *)(v7.QuadPart + 464) )
      {
        ZwCancelTimer(*(HANDLE *)(v7.QuadPart + 336), 0LL);
        v13 = *(void **)(v7.QuadPart + 344);
        if ( v13 != (void *)-1LL )
        {
          ZwCancelTimer(v13, 0LL);
          *(_QWORD *)(v7.QuadPart + 376) = 0LL;
        }
        *(_DWORD *)(v7.QuadPart + 468) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v13, 0LL);
        goto LABEL_56;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v7.QuadPart + 336), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_56:
    *(_QWORD *)(v7.QuadPart + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v7.QuadPart + 568, 0LL);
    KeLeaveCriticalRegion();
LABEL_59:
    *(_QWORD *)(v7.QuadPart + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v7.QuadPart + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v7.QuadPart);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v5, 1, 68, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v6);
  }
  return (unsigned int)v6;
}
