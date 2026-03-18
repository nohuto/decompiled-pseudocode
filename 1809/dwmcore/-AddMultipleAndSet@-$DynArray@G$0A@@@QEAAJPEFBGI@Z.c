/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x180190618
 * Callers:
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180190B84 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<unsigned short,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 6;
  v5 = (int)v2 + 6 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 6 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 2, 6, a2);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    v6 = *(_QWORD *)a1;
    *(_QWORD *)(v6 + 2 * v2) = *(_QWORD *)a2;
    *(_DWORD *)(v6 + 2LL * (unsigned int)v2 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 24) = v4;
  }
  return v5;
}
