/*
 * XREFs of bFToL @ 0x1C006312C
 * Callers:
 *     efSin @ 0x1C00124F0 (efSin.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0019E30 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     vConvertXformToMatrix @ 0x1C001A920 (vConvertXformToMatrix.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0024F00 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C0062918 (bCvtPts1.c)
 *     bCvtPts @ 0x1C0072340 (bCvtPts.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C00C1E44 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C00C1F20 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C8624 (-vMakeIso@DC@@QEAAXXZ.c)
 *     bCvtVts @ 0x1C0168BD8 (bCvtVts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFToL(float a1, int *a2, char a3)
{
  unsigned int v4; // r9d
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx

  v4 = 1;
  v5 = (unsigned __int8)(SLODWORD(a1) >> 23) - 118 + 4;
  if ( (a3 & 8) == 0 )
    v5 = (unsigned __int8)(SLODWORD(a1) >> 23) - 118;
  if ( v5 > 40 )
  {
    return 0;
  }
  else
  {
    v6 = LODWORD(a1) & 0x7FFFFF | 0x800000LL;
    if ( v5 < 0 )
      v7 = v6 >> -(char)v5;
    else
      v7 = v6 << v5;
    v8 = v7 + 0x80000000LL;
    if ( (a3 & 1) != 0 )
      v8 = v7;
    v9 = v8 >> 32;
    v10 = -(int)v9;
    if ( a1 >= 0.0 )
      v10 = v9;
    *a2 = v10;
  }
  return v4;
}
