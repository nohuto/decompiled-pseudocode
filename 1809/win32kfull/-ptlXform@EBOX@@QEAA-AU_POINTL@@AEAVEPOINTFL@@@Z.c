/*
 * XREFs of ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1C0294764
 * Callers:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02944B0 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 */

struct _POINTL __fastcall EBOX::ptlXform(EBOX *this, struct EPOINTFL *a2, float *a3)
{
  unsigned int v6; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  bFToL((float)((float)*((int *)this + 14) * a3[1]) + (float)((float)*((int *)this + 12) * *a3), (int *)&v8, 6u);
  bFToL((float)((float)*((int *)this + 15) * a3[1]) + (float)((float)*((int *)this + 13) * *a3), (int *)&v8 + 1, v6);
  LODWORD(v8) = *((_DWORD *)this + 10) + v8;
  HIDWORD(v8) += *((_DWORD *)this + 11);
  *(_QWORD *)a2 = v8;
  return (struct _POINTL)a2;
}
