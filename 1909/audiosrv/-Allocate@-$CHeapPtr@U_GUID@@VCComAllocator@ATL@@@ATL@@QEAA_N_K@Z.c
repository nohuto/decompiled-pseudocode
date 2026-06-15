/*
 * XREFs of ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18011D09C
 * Callers:
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x180063804 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180048D50 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

bool __fastcall ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(_QWORD *a1, unsigned __int64 a2)
{
  LPVOID v4; // rax
  SIZE_T cb; // [rsp+40h] [rbp+18h] BYREF

  cb = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&cb, a2, 0x10uLL) < 0 )
    return 0;
  if ( cb <= 0x7FFFFFFF )
    v4 = CoTaskMemAlloc((unsigned int)cb);
  else
    v4 = 0LL;
  *a1 = v4;
  return v4 != 0LL;
}
