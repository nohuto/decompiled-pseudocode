/*
 * XREFs of ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B6510
 * Callers:
 *     ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x1801B6648 (-ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V-$span@QEAV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0xqq @ 0x1801A8498 (McTemplateU0xqq.c)
 *     ??$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAAEAUScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEBU234@@Z @ 0x1801B51C8 (--$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@-$deque@UScribbleFrame@C.c)
 *     ?CheckForWorkerThreadHang@CScheduler@CComputeScribbleRenderer@@AEBA_NI@Z @ 0x1801B56CC (-CheckForWorkerThreadHang@CScheduler@CComputeScribbleRenderer@@AEBA_NI@Z.c)
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B6754 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?_Tidy@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAXXZ @ 0x1801B6B4C (-_Tidy@-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFrame@C.c)
 *     McTemplateU0xuqf @ 0x1801B6BCC (McTemplateU0xuqf.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::Schedule(
        CComputeScribbleRenderer::CScheduler *this,
        const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *a2)
{
  RTL_SRWLOCK *v2; // rbp
  unsigned __int64 v5; // rax
  char *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v5 = *((_QWORD *)this + 17);
  if ( v5 < 3 )
  {
    v6 = (char *)this + 104;
  }
  else
  {
    if ( !CComputeScribbleRenderer::CScheduler::CheckForWorkerThreadHang((__int64 **)this, *((_DWORD *)a2 + 4)) )
      goto LABEL_12;
    v6 = (char *)this + 104;
    std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Tidy((char *)this + 104);
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 11);
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 12);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xqq(
        v7,
        &EVTDESC_COMPUTESCRIBBLE_WORKERHANG,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)this + 36));
    v5 = *((_QWORD *)this + 17);
  }
  if ( !v5 )
  {
    v8 = CComputeScribbleRenderer::CScheduler::SetupWakeupFence(this, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_13;
    }
  }
  std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::emplace_back<CComputeScribbleRenderer::CScheduler::ScribbleFrame const &>(
    (__int64)v6,
    a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)a2 + 242LL);
    McTemplateU0xuqf(
      v10,
      (unsigned int)&EVTDESC_COMPUTESCRIBBLE_FRAMESCHEDULED,
      *((_QWORD *)a2 + 1),
      v11,
      *((_DWORD *)a2 + 4),
      *((_DWORD *)a2 + 5));
  }
LABEL_12:
  v9 = 0;
LABEL_13:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v9;
}
