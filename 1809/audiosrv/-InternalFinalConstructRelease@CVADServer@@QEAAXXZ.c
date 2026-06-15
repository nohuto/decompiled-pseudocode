/*
 * XREFs of ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800D9E1C
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002D580 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVADServer::InternalFinalConstructRelease(CVADServer *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 8);
}
