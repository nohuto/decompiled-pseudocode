/*
 * XREFs of ?AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801A4480
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800144B0 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18002E650 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTarget::AddOcclusionInformation(
        COverlayRenderTarget *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r8
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  struct D2D_RECT_F v14; // [rsp+30h] [rbp-38h] BYREF

  v5 = (*(__int64 (__fastcall **)(COverlayRenderTarget *, _QWORD, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)this + 208LL))(
         this,
         0LL,
         a3,
         &v14);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1FAu, 0LL);
  }
  else if ( !IsEmpty(&v14) )
  {
    v9 = COcclusionContext::CollectRectangleForOcclusion((__int64)a2, &v14.left, v8, 0LL);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1FEu, 0LL);
    }
    else if ( *((_BYTE *)a2 + 825) )
    {
      v11 = COcclusionContext::CheckAndRecordOverlayCandidate(
              (__int64)a2,
              *((_QWORD *)a2 + 102),
              (*(_QWORD *)(*((_QWORD *)this + 8) + 216LL) + 56LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 8) + 216LL) != 0LL),
              0LL,
              0LL,
              0);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x204u, 0LL);
    }
  }
  return v7;
}
