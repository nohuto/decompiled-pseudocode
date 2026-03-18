/*
 * XREFs of ?DrawTileImage@CRenderDataBuilder@@UEAAJIAEBUMilRectF@@MAEBUMilPoint2F@@@Z @ 0x180075870
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawTileImage(
        CRenderDataBuilder *this,
        int a2,
        const struct MilRectF *a3,
        float a4,
        const struct MilPoint2F *a5)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  _DWORD *v11; // rcx
  _DWORD *v12; // rbx
  __int128 v13; // xmm0

  v8 = DynArrayImpl<0>::Grow((int)this + 16, 1, 40, 0, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD5u);
  }
  else
  {
    v11 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    v12 = v11 + 1;
    *v11 = 40;
    memset_0(v11 + 1, 0, 0x24uLL);
    *v12 = 466;
    v12[1] = a2;
    v13 = *(_OWORD *)a3;
    *((float *)v12 + 6) = a4;
    *(_OWORD *)(v12 + 2) = v13;
    *(_QWORD *)(v12 + 7) = *(_QWORD *)a5;
    *((_DWORD *)this + 10) += 40;
  }
  return v10;
}
