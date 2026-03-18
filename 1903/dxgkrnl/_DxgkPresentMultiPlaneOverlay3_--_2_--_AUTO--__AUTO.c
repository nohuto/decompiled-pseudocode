/*
 * XREFs of _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C027E820
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0284140 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(void **a1)
{
  operator delete[](*a1);
  operator delete[](a1[1]);
  operator delete[](a1[2]);
  operator delete[](a1[3]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  operator delete[](a1[6]);
  operator delete(a1[7]);
}
