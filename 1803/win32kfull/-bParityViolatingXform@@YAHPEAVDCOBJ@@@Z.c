/*
 * XREFs of ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C0006E0C
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C003EDCC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bParityViolatingXform(float **a1)
{
  float *v1; // r11
  int v2; // ecx
  unsigned int v4; // r10d
  bool v5; // zf

  v1 = *a1;
  v2 = *(_DWORD *)(*((_QWORD *)*a1 + 10) + 352LL);
  if ( (v2 & 2) != 0 )
  {
    if ( (v2 & 0x1000) != 0 )
      return 0LL;
    v4 = 0;
    v5 = (__PAIR64__(v1[82] > 0.0, *((_DWORD *)v1 + 82)) - COERCE_UNSIGNED_INT(0.0)) >> 32 == (__PAIR64__(
                                                                                                 v1[85] > 0.0,
                                                                                                 *((_DWORD *)v1 + 85))
                                                                                             - COERCE_UNSIGNED_INT(0.0)) >> 32;
  }
  else
  {
    v4 = 0;
    v5 = (__PAIR64__(v1[115] > 0.0, *((_DWORD *)v1 + 115)) - COERCE_UNSIGNED_INT(0.0)) >> 32 == (__PAIR64__(
                                                                                                   v1[116] > 0.0,
                                                                                                   *((_DWORD *)v1 + 116))
                                                                                               - COERCE_UNSIGNED_INT(0.0)) >> 32;
  }
  LOBYTE(v4) = !v5;
  return v4;
}
