/*
 * XREFs of ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x18014B400
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z @ 0x1801614C8 (-FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeFromMITLuid(CComposition *this, struct _LUID a2, struct CVisualTree **a3)
{
  int DesktopRenderTarget; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  CGdiSpriteBitmap *v7; // rcx
  volatile signed __int32 *v8; // rdx
  CGdiSpriteBitmap *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  DesktopRenderTarget = CUINTDesktopAssociation::FindDesktopRenderTarget(
                          (CComposition *)((char *)this + 24),
                          a2.LowPart,
                          &v10);
  v6 = DesktopRenderTarget;
  if ( DesktopRenderTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BC050, 1u, DesktopRenderTarget, 0xE73u);
    v7 = v10;
  }
  else
  {
    v7 = v10;
    v8 = (volatile signed __int32 *)*((_QWORD *)v10 + 15);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v7 = v10;
    }
    *a3 = (struct CVisualTree *)v8;
  }
  if ( v7 )
    CGdiSpriteBitmap::Release(v7);
  return v6;
}
