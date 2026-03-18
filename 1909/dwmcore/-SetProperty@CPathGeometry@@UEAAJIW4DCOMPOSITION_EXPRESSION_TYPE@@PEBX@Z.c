/*
 * XREFs of ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801EDCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C3E90 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801EDC70 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 */

__int64 __fastcall CPathGeometry::SetProperty(CPathGeometry *a1, int a2, int a3, const struct CPathData *a4)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 == 4 )
  {
    if ( a3 != 11 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0x6Cu, 0LL);
      return v6;
    }
    CPathGeometry::SetPath(a1, a4);
    return 0;
  }
  v4 = CGeometry::SetProperty((__int64)a1, a2, a3);
  v6 = v4;
  if ( v4 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x74u, 0LL);
  return v6;
}
