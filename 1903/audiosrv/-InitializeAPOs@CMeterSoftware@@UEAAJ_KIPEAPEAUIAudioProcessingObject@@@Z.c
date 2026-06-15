/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180027160
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        CMeterSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v6; // ebx
  CAudioSessionManager *v8; // rcx
  unsigned int v9; // r15d
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v15; // [rsp+30h] [rbp-38h]

  v6 = 0;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids, this);
    v8 = WPP_GLOBAL_Control;
  }
  if ( a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
    v15 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v9 = 0;
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 4);
      if ( v10 )
      {
        *((_QWORD *)this + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v6 = ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
             (char *)this + 32);
      if ( !v6 )
        break;
      ++v9;
      ++a4;
      if ( v9 >= a3 )
        goto LABEL_12;
    }
    v11 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
    v13 = 0LL;
    if ( v11 && ((**v11)(v11, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v13), v13) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 32LL))(
             *((_QWORD *)this + 4),
             (char *)this + 24);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      v6 = -2147467262;
    }
LABEL_12:
    if ( *((_QWORD *)this + 4) )
    {
      v8 = WPP_GLOBAL_Control;
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids);
        v8 = WPP_GLOBAL_Control;
      }
      v6 = -2147023537;
    }
    if ( v15 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v8 = WPP_GLOBAL_Control;
    }
  }
  if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v8 + 7) & 0x10000) != 0
    && *((_BYTE *)v8 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v8 + 2), 19LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids, this);
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::InitializeAPOs", 0x2FCu, v6);
  return (unsigned int)v6;
}
