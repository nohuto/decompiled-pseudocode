/*
 * XREFs of ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801D7144
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801D89A0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18022A7E4 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x180247740 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v6);
  }
  return a1;
}
