/*
 * XREFs of ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022F7E4
 * Callers:
 *     ?WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ @ 0x18022FF0C (-WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x180151FDC (-AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV-$vector@UComputeScribbleLatencyData.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180208790 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022DBE0 (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 *     ?OnDroppedScribble@CFramebuffer@CComputeScribbleRenderer@@QEAAX_K@Z @ 0x18022E2E0 (-OnDroppedScribble@CFramebuffer@CComputeScribbleRenderer@@QEAAX_K@Z.c)
 *     McTemplateU0xu @ 0x18022E6D8 (McTemplateU0xu.c)
 *     ??A?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAAEAUScribbleFrame@CScheduler@CComputeScribbleRenderer@@_K@Z @ 0x18022ED0C (--A-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFrame@CSche.c)
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@@std@@QEBAAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@XZ @ 0x18022ED68 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UScribbleFrame@CScheduler@CCompu.c)
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FE18 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?_Tidy@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAXXZ @ 0x18023021C (-_Tidy@-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFrame@C.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1802304D4 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::ProcessScribbleFrame(
        CComputeScribbleRenderer::CScheduler *this)
{
  LARGE_INTEGER *v1; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  int v5; // ebx
  __int64 **v7; // rbx
  __int64 *v8; // r10
  __int64 *v9; // r11
  unsigned __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 *v14; // rax
  CComputeScribbleRenderer::CFramebuffer **v15; // rsi
  bool v16; // zf
  int v17; // esi
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int128 *v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  CComputeScribbleStopwatch *v27; // r8
  struct ID3D12CommandQueue *v28; // rdx
  float ElapsedTimeMs; // xmm0_4
  char v30; // cl
  int v31[2]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v32; // [rsp+38h] [rbp-61h]
  __int64 *v33[3]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v34; // [rsp+60h] [rbp-39h] BYREF
  __int64 v35; // [rsp+70h] [rbp-29h]
  __int128 v36; // [rsp+78h] [rbp-21h] BYREF
  __int64 v37; // [rsp+88h] [rbp-11h]
  __int64 *v38[3]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v39; // [rsp+A8h] [rbp+Fh]
  __int128 v40; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v42; // [rsp+100h] [rbp+67h]
  PSRWLOCK SRWLock; // [rsp+108h] [rbp+6Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp+77h] BYREF

  v1 = (LARGE_INTEGER *)*((_QWORD *)this + 9);
  QueryPerformanceCounter(&PerformanceCount);
  v1[6] = PerformanceCount;
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v3 = *((_QWORD *)this + 12);
  v4 = 0LL;
  SRWLock = (PSRWLOCK)((char *)this + 80);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
    *((_DWORD *)this + 36) = v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP, v4);
  if ( !*((_QWORD *)this + 17) )
  {
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 11);
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 12);
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v7 = (__int64 **)((char *)this + 104);
  while ( 1 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 16);
    v9 = *v7;
    v33[1] = 0LL;
    v33[2] = v8;
    v33[0] = v9;
    v10 = *(unsigned int *)(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*(v33)
                          + 16);
    v13 = 0LL;
    if ( v10 >= v4 )
      break;
    v34 = 0LL;
    v35 = v11;
    if ( this != (CComputeScribbleRenderer::CScheduler *)-104LL )
      v13 = v12;
    *(_QWORD *)&v34 = v13;
    v14 = (__int64 *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*((__int64 **)&v34);
    v15 = (CComputeScribbleRenderer::CFramebuffer **)v14;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xu(*v14, &EVTDESC_COMPUTESCRIBBLE_FRAMEDROPPED, v14[1], *(_BYTE *)(*v14 + 242));
    CComputeScribbleRenderer::CFramebuffer::OnDroppedScribble(*v15);
    v16 = (*((_QWORD *)this + 17))-- == 1LL;
    if ( v16 )
      *((_QWORD *)this + 16) = 0LL;
    else
      ++*((_QWORD *)this + 16);
    if ( !*((_QWORD *)this + 17) )
      goto LABEL_7;
  }
  v36 = 0LL;
  v37 = v11;
  if ( this != (CComputeScribbleRenderer::CScheduler *)-104LL )
    v13 = v12;
  *(_QWORD *)&v36 = v13;
  v17 = 0;
  v18 = *(unsigned int *)(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*((__int64 **)&v36)
                        + 16);
  v19 = v18 == v4;
  if ( v20 > v19 )
  {
    v21 = (const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *)std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::operator[](
                                                                                (__int64)this + 104,
                                                                                v19);
    v17 = CComputeScribbleRenderer::CScheduler::SetupWakeupFence(this, v21);
    if ( v17 < 0 )
      std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Tidy((char *)this + 104);
  }
  if ( v18 == v4 )
  {
    v22 = (__int64 *)*((_QWORD *)this + 16);
    v23 = *v7;
    v38[1] = 0LL;
    v38[2] = v22;
    v38[0] = v23;
    v24 = (__int128 *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*(v38);
    v25 = *v24;
    v26 = v24[1];
    v16 = (*((_QWORD *)this + 17))-- == 1LL;
    v39 = v25;
    v40 = v26;
    if ( v16 )
      *((_QWORD *)this + 16) = 0LL;
    else
      ++*((_QWORD *)this + 16);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &SRWLock,
      0LL);
    v27 = (CComputeScribbleStopwatch *)*((_QWORD *)this + 9);
    v28 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 1);
    *(_QWORD *)v31 = 0LL;
    v32 = 0LL;
    v5 = CComputeScribbleRenderer::CFramebuffer::DispatchScribbles(
           (CComputeScribbleRenderer::CFramebuffer *)v39,
           v28,
           v27,
           *((unsigned __int64 *)&v39 + 1),
           v31);
    if ( v5 < 0 )
    {
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E8,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
          (const char *)(unsigned int)v17);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E9,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v5);
      if ( *(_QWORD *)v31 )
        std::_Deallocate<16,0>(*(void **)v31, 24 * ((*((_QWORD *)&v32 + 1) - *(_QWORD *)v31) / 24LL));
      goto LABEL_8;
    }
    ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(*((CComputeScribbleStopwatch **)this + 9));
    LODWORD(v42) = 1;
    if ( ElapsedTimeMs <= (float)(*((float *)&v40 + 2) * 1000.0) )
    {
      v30 = 0;
      HIDWORD(v42) = 0;
    }
    else
    {
      v30 = 1;
      HIDWORD(v42) = 1;
    }
    _InterlockedExchangeAdd64(&qword_180308218, v42);
    if ( !v30 )
      CTelemetryComputeScribbleAggregator::AddLatencyData((__int64 *)v31);
    if ( *(_QWORD *)v31 )
      std::_Deallocate<16,0>(*(void **)v31, 24 * ((*((_QWORD *)&v32 + 1) - *(_QWORD *)v31) / 24LL));
  }
  if ( v17 >= 0 )
    goto LABEL_7;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F7,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
    (const char *)(unsigned int)v17);
  v5 = v17;
LABEL_8:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v5;
}
