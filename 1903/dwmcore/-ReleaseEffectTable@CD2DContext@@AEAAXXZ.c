/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800265EC
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180024C5C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x180026534 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  char *v1; // rbx
  __int64 v2; // rdi

  v1 = (char *)this + 248;
  v2 = 8LL;
  do
  {
    ReleaseInterface<ID2D1Geometry>(v1);
    v1 += 8;
    --v2;
  }
  while ( v2 );
}
