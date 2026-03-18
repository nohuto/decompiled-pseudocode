/*
 * XREFs of ?DrawGeometry@CRenderDataBuilder@@UEAAJII@Z @ 0x180074040
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawGeometry(CRenderDataBuilder *this, int a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rcx

  v6 = DynArrayImpl<0>::Grow((int)this + 16, 1, 16, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x7Bu);
  }
  else
  {
    v9 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *(_DWORD *)(v9 + 4) = 460;
    *(_DWORD *)(v9 + 8) = a2;
    *(_DWORD *)(v9 + 12) = a3;
    *((_DWORD *)this + 10) += 16;
  }
  return v8;
}
