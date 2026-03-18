/*
 * XREFs of ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801AACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180199CB0 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801AAC80 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 */

__int64 __fastcall CPathGeometry::SetProperty(CPathGeometry *a1, int a2, int a3, const struct CPathData *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 == 4 )
  {
    if ( a3 != 11 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x6Fu);
      return v6;
    }
    CPathGeometry::SetPath(a1, a4);
    return 0;
  }
  v4 = CGeometry::SetProperty((__int64)a1, a2, a3, (__int64)a4);
  v6 = v4;
  if ( v4 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x77u);
  return v6;
}
