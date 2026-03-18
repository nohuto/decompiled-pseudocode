/*
 * XREFs of ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x180184CC4
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::HasDWMClones(CRenderTargetManager *this)
{
  char v1; // bl
  __int64 v3; // rdi
  __int64 v4; // rcx

  v1 = 0;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
      break;
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4) )
      v1 = 1;
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v1 );
  return v1;
}
