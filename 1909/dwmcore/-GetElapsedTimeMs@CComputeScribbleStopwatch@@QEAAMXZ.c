/*
 * XREFs of ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801BC090
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B427C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B600C (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180166860 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801BC310 (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 */

float __fastcall CComputeScribbleStopwatch::GetElapsedTimeMs(CComputeScribbleStopwatch *this)
{
  int v2; // eax
  __int64 v3; // rax
  float v4; // xmm0_4
  __int64 v5; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CComputeScribbleStopwatch::ResolveDelayedResources(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x78,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v2);
  v3 = *((_QWORD *)this + 3) - *((_QWORD *)this + 6);
  v4 = (float)(1000 * v3);
  if ( 1000 * v3 < 0 )
    v4 = v4 + 1.8446744e19;
  v5 = *((_QWORD *)this + 2) - *((_QWORD *)this + 7);
  v6 = v4 / *((float *)this + 2);
  v7 = (float)(1000 * v5);
  if ( 1000 * v5 < 0 )
    v7 = v7 + 1.8446744e19;
  return v6 - (float)(v7 / *((float *)this + 3));
}
