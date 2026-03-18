/*
 * XREFs of ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x180177520
 * Callers:
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180086130 (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVIRenderTargetDesktop@@@Z @ 0x18018CDFC (-FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVIRenderTargetDesktop@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeFromMITLuid(CComposition *this, struct _LUID a2, struct CVisualTree **a3)
{
  signed int DesktopRenderTarget; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  struct IRenderTargetDesktop *v7; // rbx
  volatile signed __int32 *v8; // rax
  struct IRenderTargetDesktop *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  DesktopRenderTarget = CUINTDesktopAssociation::FindDesktopRenderTarget(
                          (CComposition *)((char *)this + 24),
                          a2.LowPart,
                          &v10);
  v6 = DesktopRenderTarget;
  if ( DesktopRenderTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802E4664, 1u, DesktopRenderTarget, 0xDA8u, 0LL);
    v7 = v10;
  }
  else
  {
    v7 = v10;
    v8 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)v10 + 288LL))(v10);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v7 = v10;
    }
    *a3 = (struct CVisualTree *)v8;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
