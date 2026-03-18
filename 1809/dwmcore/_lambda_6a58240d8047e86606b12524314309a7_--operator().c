/*
 * XREFs of _lambda_6a58240d8047e86606b12524314309a7_::operator() @ 0x18022D66C
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022DBE0 (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xu @ 0x18022E6D8 (McTemplateU0xu.c)
 */

__int64 __fastcall lambda_6a58240d8047e86606b12524314309a7_::operator()(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 112LL))(
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(*(_QWORD *)a1 + 80LL),
             *(_QWORD *)(a1 + 16));
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(*(_QWORD *)a1 + 242LL);
    return McTemplateU0xu(v3, &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop, *(_QWORD *)(a1 + 16), v4);
  }
  return result;
}
