/*
 * XREFs of ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801CC094
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801829B0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceInfo::HasSecondaryRepresentations(CCompositionSurfaceInfo *this)
{
  _QWORD *v1; // rbx
  bool result; // al
  _QWORD *v3; // rdi
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 6);
  result = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  v4 = 0;
  v5 = 0;
  while ( v1 != v3 )
  {
    (**(void (__fastcall ***)(_QWORD, char *, bool *))*v1)(*v1, &v5, &v4);
    result = v4;
    if ( v4 )
      break;
    ++v1;
  }
  return result;
}
