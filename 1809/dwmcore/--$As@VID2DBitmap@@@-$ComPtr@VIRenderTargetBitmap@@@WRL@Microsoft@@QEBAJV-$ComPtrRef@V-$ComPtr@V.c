/*
 * XREFs of ??$As@VID2DBitmap@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801D9DE8
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<ID2DBitmap>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5,
           a2);
}
