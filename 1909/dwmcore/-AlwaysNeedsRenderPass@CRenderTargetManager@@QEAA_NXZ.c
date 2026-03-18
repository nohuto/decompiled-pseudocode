/*
 * XREFs of ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x1801824B0
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::AlwaysNeedsRenderPass(CRenderTargetManager *this)
{
  char v2; // bl
  __int64 v3; // rbp
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 26) )
    return 1;
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
      break;
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4) )
      v2 = 1;
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v2 );
  return v2;
}
