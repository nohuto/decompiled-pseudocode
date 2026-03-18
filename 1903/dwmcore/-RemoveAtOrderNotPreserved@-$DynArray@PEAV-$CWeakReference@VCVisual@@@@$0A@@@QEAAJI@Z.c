/*
 * XREFs of ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180177C04
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x1801772BC (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x1801777A0 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?RemoveFromDDAExcludeVisualList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180177CDC (-RemoveFromDDAExcludeVisualList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180177D2C (-RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801CDE14 (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x222u, 0LL);
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
