/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x1400183A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CStreamGroup>::AddRef(a1 - 24, a2);
}
