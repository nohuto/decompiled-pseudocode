/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x18004DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800E4FF0 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x180102E90 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
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
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CEndpointCharacteristics *v15; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this[28];
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  this[57].QuadPart = 0LL;
  QuadPart = (std::_Ref_count_base *)this[58].QuadPart;
  this[58].QuadPart = 0LL;
  if ( QuadPart )
    std::_Ref_count_base::_Decref(QuadPart);
  if ( !this[23].LowPart )
  {
    v7 = -2004287487;
    v9 = 2101LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v7);
    goto LABEL_11;
  }
  v6 = this[24];
  if ( !v6.QuadPart )
  {
    v7 = -2004287487;
    v9 = 2102LL;
    goto LABEL_17;
  }
  if ( a2 != *(_QWORD *)(v6.QuadPart + 48) )
  {
    v7 = -2147024809;
    v9 = 2103LL;
    goto LABEL_17;
  }
  if ( BYTE4(this[23].QuadPart) )
  {
    (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)this[21].QuadPart + 304LL))(this[21]);
    BYTE4(this[23].QuadPart) = 0;
    QueryPerformanceCounter(this + 64);
    v15 = 0LL;
    (*(void (__fastcall **)(PVOID, LARGE_INTEGER, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
      g_pEndpointCharacteristicsCache,
      this[27],
      0LL,
      0LL,
      &v15);
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&this[63]);
    AudioJournal::OnStopStream(v11, 0, v15, TimeSec);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
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
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, a2);
  }
  v7 = 0;
LABEL_11:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
