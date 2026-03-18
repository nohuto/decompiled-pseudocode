/*
 * XREFs of ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18014BE44
 * Callers:
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18004AFC0 (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x18014B614 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?RemoveFromDDAExcludeVisualList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014BF14 (-RemoveFromDDAExcludeVisualList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014BF64 (-RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801B9164 (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x21Fu);
  }
  else
  {
    if ( a2 < v2 - 1 )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (v2 - 1));
      v2 = *(_DWORD *)(a1 + 24);
    }
    *(_DWORD *)(a1 + 24) = v2 - 1;
  }
  return v3;
}
