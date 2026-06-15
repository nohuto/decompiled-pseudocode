/*
 * XREFs of ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800B5BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800B5944 (WPP_SF_qd.c)
 */

__int64 __fastcall CMuteSoftware::InitializeAPOs(
        CMuteSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids,
      this);
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0;
  if ( a3 )
  {
    do
    {
      Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 48));
      if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
             (char *)this + 48) >= 0
        && *((_QWORD *)this + 6) )
      {
        break;
      }
      ++v7;
      ++a4;
    }
    while ( v7 < a3 );
    v9 = *((_QWORD *)this + 6);
    if ( !v9 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids);
      }
      v7 = -2147467262;
LABEL_20:
      AudSrvTraceLoggingErrorHelper("CMuteSoftware::InitializeAPOs", 970, v7);
      goto LABEL_21;
    }
    v10 = *((_DWORD *)this + 6) == 0;
    v16 = 50000LL;
    LOBYTE(v8) = !v10;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
            v9,
            v8,
            0LL,
            1LL,
            &v16);
    v7 = v11;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v13) = v11;
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids,
        this,
        v13);
    }
    if ( v7 < 0 )
      goto LABEL_20;
  }
LABEL_21:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
