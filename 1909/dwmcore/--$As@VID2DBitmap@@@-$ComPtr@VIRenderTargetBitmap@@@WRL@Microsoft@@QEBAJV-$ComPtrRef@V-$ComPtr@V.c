/*
 * XREFs of ??$As@VID2DBitmap@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020C99C
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<ID2DBitmap>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(a2);
  return v4(v2, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, a2);
}
