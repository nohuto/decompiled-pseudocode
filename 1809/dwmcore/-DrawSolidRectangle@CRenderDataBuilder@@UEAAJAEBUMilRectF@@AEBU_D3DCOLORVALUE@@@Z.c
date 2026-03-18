/*
 * XREFs of ?DrawSolidRectangle@CRenderDataBuilder@@UEAAJAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18014A200
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawSolidRectangle(
        CRenderDataBuilder *this,
        const struct MilRectF *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  _DWORD *v10; // rbx

  v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 40, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x12Du);
  }
  else
  {
    v9 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    v10 = v9 + 1;
    *v9 = 40;
    memset_0(v9 + 1, 0, 0x24uLL);
    *v10 = 465;
    *(_OWORD *)(v10 + 1) = *(_OWORD *)a2;
    *(struct _D3DCOLORVALUE *)(v10 + 5) = *(const struct _D3DCOLORVALUE *)&a3->r;
    *((_DWORD *)this + 10) += 40;
  }
  return v8;
}
