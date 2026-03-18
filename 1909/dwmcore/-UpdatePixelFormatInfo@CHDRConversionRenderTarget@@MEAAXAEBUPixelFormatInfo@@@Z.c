/*
 * XREFs of ?UpdatePixelFormatInfo@CHDRConversionRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x1801689A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHDRConversionRenderTarget::UpdatePixelFormatInfo(
        CHDRConversionRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 66) + 128LL))(
    *((_QWORD *)this + 66),
    *((unsigned int *)a2 + 1));
}
