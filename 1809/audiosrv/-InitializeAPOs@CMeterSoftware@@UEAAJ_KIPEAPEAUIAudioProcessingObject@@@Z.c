/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18002D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        CMeterSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  __int64 v4; // rbx
  int v5; // edi
  CAudioSessionManager *v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rcx
  void (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v17; // [rsp+30h] [rbp-38h]

  v4 = 0LL;
  v5 = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids, this);
    v9 = WPP_GLOBAL_Control;
  }
  if ( a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
    v17 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v10 = 0;
    while ( 1 )
    {
      v11 = *((_QWORD *)this + 4);
      if ( v11 )
      {
        *((_QWORD *)this + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v5 = ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
             (char *)this + 32);
      if ( !v5 )
        break;
      ++v10;
      ++a4;
      if ( v10 >= a3 )
        goto LABEL_13;
    }
    v12 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
    v15 = 0LL;
    if ( v12 && ((**v12)(v12, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v15), (v4 = v15) != 0) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 32LL))(
              *((_QWORD *)this + 4),
              (char *)this + 24);
      v4 = v15;
      v5 = v13;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_13:
    if ( *((_QWORD *)this + 4) )
    {
      v9 = WPP_GLOBAL_Control;
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids);
        v9 = WPP_GLOBAL_Control;
      }
      v5 = -2147023537;
    }
    if ( v17 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v9 = WPP_GLOBAL_Control;
    }
  }
  if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v9 + 7) & 0x10000) != 0
    && *((_BYTE *)v9 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v9 + 2), 19LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids, this);
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::InitializeAPOs", 764, v5);
  return (unsigned int)v5;
}
