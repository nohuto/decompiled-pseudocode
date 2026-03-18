/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULightDesc@CLightStack@@$0A@@@QEAAJPEFBULightDesc@CLightStack@@I@Z @ 0x18000ED3C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CLightStack::LightDesc,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  v4 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16LL, 1LL, a2);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16 * v2) = *a2;
    *(_DWORD *)(a1 + 24) = v3;
  }
  return v4;
}
