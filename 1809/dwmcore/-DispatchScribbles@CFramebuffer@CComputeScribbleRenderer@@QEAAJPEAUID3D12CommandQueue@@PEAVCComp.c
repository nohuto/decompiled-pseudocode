/*
 * XREFs of ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022DBE0
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022F7E4 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801E11F4 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     McTemplateU0xxxq @ 0x180213648 (McTemplateU0xxxq.c)
 *     std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___ @ 0x18022D430 (std--vector_ComputeScribbleLatencyData_std--allocator_ComputeScribbleLatencyData___--_Resize__la.c)
 *     _lambda_6a58240d8047e86606b12524314309a7_::operator() @ 0x18022D66C (_lambda_6a58240d8047e86606b12524314309a7_--operator().c)
 *     ?AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z @ 0x18022D8A8 (-AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z.c)
 *     ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022D8EC (-BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEA.c)
 *     ?LockForDraw@CFramebuffer@CComputeScribbleRenderer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18022E250 (-LockForDraw@CFramebuffer@CComputeScribbleRenderer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?WaitForCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x18022E470 (-WaitForCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     McTemplateU0xu @ 0x18022E6D8 (McTemplateU0xu.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1802304D4 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::DispatchScribbles(
        CComputeScribbleRenderer::CFramebuffer *this,
        struct ID3D12CommandQueue *a2,
        CComputeScribbleStopwatch *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // r9
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  __int64 v12; // rdx
  HRESULT (__stdcall *Wait)(ID3D12CommandQueue *, ID3D12Fence *, UINT64); // rax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rdx
  int v19; // eax
  enum D3D12_RESOURCE_STATES v20; // r8d
  __int64 v21; // rdi
  float ElapsedTimeMs; // xmm0_4
  unsigned __int64 v23; // rax
  float v24; // xmm0_4
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  float v30; // xmm0_4
  int v31; // [rsp+28h] [rbp-58h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h] BYREF
  __int128 v34; // [rsp+40h] [rbp-40h]
  unsigned __int64 v35; // [rsp+50h] [rbp-30h]
  __int128 v36; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-18h]
  char v38; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( CComputeScribbleRenderer::CFramebuffer::AcquireForScribble(this, a4, (__int64)a3, a4) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      LOBYTE(v10) = *((_BYTE *)this + 242);
      McTemplateU0xu(v9, &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Start, a4, v10);
    }
    lpVtbl = a2->lpVtbl;
    v12 = *((_QWORD *)this + 8);
    *(_QWORD *)&v34 = this;
    *((_QWORD *)&v34 + 1) = a2;
    Wait = lpVtbl->Wait;
    v35 = a4;
    v36 = v34;
    v37 = a4;
    v14 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, __int64, unsigned __int64))Wait)(a2, v12, a4);
    v15 = v14;
    if ( v14 >= 0 )
    {
      CComputeScribbleRenderer::CFramebuffer::LockForDraw(this, &SRWLock);
      if ( *((_BYTE *)this + 240)
        && (v16 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, unsigned __int64))a2->lpVtbl->Wait)(
                    a2,
                    *((_QWORD *)this + 28),
                    a4),
            v15 = v16,
            v16 < 0) )
      {
        v17 = 243LL;
      }
      else
      {
        a5[1] = *a5;
        std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___(
          (__int64)a5,
          (__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3);
        v16 = CComputeScribbleRenderer::CFramebuffer::BuildCommandList((__int64)this, (__int64)a3, a5);
        v15 = v16;
        if ( v16 >= 0 )
        {
          v33 = *((_QWORD *)this + 3);
          ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a2->lpVtbl->ExecuteCommandLists)(
            a2,
            1LL,
            &v33);
          if ( SRWLock )
            ReleaseSRWLockExclusive(SRWLock);
          v38 = 0;
          lambda_6a58240d8047e86606b12524314309a7_::operator()((__int64)&v36);
          v19 = CComputeScribbleRenderer::CFramebuffer::WaitForCommandList(this, a2);
          v15 = v19;
          if ( v19 >= 0 )
          {
            if ( g_LockAndReadComputeScribble )
              DebugInspectSurface(a2, *((struct ID3D12Resource **)this + 1), v20);
            v21 = *((_QWORD *)a3 + 6);
            ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(a3);
            v23 = 0LL;
            v24 = (float)(ElapsedTimeMs / 1000.0) * *((float *)a3 + 2);
            if ( v24 >= 9.223372e18 )
            {
              v24 = v24 - 9.223372e18;
              if ( v24 < 9.223372e18 )
                v23 = 0x8000000000000000uLL;
            }
            v25 = a5[1];
            v26 = v23 + (unsigned int)(int)v24;
            v27 = *a5;
            v28 = *((_QWORD *)a3 + 6) + v26;
            while ( v27 != v25 )
            {
              *(_QWORD *)(v27 + 16) = v28;
              v27 += 24LL;
            }
            v30 = CComputeScribbleStopwatch::GetElapsedTimeMs(a3) * 1000.0;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              v31 = (int)v30;
              McTemplateU0xxxq(v29, &EVTDESC_COMPUTESCRIBBLE_GPUFINISHED, a4, v21, v28, v31);
            }
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x101,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
            (const char *)(unsigned int)v19);
          return v15;
        }
        v17 = 249LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
        (const char *)(unsigned int)v16);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
        (const char *)(unsigned int)v14);
    }
    v38 = 0;
    lambda_6a58240d8047e86606b12524314309a7_::operator()((__int64)&v36);
    return v15;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v10) = *((_BYTE *)this + 242);
    McTemplateU0xu(v9, &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCHCANCELED, a4, v10);
  }
  return 0LL;
}
