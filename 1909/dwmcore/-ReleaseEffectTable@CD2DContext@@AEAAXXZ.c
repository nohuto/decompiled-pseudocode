/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18002DD5C
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18002CB1C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x18002DCA4 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi

  v1 = (__int64 *)((char *)this + 248);
  v2 = 8LL;
  do
  {
    ReleaseInterface<ID2D1Geometry>(v1++);
    --v2;
  }
  while ( v2 );
}
