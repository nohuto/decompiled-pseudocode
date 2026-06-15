/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x1800459E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800D9DC0 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800F7470 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 */

__int64 __fastcall CVADServer::DestroyStream(LARGE_INTEGER *this, __int64 a2)
{
  __int64 v4; // r8
  std::_Ref_count_base *QuadPart; // rcx
  LARGE_INTEGER v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  double TimeSec; // xmm0_8
  AudioJournal *v11; // rcx
  int v12; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CEndpointCharacteristics *v16; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this[28];
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  this[53].QuadPart = 0LL;
  QuadPart = (std::_Ref_count_base *)this[54].QuadPart;
  this[54].QuadPart = 0LL;
  if ( QuadPart )
    std::_Ref_count_base::_Decref(QuadPart);
  if ( !this[23].LowPart )
  {
    v7 = -2004287487;
    v9 = 2093LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v7,
      v12);
    goto LABEL_11;
  }
  v6 = this[24];
  if ( !v6.QuadPart )
  {
    v7 = -2004287487;
    v9 = 2094LL;
    goto LABEL_17;
  }
  if ( a2 != *(_QWORD *)(v6.QuadPart + 48) )
  {
    v7 = -2147024809;
    v9 = 2095LL;
    goto LABEL_17;
  }
  if ( BYTE4(this[23].QuadPart) )
  {
    (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)this[21].QuadPart + 304LL))(this[21]);
    BYTE4(this[23].QuadPart) = 0;
    QueryPerformanceCounter(this + 60);
    v16 = 0LL;
    (*(void (__fastcall **)(PVOID, LARGE_INTEGER, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
      g_pEndpointCharacteristicsCache,
      this[27],
      0LL,
      0LL,
      &v16);
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&this[59]);
    AudioJournal::OnStopStream(v11, 0, v16, TimeSec);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    v6 = this[24];
  }
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(LARGE_INTEGER, LARGE_INTEGER, __int64))(*(_QWORD *)this[21].QuadPart + 312LL))(
    this[21],
    v6,
    v4);
  (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)this[24].QuadPart + 64LL))(this[24]);
  this[24].QuadPart = 0LL;
  this[23].LowPart = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, a2);
  }
  v7 = 0;
LABEL_11:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
