/*
 * XREFs of DCEHitTestWindow @ 0x1C01E645C
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0026CB4 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00ECE48 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     EditionQueryInertiaWorker @ 0x1C02071F0 (EditionQueryInertiaWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z @ 0x1C01E56E8 (-DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z.c)
 *     BuildVertexList @ 0x1C01E6244 (BuildVertexList.c)
 *     DCEInverseTransform @ 0x1C01E6538 (DCEInverseTransform.c)
 */

__int64 __fastcall DCEHitTestWindow(int *a1, __int64 a2, int *a3, __int64 a4)
{
  unsigned int v6; // ebx
  float v8; // xmm6_4
  float v9; // xmm7_4
  int v10; // edi
  __int64 v11; // rcx
  _OWORD v13[12]; // [rsp+20h] [rbp-118h] BYREF

  v6 = 0;
  v8 = (float)*a3;
  v9 = (float)a3[1];
  BuildVertexList((__int64)v13, a1);
  v10 = 0;
  while ( !(unsigned int)DCEPointInTriangle((struct _D3DVERTEX *)&v13[2 * (unsigned int)(3 * v10)], v8, v9) )
  {
    if ( (unsigned int)++v10 >= 2 )
      return v6;
  }
  if ( (unsigned int)DCEInverseTransform(a1, v11, a4, a3) )
    return 1;
  return v6;
}
