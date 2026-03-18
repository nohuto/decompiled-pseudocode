/*
 * XREFs of ?PushTransform@CRenderDataBuilder@@UEAAJI@Z @ 0x180073A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::PushTransform(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rcx

  v4 = DynArrayImpl<0>::Grow((int)this + 16, 1, 12, 0, 0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x115u);
  }
  else
  {
    v7 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v7 = 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *(_DWORD *)(v7 + 4) = 469;
    *(_DWORD *)(v7 + 8) = a2;
    *((_DWORD *)this + 10) += 12;
    ++*((_DWORD *)this + 2);
  }
  return v6;
}
