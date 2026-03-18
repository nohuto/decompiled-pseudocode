/*
 * XREFs of ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B6754
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B600C (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B6510 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801B57C4 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::SetupWakeupFence(
        CComputeScribbleRenderer::CScheduler *this,
        const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm0_4
  int WakeupFence; // eax
  unsigned int v9; // esi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 88);
  if ( !*((_QWORD *)this + 11)
    || (v5 = *((_QWORD *)this + 12)) == 0
    || (v6 = *((float *)a2 + 5), v7 = *((float *)this + 37), v6 > v7)
    || (float)(v7 - v6) >= *((float *)this + 1) )
  {
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 12);
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(v2);
    WakeupFence = CComputeScribbleRenderer::CScheduler::CreateWakeupFence(
                    this,
                    a2,
                    (struct Windows::Devices::Display::Core::IDisplayFence **)v2,
                    (struct ID3D12Fence **)this + 12);
    v9 = WakeupFence;
    if ( WakeupFence < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x149,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)WakeupFence);
      return v9;
    }
    v5 = *((_QWORD *)this + 12);
    *((_DWORD *)this + 37) = *((_DWORD *)a2 + 5);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(
          v5,
          *((unsigned int *)a2 + 4),
          *((_QWORD *)this + 8));
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x150,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
