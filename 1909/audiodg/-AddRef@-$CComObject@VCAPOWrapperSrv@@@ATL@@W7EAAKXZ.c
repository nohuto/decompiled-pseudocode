/*
 * XREFs of ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x140018D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAPOWrapperSrv>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CAPOWrapperSrv>::AddRef(a1 - 8, a2);
}
