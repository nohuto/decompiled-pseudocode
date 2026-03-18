/*
 * XREFs of ?Pop@CRenderDataBuilder@@UEAAJXZ @ 0x180074280
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::Pop(CRenderDataBuilder *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v2 = DynArrayImpl<0>::Grow((int)this + 16, 1, 8, 0, 0LL);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xFFu);
  }
  else
  {
    v5 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_QWORD *)v5 = 8LL;
    *(_DWORD *)(v5 + 4) = 468;
    *((_DWORD *)this + 10) += 8;
    --*((_DWORD *)this + 2);
  }
  return v4;
}
