/*
 * XREFs of ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x1800C39F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800444C8 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::GetChannelsPeakValues(CMeterSoftware *this, unsigned int a2, float *a3)
{
  __int64 v3; // rdi
  float *v4; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  float *v9; // rax
  __int64 v10; // rcx
  float v11; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-1C8h] BYREF
  char v14; // [rsp+28h] [rbp-1C0h]
  _BYTE v15[384]; // [rsp+30h] [rbp-1B8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelsPeakValues", 687, v6);
    return (unsigned int)v6;
  }
  if ( a2 != *((_DWORD *)this + 6) )
  {
    v6 = -2147024809;
    goto LABEL_24;
  }
  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_QWORD *)this + 4);
  if ( v7 && *((_DWORD *)this + 6) <= 0x20u )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, v15, (unsigned int)v3);
    v6 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 || v8 == -2147023174 )
      {
        if ( (_DWORD)v3 )
          memset_0(v4, 0, 4 * v3);
        Microsoft::WRL::WeakRef::~WeakRef((CMeterSoftware *)((char *)this + 32));
        v6 = 0;
      }
    }
    else if ( (_DWORD)v3 )
    {
      v9 = (float *)v15;
      v10 = v3;
      do
      {
        v11 = fminf(*v9, 1.0);
        if ( v11 <= 0.0 )
          v11 = 0.0;
        *v4 = v11;
        v9 += 3;
        ++v4;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( (_DWORD)v3 )
  {
    memset_0(v4, 0, 4 * v3);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 < 0 )
    goto LABEL_24;
  return (unsigned int)v6;
}
