/*
 * XREFs of ?LockForDraw@CFramebuffer@CComputeScribbleRenderer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1801B61A4
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B5B1C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     McTemplateU0xu @ 0x1801B662C (McTemplateU0xu.c)
 */

_QWORD *__fastcall CComputeScribbleRenderer::CFramebuffer::LockForDraw(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  _QWORD *result; // rax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(a4) = *(_BYTE *)(a1 + 242);
    McTemplateU0xu(a1, &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Start, *(_QWORD *)(a1 + 200), a4);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 232));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 242);
    McTemplateU0xu(v6, &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Stop, *(_QWORD *)(a1 + 200), v7);
  }
  *(_BYTE *)(a1 + 241) = 1;
  result = a2;
  *a2 = a1 + 232;
  return result;
}
